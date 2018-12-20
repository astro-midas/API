#pragma once
#include<macro.h>
#include<iostream>

//! Mario implementation
namespace MARIO{
    // Nbody integrator
    class Nbody{
        __Collision coll; //> Collisional function
    public:

        //! evolution function 
        /*!
          @param[in] _time_end: expected time of ending evolution
          @param[out] _time_real: the real evolved time from the evolution function
        */
        void evolution(const double _time_end, double& _time_real);
    };
}
