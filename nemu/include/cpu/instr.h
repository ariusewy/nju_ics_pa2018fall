#ifndef __INSTRUCTIONS_H__
#define __INSTRUCTIONS_H__

#include "nemu.h"
#include "cpu/cpu.h"
#include "cpu/fpu.h"
#include "cpu/modrm.h"
#include "cpu/operand.h"
#include "cpu/instr_helper.h"
#include "memory/memory.h"
#include <cpu-ref/instr_ref.h>

#include <stdio.h>
 
extern uint8_t data_size;

#include "cpu/instr/mov.h"
#include "cpu/instr/jmp.h"
#include "cpu/instr/shift.h"
#include "cpu/instr/flags.h"
#include "cpu/instr/group.h"
#include "cpu/instr/special.h"
#include "cpu/instr/x87.h"

/* TODO: add more instructions here */
make_instr_func(push_r_v);
make_instr_func(push_rm_v);
make_instr_func(push_i_b);
make_instr_func(pop_r_v);

make_instr_func(cmp_i2rm_v);
make_instr_func(cmp_i2rm_b);
make_instr_func(cmp_i2rm_bv);
make_instr_func(cmp_r2rm_v);
make_instr_func(cmp_rm2r_v);
make_instr_func(cmp_i2a_b);

make_instr_func(lea);
make_instr_func(leave);

make_instr_func(call_near);
make_instr_func(ret_near);

make_instr_func(add_r2rm_v);
make_instr_func(add_i2rm_v);
make_instr_func(add_i2a_v);
make_instr_func(add_i2rm_bv);

make_instr_func(adc_r2rm_v);

make_instr_func(sub_i2rm_bv);
make_instr_func(sub_r2rm_v);
make_instr_func(sub_rm2r_v);

make_instr_func(and_i2rm_bv);
make_instr_func(and_rm2r_b);

make_instr_func(or_r2rm_v);
make_instr_func(or_rm2r_b);

make_instr_func(xor_r2rm_v);

make_instr_func(not_rm_v);

make_instr_func(inc_rm_v);
make_instr_func(inc_r_v);
make_instr_func(dec_r_v);
make_instr_func(dec_rm_v);

make_instr_func(test_r2rm_b);
make_instr_func(test_r2rm_v);

make_instr_func(je_short_);
make_instr_func(jg_short_);
make_instr_func(jna_short_);
make_instr_func(jl_short_);
make_instr_func(jge_short_);
make_instr_func(jle_short_);
make_instr_func(jne_short_);

make_instr_func(jna_near);
make_instr_func(jl_near);
make_instr_func(jle_near);

make_instr_func(setne_b);
#endif
