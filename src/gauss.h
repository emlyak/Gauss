#ifndef GAUSS_H
#define GAUSS_H

#include <vector>
#include <iterator>
#include "dllexport.h"

using vec_d = std::vector<double>;
using matrix = std::vector<vec_d>;

DLL_GAUSS_EXPORT
class Gauss
{
public:
    static
    DLL_GAUSS_EXPORT
    vec_d solve(
        matrix a,
        vec_d b
    );
};

#endif