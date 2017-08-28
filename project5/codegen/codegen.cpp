#include <cassert>
#include <typeinfo>
#include <iostream>

#include "ast.hpp"
#include "symtab.hpp"
#include "primitive.hpp"

using namespace std;

class Codegen : public Visitor
{
  private:
    FILE* m_outputfile;
    SymTab *m_st;

    // Basic size of a word (integers and booleans) in bytes
    static const int wordsize = 4;

    int label_count; // Access with new_label

    // Helpers
    // This is used to get new unique labels (cleverly names label1, label2, ...)
    int new_label()
    {
        return label_count++;
    }

    void set_text_mode()
    {
        fprintf(m_outputfile, ".text\n\n");
    }

    void set_data_mode()
    {
        fprintf(m_outputfile, ".data\n\n");
    }

    // PART 1:
    // 1) get arithmetic expressions on integers working:
    //  you wont really be able to run your code,
    //  but you can visually inspect it to see that the correct
    //  chains of opcodes are being generated.
    // 2) get procedure calls working:
    //  if you want to see at least a very simple program compile
    //  and link successfully against gcc-produced code, you
    //  need to get at least this far
    // 3) get boolean operation working
    //  before we can implement any of the conditional control flow
    //  stuff, we need to have booleans worked out.
    // 4) control flow:
    //  we need a way to have if-elses and while loops in our language.
    // 5) arrays: just like variables, but with an index

    // Hint: the symbol table has been augmented to track an offset
    //  with all of the symbols.  That offset can be used to figure
    //  out where in the activation record you should look for a particuar
    //  variable


    ///////////////////////////////////////////////////////////////////////////////
    //
    //  function_prologue
    //  function_epilogue
    //
    //  Together these two functions implement the callee-side of the calling
    //  convention.  A stack frame has the following layout:
    //
    //                         <- SP (before pre-call / after epilogue)
    //  high -----------------
    //       | actual arg 1  |
    //       |    ...        |
    //       | actual arg n  |
    //       -----------------
    //       |  Return Addr  |
    //       =================
    //       | temporary 1   | <- SP (when starting prologue)
    //       |    ...        |
    //       | temporary n   |
    //   low ----------------- <- SP (when done prologue)
    //
    //
    //              ||
    //              ||
    //             \  /
    //              \/
    //
    //
    //  The caller is responsible for placing the actual arguments
    //  and the return address on the stack. Actually, the return address
    //  is put automatically on the stack as part of the x86 call instruction.
    //
    //  On function entry, the callee
    //
    //  (1) allocates space for the callee's temporaries on the stack
    //
    //  (2) saves callee-saved registers (see below) - including the previous activation record pointer (%ebp)
    //
    //  (3) makes the activation record pointer (frmae pointer - %ebp) point to the start of the temporary region
    //
    //  (4) possibly copies the actual arguments into the temporary variables to allow easier access
    //
    //  On function exit, the callee:
    //
    //  (1) pops the callee's activation record (temporary area) off the stack
    //
    //  (2) restores the callee-saved registers, including the activation record of the caller (%ebp)
    //
    //  (3) jumps to the return address (using the x86 "ret" instruction, this automatically pops the
    //      return address off the stack
    //
    //////////////////////////////////////////////////////////////////////////////
    //
    // Since we are interfacing with code produced by GCC, we have to respect the
    // calling convention that GCC demands:
    //
    // Contract between caller and callee on x86:
    //    * after call instruction:
    //           o %eip points at first instruction of function
    //           o %esp+4 points at first argument
    //           o %esp points at return address
    //    * after ret instruction:
    //           o %eip contains return address
    //           o %esp points at arguments pushed by caller
    //           o called function may have trashed arguments
    //           o %eax contains return value (or trash if function is void)
    //           o %ecx, %edx may be trashed
    //           o %ebp, %ebx, %esi, %edi must contain contents from time of call
    //    * Terminology:
    //           o %eax, %ecx, %edx are "caller save" registers
    //           o %ebp, %ebx, %esi, %edi are "callee save" registers
    ////////////////////////////////////////////////////////////////////////////////


    void emit_prologue(SymName *name, unsigned int size_locals, unsigned int num_args)
    {
        cout << "_" << name->spelling() << ":"            << endl;
        cout << "   push %ebp"                            << endl;
        cout << "   mov %esp, %ebp"                       << endl;
        cout << "   sub $" <<  size_locals << ", %esp"    << endl;
    }

    void emit_epilogue()
    {
        cout << "mov %ebp, %esp"  << endl;   
        cout << "pop %ebp"        << endl;    
        cout << "ret"             << endl;     
    }


  public:

    Codegen(FILE* outputfile, SymTab* st)
    {
        m_outputfile = outputfile;
        m_st = st;
        label_count = 0;
    }

    void visitProgramImpl(ProgramImpl* p)
    {
      //Print the function, .data, and .text
        cout << "# ProgramImpl"   << endl;
        cout << ".data"           << endl;
        cout << ".text"           << endl;
	//cast the iterator and loop through the proc list to name the .globl calls
        list<Proc_ptr>::iterator iter;
        for (iter = p->m_proc_list->begin(); iter != p->m_proc_list->end(); iter++){
            ProcImpl *piCast = dynamic_cast<ProcImpl*>(*iter);
            cout <<  ".globl _" << piCast->m_symname->spelling() << endl;
        }
	//visit the children
        p->visit_children(this);
	//print the function
        cout << "# ProgramImpl2" << endl;
    }

    void visitProcImpl(ProcImpl* p)
    {
      /*
        //print the function
        cout << "# ProcImpl"     << endl;

	//make counters to let us allocate space
	unsigned int varCount = 0;
        unsigned int nonstringCount = 0;
        unsigned int totalCount = 0;

	//make iterators that allow casting and looping
        list<Decl_ptr>::iterator iter;

	//loop through the decl_list and count the number of variables
        for (iter = p->m_decl_list->begin(); iter != p->m_decl_list->end(); iter++)
        {
	   //another for loop to count how many variable declarations there are for a certain type (i.e. x,y: integer; has 2 variables for type integer)
	   //this will allow us to multiple out the correct amount for allocation

	    //count the number of nonstrings 
            //make an if statement to check if the function is of type string - if not then we will usually set the allocation to 4 bits for ease

	    //else take the size of the string and raise it to the nearest multiple of 4 using modulo

	    //get the total space needed for allocation and then reset the variables
	    //we would use our counters - totalCount would equal the number of variables times the space for that type of variable
	 }

	//print out the prologue/epilogue, visit children, and print out 
        emit_prologue( // fill this out //);
        p->visit_children(this);
        cout << "# ProcImpl 2"  << endl;
        emit_epilogue();
        cout << "   leave"      << endl;
      */

    }

    void visitProcedure_blockImpl(Procedure_blockImpl* p)
    {
      //after allocation we would have to push values onto the stack 
        //cout << " push %eax"  << endl;
        //cout << " push %ecx"  << endl;
        //cout << " push %edx"  << endl;

      //do some functions
        p->visit_children(this);

      //pop the values from the stack
        //cout << " pop  %edx"  << endl;
        //cout << " pop  %ecx"  << endl;
        //cout << " pop  %eax"  << endl;
    }

    void visitNested_blockImpl(Nested_blockImpl* p)
    {
        p->visit_children(this);
    }

    void visitAssignment(Assignment* p)
    {
        p->visit_children(this);
    }

    void visitCall(Call* p)
    {
        p->visit_children(this);
    }

    void visitReturn(Return* p)
    {
        p->visit_children(this);
        cout << "# Return"   << endl;
        cout << " pop %eax"  << endl;
    }

    void visitIfNoElse(IfNoElse* p)
    {
        p->visit_children(this);
    }

    void visitIfWithElse(IfWithElse* p)
    {
        p->visit_children(this);
    }

    void visitWhileLoop(WhileLoop* p)
    {
        p->visit_children(this);
    }

    void visitCodeBlock(CodeBlock *p) 
    {
        p->visit_children(this);
    }

    void visitDeclImpl(DeclImpl* p)
    {
        p->visit_children(this);
    }

    void visitTInteger(TInteger* p)
    {
        p->visit_children(this);
    }

    void visitTIntPtr(TIntPtr* p)
    {
        p->visit_children(this);
    }

    void visitTBoolean(TBoolean* p)
    {
        p->visit_children(this);
    }

    void visitTCharacter(TCharacter* p)
    {
        p->visit_children(this);
    }

    void visitTCharPtr(TCharPtr* p)
    {
        p->visit_children(this);
    }

    void visitTString(TString* p)
    {
        p->visit_children(this);
    }


  //Boolean comparisons
  void visitCompare(Compare* p)
    {
        p->visit_children(this);
        cout << "#Compare"         << endl;
        cout << " pop  %edx"       << endl;
        cout << " pop  %eax"       << endl;
        cout << " cmp  %edx, %eax" << endl;
        cout << " je   true_eq"    << endl;
        cout << " jmp  false_eq"   << endl;
        cout << " true_eq:"        << endl;
        cout << " push $1"         << endl;
        cout << " jmp  end_eq"     << endl;
        cout << " false_eq:"       << endl;
        cout << " push $0"         << endl;
        cout << " end_eq:"         << endl;
    }
    void visitNoteq(Noteq* p)
    {
        p->visit_children(this);
        cout << "#Not Equal"        << endl;
        cout << " pop  %edx"        << endl;
        cout << " pop  %eax"        << endl;
        cout << " cmp  %edx, %eax"  << endl;
        cout << " je   false_eq"    << endl;
        cout << " jmp  true_eq"     << endl;
        cout << " true_eq:"         << endl;
        cout << " push $1"          << endl;
        cout << " jmp  end_eq"      << endl;
        cout << " false_eq:"        << endl;
        cout << " push $0"          << endl;
        cout << " end_eq:"          << endl;
    }
    void visitGt(Gt* p)
    {
        p->visit_children(this);
        cout << "#Greater than"     << endl;
        cout << " pop  %edx"        << endl;
        cout << " pop  %eax"        << endl;
        cout << " cmp  %eax, %edx"  << endl;
        cout << " jl   true_lt"     << endl;
        cout << " jmp  false_lt"    << endl;
        cout << " true_lt:"         << endl;
        cout << " push $1"          << endl;
        cout << " jmp  end_lt"      << endl;
        cout << " false_lt:"        << endl;
        cout << " push $0"          << endl;
        cout << " end_lt:"          << endl;
    }
    void visitGteq(Gteq* p)
    {
        p->visit_children(this);
        cout << "#Greater than equal"  << endl;
        cout << " pop  %edx"           << endl;
        cout << " pop  %eax"           << endl;
        cout << " cmp  %eax, %edx"     << endl;
        cout << " jle  true_leq"       << endl;
        cout << " jmp  false_leq"      << endl;
        cout << " true_leq:"           << endl;
        cout << " push $1"             << endl;
        cout << " jmp  end_leq"        << endl;
        cout << " false_leq:"          << endl;
        cout << " push $1"             << endl;
        cout << " end_leq:"            << endl;
    }
    void visitLt(Lt* p)
    {
        p->visit_children(this);
        cout << "#Less than"         << endl;
        cout << " pop  %edx"        << endl;
        cout << " pop  %eax"        << endl;
        cout << " cmp  %edx, %eax"  << endl;
        cout << " jl   true_lt"     << endl;
        cout << " jmp  false_lt"    << endl;
        cout << " true_lt:"         << endl;
        cout << " push $1"          << endl;
        cout << " jmp  end_lt"      << endl;
        cout << " false_lt:"        << endl;
        cout << " push $0"          << endl;
        cout << " end_lt:"          << endl;
    }
    void visitLteq(Lteq* p)
    {
        p->visit_children(this);
        cout << "#Less than equal"  << endl;
        cout << " pop  %edx"        << endl;
        cout << " pop  %eax"        << endl;
        cout << " cmp  %edx, %eax"  << endl;
        cout << " jle  true_leq"    << endl;
        cout << " jmp  false_leq"   << endl;
        cout << " true_leq:"        << endl;
        cout << " push $1"          << endl;
        cout << " jmp  end_leq"     << endl;
        cout << " false_leq:"       << endl;
        cout << " push $1"          << endl;
        cout << " end_leq:"         << endl;
    }

    // Arithmetic and logic operations
    void visitAnd(And* p)
    {
        p->visit_children(this);
        cout << "# And"             << endl;
        cout << " pop  %edx"        << endl;
        cout << " pop  %eax"        << endl;
        cout << " and  %edx, %eax"  << endl;
        cout << " push %eax"        << endl;
    }

    void visitOr(Or* p)
    {
        p->visit_children(this);
        cout << "# Or"              << endl;
        cout << " pop  %edx"        << endl;
        cout << " pop  %eax"        << endl;
        cout << " or   %edx, %eax"  << endl;
        cout << " push %eax"        << endl;
    }

    void visitMinus(Minus* p)
    {
        p->visit_children(this);
        cout << "# Minus"            << endl;
        cout << " pop  %edx"         << endl;
        cout << " pop  %eax"         << endl;
        cout << " subl  %edx, %eax"  << endl;
        cout << " push %eax"         << endl;
    }

    void visitPlus(Plus* p)
    {
        p->visit_children(this);
        cout << "# Plus"                << endl;
        cout << "   pop  %edx"          << endl;
        cout << "   pop  %eax"          << endl;
        cout << "   addl  %edx, %eax"   << endl;
        cout << "   push %eax"          << endl;
    }

    void visitTimes(Times* p)
    {
        p->visit_children(this);
        cout << "# Times"           << endl;
        cout << " pop  %edx"        << endl;
        cout << " pop  %eax"        << endl;
        cout << " imul %edx, %eax"  << endl;
        cout << " push %eax"        << endl;
    }

    void visitDiv(Div* p)
    {
        p->visit_children(this);
        cout << "# Division"   << endl;
        cout << " pop  %ebx"   << endl;
        cout << " pop  %eax"   << endl;
        cout << " cdq"         << endl;
        cout << " idiv %ebx"   << endl;
        cout << " push %eax"   << endl;
    }

    void visitNot(Not* p)
    {
        p->visit_children(this);
        cout << "# Not"       << endl;
        cout << " pop  %eax"  << endl;
        cout << " not  %eax"  << endl;
        cout << " push %eax"  << endl;
    }

    void visitUminus(Uminus* p)
    {
        p->visit_children(this);
        cout << "# Uminus"    << endl;
        cout << " pop  %eax"  << endl;
        cout << " neg  %eax"  << endl;
        cout << " push %eax"  << endl;
    }

    // Variable and constant access
    void visitIdent(Ident* p)
    {
        p->visit_children(this);
    }

    void visitBoolLit(BoolLit* p)
    {
        p->visit_children(this);
        cout << "# BoolLit"                          << endl;
        cout << " push $" << p->m_primitive->m_data  << endl;
    }

    void visitCharLit(CharLit* p)
    {
        p->visit_children(this);
    }

    void visitIntLit(IntLit* p)
    {
        p->visit_children(this);
        cout   <<  "# IntLit"                             << endl;
        cout   <<  " push $"   << p->m_primitive->m_data  << endl;
    }

    void visitNullLit(NullLit* p)
    {
        p->visit_children(this);
    }

    void visitArrayAccess(ArrayAccess* p)
    {
        p->visit_children(this);
    }

    // LHS
    void visitVariable(Variable* p)
    {
        p->visit_children(this);
    }

    void visitDerefVariable(DerefVariable* p)
    {
        p->visit_children(this);
    }

    void visitArrayElement(ArrayElement* p)
    {
        p->visit_children(this);
    }

    // Special cases
    void visitSymName(SymName* p)
    {
        
    }

    void visitPrimitive(Primitive* p)
    {
        
    }

    // Strings
    void visitStringAssignment(StringAssignment* p)
    {
        p->visit_children(this);
    }

    void visitStringPrimitive(StringPrimitive* p)
    {
        
    }

    void visitAbsoluteValue(AbsoluteValue* p)
    {
        p->visit_children(this);
    }

    // Pointer
    void visitAddressOf(AddressOf* p)
    {
        p->visit_children(this);
    }

    void visitDeref(Deref* p)
    {
        p->visit_children(this);
    }
};


void dopass_codegen(Program_ptr ast, SymTab* st)
{
    Codegen* codegen = new Codegen(stdout, st);
    ast->accept(codegen);
    delete codegen;
}
