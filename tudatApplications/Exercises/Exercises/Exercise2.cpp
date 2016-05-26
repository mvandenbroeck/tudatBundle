/* This cpp script is used to make the exercises on http://www.cplusplus.com/forum/articles/12974/
 * The idea is to go through all the exercises and create a new cpp file for each of them
 * This very script answers the second exercise.
 */

//!  Cola Machine


#include <iostream>
#include <string>
#include <sstream>

using namespace std;

void ifloop( )
{
    cout << "Beverages:\n";
    cout << "Coca Cola (press 1)\n";
    cout << "Water     (press 2)\n";
    cout << "Sprite    (press 3)\n";
    cout << "Ice Tea   (press 4)\n";
    cout << "Fanta     (press 5)\n";
    cout << "-------------------\n";
    cout << "Please choose your beverage (1-5): ";

    string input;
    int drinknr;
    // Declare drink string
    string drink;

    label1:
    getline( cin, input);
    stringstream( input ) >> drinknr;

    if ( drinknr == 1 )
    {
        drink = "Coca Cola";
    }
    else if ( drinknr == 2 )
    {
        drink = "Water";
    }
    else if ( drinknr == 3 )
    {
        drink = "Sprite";
    }
    else if ( drinknr == 4 )
    {
        drink = "Ice Tea";
    }
    else if ( drinknr == 5 )
    {
        drink = "Fanta";
    }
    else
    {
        cout << "Please enter a valid choice (1-5): ";
        goto label1;
    }

    // Output choice
    cout << "Your choice is " << drink << "." << endl;
}

void switchcase( )
{
    cout << "Beverages:\n";
    cout << "Coca Cola (press 1)\n";
    cout << "Water     (press 2)\n";
    cout << "Sprite    (press 3)\n";
    cout << "Ice Tea   (press 4)\n";
    cout << "Fanta     (press 5)\n";
    cout << "-------------------\n";
    cout << "Please choose your beverage (1-5): ";

    string input;
    int drinknr;
    // Declare drink string
    string drink;

    label1:
    getline( cin, input);
    stringstream( input ) >> drinknr;

    switch ( drinknr)
    {
    case 1:
        drink = "Coca Cola";
        break;

    case 2:
        drink = "Water";
        break;
    case 3:
        drink = "Sprite";
        break;
    case 4:
        drink = "Ice Tea";
        break;
    case 5:
        drink = "Fanta";
        break;
    default:
        cout << "Please enter a valid choice (1-5): ";
        goto label1;
    }

    // Output choice
    cout << "Your choice is " << drink << "." << endl;
}

int main( )
{

    cout << "Do you want the program to be executed with\n";
    cout << "if loops (1) or switch and case (2)? ";
    string choice;
    getline( cin, choice);

    if ( choice == "1" )
    {
        ifloop( );
    }
    if ( choice == "2" )
    {
        switchcase( );
    }


}
