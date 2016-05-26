/* This header is file is used to support Exercise3.cpp
 * Date of first creation: 26/05/2016
 */


#include <Eigen/Core>

class parabool
{
public: // Iets moet public zijn om ernaar te kunnen verwijzen, of het te gebruiken in de main function
    parabool( double coeff_a, double coeff_b, double coeff_c) // constructor -> moet zelfde naam hebben als class
    {
        a = coeff_a;
        b = coeff_b;
        c = coeff_c;

    }

    double evaluate( double x ); // functie in class, wordt gedefinieerd in functies.cpp library

    Eigen::MatrixXd computeRoots( )
    {

        double Discriminant =  b*b - 4*a*c;

        Eigen::MatrixXd roots;

        if ( Discriminant < 0 )
        {
            roots.resize( 2, 2 );
            roots( 0, 0 ) = -b / ( 2*a );
            roots( 1, 0 ) = -b / ( 2*a );
            roots( 0, 1 ) = sqrt( -Discriminant ) / ( 2*a );
            roots( 1, 1 ) = - sqrt( -Discriminant ) / ( 2*a );
        }
        else
        {
            roots.resize( 2, 1 ); // Moet zelfde type zijn als gefinieerd door de functie
            roots( 0 ) = ( -b + sqrt( Discriminant ) ) / ( 2*a );
            roots( 1 ) = ( -b - sqrt( Discriminant ) ) / ( 2*a );
        }

        return roots;
    }

private:
    double a, b, c;

protected:
};

class lineairfunctie
{
public:
    lineairfunctie( double a ); // constructor

    // functie in class
    double evualate( double x );

private:
    double member_a;

protected:

};
