//
// Created by balin on 17/03/16.
//

#ifndef STOKES_SIMULATION_H
#define STOKES_SIMULATION_H

#include "Defs.h"
#include "SDVector.h"
#include "SDMatrix.h"
#include "Boundaries.h"
#include "ParticleSet.h"
#include <sys/types.h>
#include <vector>

class Simulation {

public:

    Simulation(unsigned int simID) : _simID(simID) {};
    void run(unsigned int timeSteps);
    unsigned int get_simID() const;

    const int _simulationID;

protected:
    unsigned int _simID;
    SDVector _r;
    SDVector _f;
    SDVector _dw;
    SDMatrix _D;
    SDMatrix _B;
    Boundaries _boundaries;
    std::vector<ParticleSet> _entities;

private:
    virtual void update();


};

class HydroSimulation : public Simulation {

private:
    void update();
};


#endif //STOKES_SIMULATION_H
