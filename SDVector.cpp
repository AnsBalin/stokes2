//
// Created by balin on 18/03/16.
//

#include <iostream>
#include "SDVector.h"

SDVector SDVector::operator+(const SDVector &rvec) const {
#ifdef __STOKES_DEBUG__
    assert( _dim == rvec._dim );
    assert( _N   == rvec._N );
#endif
    vec new_elems = _elems + rvec._elems;
    SDVector result ( _dim, _N, new_elems );
    return result;
};

double SDVector::operator*(const SDVector &rvec) const {
#ifdef __STOKES_DEBUG__
    assert( _dim == rvec._dim );
    assert( _N   == rvec._N );
#endif

    double result = dot( _elems, rvec._elems );
    return result;

}