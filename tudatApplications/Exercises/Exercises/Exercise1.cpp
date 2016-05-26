/* This cpp script is used to make the exercises on http://www.cplusplus.com/forum/articles/12974/
 * The idea is to go through all the exercises and create a new cpp file for each of them
 * This very script answers the second script.
 */

//! Grading Program


#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main( )
{
    string string1 = "What is the score? ";
    int score;
    string input;
    bool cont = true;


    while ( cont )
    {
        cout << string1;
        getline( cin, input );
        stringstream(input) >> score;

        // Test input
        if ( score > 100 || score < 0 )
        {
            cout << "Please enter a valid score in the range 0-100. ";
            continue;
        }


        // Declare output string
        string string2;

        if ( score == 100 )
        {
            string2 = "Congrats! You got a perfect score!";
        }
        else if ( score >= 90 )
        {
            string2 = "You got an A";
        }
        else if ( score >= 80 )
        {
            string2 = "You got a B";
        }
        else if ( score >= 70 )
        {
            string2 = "You got a C";
        }
        else if ( score >= 60 )
        {
            string2 = "You got a D";
        }
        else
        {
            string2 = "You got an F";
        }

        // Output string2
        cout << string2 << endl;

        // Ask whether the user wants to end the program?
        cout << "\nDo you want the program to end? (y/n):";
        string string3;
        getline( cin, string3 );

        if ( string3 == "y")
        {
            cont = false;
        }
    }



    return 0;

}

