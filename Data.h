//
// Created by balin on 17/03/16.
//

#ifndef STOKES_DATA_H
#define STOKES_DATA_H


#include <vector>
#include <iostream>
#include "Boundaries.h"
#include "ParticleSet.h"
#include "SDVector.h"
#include <memory>

class Data {

public:

    void updateWithHydro(const std::vector &vector, const Boundaries &boundaries);
    void updateNoHydro(const std::vector &vector, const Boundaries &boundaries);

private:

    void calculateForces();

    SDVector r;
    SDVector f;
    SDMatrix D;
    SDMatrix B;

};


#endif //STOKES_DATA_H
