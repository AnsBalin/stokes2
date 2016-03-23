//
// Created by balin on 18/03/16.
//

#ifndef STOKES_SDVECTOR_H
#define STOKES_SDVECTOR_H


#include "armadillo"
#include <vector>
#include "SDMatrix.h"

using namespace arma;

class SDVector {
friend class SDMatrix;
public:

    SDVector( int dim, int N ):
            _dim{dim},
            _N{N},
            _elems( dim*N, fill::randu )
            { };

    SDVector( int dim, int N, const vec& _elems ) :
            _dim{dim},
            _N{N},
            _elems( _elems )
            {};

    double get(int n) const { return _elems(n);};
    SDVector operator+(const SDVector& rvec) const;
    double operator*(const SDVector& rvec) const;
    void print() const { _elems.print(); };


private:

    int _dim;
    int _N;
    vec _elems;
};




#endif //STOKES_SDVECTOR_H
