/* This cpp script is used to make the exercises on http://www.cplusplus.com/forum/articles/12974/
 * The idea is to go through all the exercises and create a new cpp file for each of them
 * This very script answers the following questions:
 *
 * Question 1:
 * Maak een class functie met private variabele noem je constante a
 * Maak een constructor waarmee je a kan definieren
 * Maak een functie in die class en noem die evaluate(x) en return a*x
 *
 * Question 2:
 * Class parabool in .cpp
 * 2 functies: evaluate, compute_roots
 *
 * Question 3:
 * maak een base class genaamd function f(x)
 * In base class maak functie cpp evaluate(x) return f(x)
 * maak 2 derived classes en verzin een function f(x)
 * Maak een functie(A) die een pointer naar de base class accepteert
 * Deze functie returned 2*f(x)
 * Voer functie(A) uit met allebei de functions(derived classes)
 * Definieer de functies / classes in een header file
 * Implementeer de functies / classes in een cpp
 * Maak een static library en link
 *
 */

//!  René Exercise

#include <string>
#include <iostream>
#include <sstream>
#include <Eigen/Core>

#include <Exercises/functies.h>

using namespace std;

class function
{
public:
    function( double param_a, double param_b ) // Constructor
    {
        a = param_a;
        b = param_b;
    }

    evaluate( double x )
    {
        return a / x + b;
    }

private:
    double a, b;

protected:
};

class dfunction1 : public function // Derived class of function
{
public:
    double evaluate1( double X )
    {
        return a*X^3 + b*X^2;
    }
};

class dfunction2 : public function // Derived class of function
{
public:
    double evaluate2( double AA, double BB )
    {
        return a*AA^2 + b*BB^2 + AA + BB;
    }
};


boost::shared_ptr< BaseClass > pointernaam =
        boost::make_shared< BaseClass >( alle argumenten in constructor van baseclass );


double functieZ( boost::shared_ptr< BaseClass > pointernaam )
{
        double output = pointernaam->functieVanClass( input );
        return output*2.0;
}


int main( )
{
    double a = 5.0;
    lineairfunctie variabele_functie( a );

    double x = 2.0;
    double output = variabele_functie.evualate( x );
    cout << output << endl;

    double output1 = parabool( 2.0, 2.0, -5.0 ).evaluate( 2.0 );
    cout << " f(2.0) = " << output1 << endl;

    Eigen::MatrixXd output2 = parabool( 2.0, 2.0, 5.0 ).computeRoots( );

    cout << "The roots are\n" << output2 << endl;

    // Omdat parabool een constructor is, kan deze ook zo opgeroepen worden:
    parabool output3( 1.0, 1.0, -1.0 );
    cout << output3.evaluate( 5.0 );

}
