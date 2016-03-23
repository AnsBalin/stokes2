//
// Created by balin on 17/03/16.
//

#include <zconf.h>
#include "Simulation.h"

unsigned int Simulation::get_simID() const{

    return _simID;
}

void Simulation::run(unsigned int timeSteps) {


    while( timeSteps-- > 0 ){

        for( auto entity : _entities ){
            entity.computeForces( const SDVector& _r, SDVector& _f );
            entity.computeNoises( SDVector& _dw );
        }


        update();

    }


};

virtual void Simulation::update(){

    _r +=

};



class Foo{

public:

    void update() {
        for( auto dataModifier : _dataModifierList ) {
            dataModifier.modify( Data& _data );
        }
    };

private:
    Data _data;
    std::vector<DataModifier> _dataModifierList;

};