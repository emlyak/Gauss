#ifndef GAUSS_H
#define GAUSS_H

#include <vector>
#include <iterator>

using vec_d = std::vector<double>;
using matrix = std::vector<vec_d>;

class Gauss
{
public:
    static
    vec_d solve(
        matrix a,
        vec_d b
    );
};

#endif