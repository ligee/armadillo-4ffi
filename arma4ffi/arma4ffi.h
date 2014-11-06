
#ifndef _KARMADILLO_LIB_KARMADILLO_H
#define _KARMADILLO_LIB_KARMADILLO_H

extern "C" {

// values and memory management

typedef void * mat_handle;

void release_mat(mat_handle mat);

// gen

mat_handle randu_mat(int rows, int cols);

// ops

mat_handle mul_mat(mat_handle a, mat_handle b);

mat_handle t_mat(mat_handle mat);

// io

void print_mat(mat_handle mat);

}

#endif // _KARMADILLO_LIB_KARMADILLO_H

