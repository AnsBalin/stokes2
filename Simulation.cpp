//
// Created by balin on 17/03/16.
//

#include <zconf.h>
#include "Simulation.h"


void Simulation::run(unsigned int timeSteps) {


    while( timeSteps-- > 0 ){


        //SDVector separations = entity::calculateSeparations( _entities );
        for( auto entity : _entities ){

            //entity.computeForces( const SDVector& _r, SDVector& _f );
            //entity.computeInternalForces( _r, _f);

            //entity.computeNoises( SDVector& _dw );
            //entity.computeNoises( _dw );
        }

        update();

    }

};

void Simulation::addParticle(SDVector particlePosition) {

// ????????????????????????????????????????????????
};

virtual void Simulation::update(){

    _r += _f * _dt + _dw;

};

virtual void HydroSimulation::update(){

    _r += _f * _dt + _dw;

};

