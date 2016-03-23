//
// Created by balin on 21/03/16.
//

#include "SDMatrix.h"


SDMatrix SDMatrix::operator+(const SDMatrix &rmat) const {
#ifdef __STOKES_DEBUG__
    assert( _dim == rmat._dim );
    assert( _N   == rmat._N );
#endif
    mat new_elems = _elems + rmat._elems;
    SDMatrix result ( _dim, _N, new_elems );
    return result;
};


// Matrix-vector multiplication
SDVector SDMatrix::operator*(const SDVector &rvec) const {
#ifdef __STOKES_DEBUG__
    assert( _dim == rmat._dim );
    assert( _N   == rmat._N );
#endif

    vec new_elems = _elems * rvec._elems;
    SDVector result( _dim, _N, new_elems );
    return result;

}