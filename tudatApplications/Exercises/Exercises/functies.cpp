 # include <Exercises/functies.h>

double lineairfunctie:: evualate( double x ) // functie in class
{
    return member_a*x;
}

lineairfunctie:: lineairfunctie( double a ) // constructor
{
    member_a = a;
}


double parabool::evaluate( double x ) // functie in class
{
    return a*x*x + b*x + c;
}

