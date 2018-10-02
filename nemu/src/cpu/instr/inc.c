#include "cpu/instr.h"

static void instr_execute_2op(){
	operand_read(&opr_src);
	opr_src.val += 1;
	operand_write(&opr_src);
}

make_instr_impl_1op(inc, rm, v)
