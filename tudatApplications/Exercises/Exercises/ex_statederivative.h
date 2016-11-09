#ifndef EX_STATEDERIVATIVE_H
#define EX_STATEDERIVATIVE_H
#include <Eigen/Core>

class ex_stateDerivative
{
public:
    //! Constructor
    ex_stateDerivative();

    //! Compute the state derivative of the spacecraft
    Eigen::VectorXd computeSpacecraftStateDerivative( const double time, const Eigen::VectorXd& state );

    //! Compute the propagated state of the spacecraft
    double computeSpacecraftState( const double endTime );

    //! Destructor
    ~ex_stateDerivative();
};

#endif // EX_STATEDERIVATIVE_H
