//
// Created by balin on 17/03/16.
//

#include "Data.h"

void Data::updateWithHydro(const std::vector &vector, const Boundaries &boundaries) {

    calculateForces();
    calculateBaseNoise();

}

void Data::updateNoHydro(const std::vector &vector, const Boundaries &boundaries) {

    calculateForces();
    calculateBaseNoise();

}
