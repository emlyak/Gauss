#include "gauss.h"

vec_d Gauss::solve(
    matrix a,
    vec_d b
)
{
    int rows = a.size();
    int cols = a[0].size();

    // forward, make triangle matrix
    for (std::size_t i = 0; i < rows - 1; ++i)
    {   
        // if element is zero swap row to row with max element
        if (a[i][i] == 0.)
        {
            std::size_t max_el = i + 1;

            for (std::size_t j = max_el; j < rows; ++j)
            {
                if (a[j][i] > a[max_el][i])
                    max_el = j;
            }
            a[i].swap(a[max_el]);
        }

        for (std::size_t k = i + 1; k < rows; ++k)
        {
            double buf = a[k][i];
            for (std::size_t j = i; j < cols; ++j)
            {
                a[k][j] -= a[i][j] * buf / a[i][i]; 
            }
            b[k] -= b[i] * buf / a[i][i];
        }
    }

    vec_d solution (b.size());

    for (int i (rows - 1); i > -1; --i)
    {
        double sum = 0.;
        for (int j (cols - 1); j > i; --j)
        {
            sum += solution[j] * a[i][j];
        }
        solution[i] = (b[i] - sum) / a[i][i];
    }

    return solution;
}