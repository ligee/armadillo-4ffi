#include <iostream>
#include "arma4ffi/arma4ffi.h"

using namespace std;

int main() {
    cout << "Hello, Armadillo!" << endl;
    auto A = randu_mat(4,5);
    auto B = randu_mat(4,5);
    auto Bt = t_mat(B);
    release_mat(B);
    auto ABt = mul_mat(A, Bt);
    release_mat(A);
    print_mat(ABt);
    release_mat(ABt);
    cout << endl;
    cout << "done" << endl;
    return 0;
}