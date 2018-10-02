#include "cpu/instr.h"

static void instr_execute_2op_add(){
	operand_read(&opr_src);
	opr_dest.val = alu_add(opr_src.val, opr_dest.val, data_size);
	operand_write(&opr_dest);
}

make_instr_impl_2op_kind(add, i, rm, v)
