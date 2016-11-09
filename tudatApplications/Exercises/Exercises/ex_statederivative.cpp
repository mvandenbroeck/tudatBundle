#include "ex_statederivative.h"
#include "ex_spacecraft.h"
#include <tudat/Mathematics/NumericalIntegrators/rungeKutta4Integrator.h>

Eigen::VectorXd ex_stateDerivative::computeSpacecraftStateDerivative( const double time, const Eigen::VectorXd& state )
{

    Eigen::VectorXd stateDerivative( 6 );
    stateDerivative( 0 ) = state( 3 ); // x position
    stateDerivative( 1 ) = state( 4 ); // y position
    stateDerivative( 2 ) = state( 5 ); // y position
    stateDerivative( 3 ) = ( -ex_spacecraft.centralBodyGravitationalParameter_ * state( 0 ) ) /
            pow( pow( state(0), 2.0 ) + pow( state( 1 ), 2.0 ) + pow( state( 2 ), 2 ), 1.5 );
    stateDerivative( 4 ) = ( -ex_spacecraft.centralBodyGravitationalParameter_ * state( 1 ) ) /
            pow( pow( state(0), 2.0 ) + pow( state( 1 ), 2.0 ) + pow( state( 2 ), 2 ), 1.5 );
    stateDerivative( 5 ) = ( -ex_spacecraft.centralBodyGravitationalParameter_ * state( 2 ) ) /
            pow( pow( state(0), 2.0 ) + pow( state( 1 ), 2.0 ) + pow( state( 2 ), 2 ), 1.5 );

    return stateDerivative;
}

double ex_stateDerivative::computeSpacecraftState( const double endTime )
{
    // Initial conditions


    // Set the step size
    const double stepSize = 1.0;

    // RK4 integrator
    tudat::numerical_integrators::RungeKutta4IntegratorXd integrator(
                boost::bind( &computeSpacecraftStateDerivative, this, _1, _2),
                initialTime, initialState );
}

ex_stateDerivative::~ex_stateDerivative()
{

}

