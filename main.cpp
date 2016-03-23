#include <iostream>
//#include "Simulation.h"
#include "SDVector.h"
#include "SDMatrix.h"


int main() {

    SDMatrix mat1 (3, 1);
    SDVector vec1 (3, 1);

    SDVector result = mat1 * vec1;

    mat1.print();
    std::cout << endl;
    vec1.print();
    std::cout << endl;
    result.print();
    return 0;
}