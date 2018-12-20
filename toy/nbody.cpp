#include<nbody.h>
#include<iostream>

//! evolution function for Nbody
void MARIO::Nbody::evolution(const double _time_end, double& _time_real) {
    std::cout<<"Evolution, mario,"<<n<<std::endl;
    coll.call(10);
}
