#ifndef EX_SPACECRAFT_H
#define EX_SPACECRAFT_H

#include <iostream>
#include <Eigen/Core>

class ex_spacecraft
{
public:
    //! Constructor
    ex_spacecraft()
    {
        initialState_.resize( 6 );
        initialState_( 0 ) = 6878.136;
        initialState_( 1 ) = 0.0;
        initialState_( 2 ) = 0.0;
        initialState_( 3 ) = 0.0;
        initialState_( 4 ) = 8.0e3;
        initialState_( 5 ) = 0.0;
        std::cout << centralBodyGravitationalParameter_ << std::endl;
    }

    Eigen::VectorXd initialState_ ; // This statement ensures that initialState_ is accessable outside the constructor

    const double centralBodyGravitationalParameter_ = 398600.4415e9; //

    //! Destructor
    ~ex_spacecraft();
private:

};

#endif // EX_SPACECRAFT_H
