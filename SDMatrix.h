//
// Created by balin on 21/03/16.
//
#ifndef STOKES_SDMATRIX_H
#define STOKES_SDMATRIX_H
#include "SDVector.h"
#include "armadillo"
#include <vector>

class SDVector;
using namespace arma;

class SDMatrix {

public:

    SDMatrix( int dim, int N ):
            _dim{dim},
            _N{N},
            _elems( dim*N, dim*N, fill::randu )
    { };

    SDMatrix( int dim, int N, const mat& _elems ) :
            _dim{dim},
            _N{N},
            _elems( _elems )
    {};

    double get(int n) const { return _elems(n);};
    SDMatrix operator+(const SDMatrix& rmat) const;
    SDVector operator*(const SDVector& rmat) const;
    void print() const { _elems.print(); };

private:

    int _dim;
    int _N;
    mat _elems;
};


#endif //STOKES_SDMATRIX_H
