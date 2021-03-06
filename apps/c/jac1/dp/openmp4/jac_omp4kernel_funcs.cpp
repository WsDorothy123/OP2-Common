//
// auto-generated by op2.py
//

// header
#include "../user_types.h"
#include "op_lib_cpp.h"

// global constants
double alpha_ompkernel;

void op_decl_const_char(int dim, char const *type,
  int size, char *dat, char const *name){
  if(!strcmp(name, "alpha")) {
    memcpy(&alpha_ompkernel, dat, dim*size);
  #pragma omp target enter data map(to:alpha_ompkernel)
  }
}
// user kernel files
#include "res_omp4kernel_func.cpp"
#include "update_omp4kernel_func.cpp"
