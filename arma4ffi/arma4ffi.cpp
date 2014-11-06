
#include "arma4ffi.h"
#include <armadillo>
#include <iostream>

// struct wrapping mat - for typechecking
struct mat_holder
{
    // \todo - add type id/ptr (e.g. using boost::typeindex) and appropriate check on cast
    arma::mat val;
    mat_holder(const arma::mat & val) : val(val) {}
    // \todo - add move ctor
    static mat_holder * cast(mat_handle h) { return reinterpret_cast<mat_holder*>(h);}
};

// \todo - make move variant (or universal one)
mat_handle make_mat(const arma::mat & val)
{
    return reinterpret_cast<mat_handle >(new mat_holder(val));
}

void release_mat(mat_handle mat)
{
    delete mat_holder::cast(mat);
}

mat_handle randu_mat(int rows, int cols)
{
    return make_mat( arma::randu<arma::mat>(rows, cols));
}

mat_handle mul_mat(mat_handle a, mat_handle b)
{
    return make_mat( mat_holder::cast(a)->val * mat_holder::cast(b)->val);
}

mat_handle t_mat(mat_handle mat)
{
    return make_mat( mat_holder::cast(mat)->val.t());
}

void print_mat(mat_handle mat)
{
    std::cout << mat_holder::cast(mat)->val;
}

