#pragma once

//! LONG implementation
namespace LONG {
    //! Collision class 
    class Collision {
    public:
        //! check collision
        /*! @param[in] _r12: distance between 1 and 2
         */
        void call(const double _r12);
    };
}
