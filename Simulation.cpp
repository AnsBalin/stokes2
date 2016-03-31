//
// Created by balin on 17/03/16.
//

#include <zconf.h>
#include "Simulation.h"


void Simulation::run(unsigned int timeSteps) {


    while( timeSteps-- > 0 ){

        for( auto entity : _entities ){
            //entity.computeForces( const SDVector& _r, SDVector& _f );
            entity.computeForces( _r, _f, _entities );
            //entity.computeNoises( SDVector& _dw );
            entity.computeNoises( _dw );
        }


        update();

    }


};

virtual void Simulation::update(){

    _r += _f * _dt + _dw;

};



