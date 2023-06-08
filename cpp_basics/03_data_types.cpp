/*
             -------------------------------C++ Basics----------------------------
             -------------------------Author: Muhammad Waseem---------------------
             -----------------------Masters in Computer Science-------------------
*/
#include <iostream>

using namespace std;

    /*
    --------------------------------------------Lec3: Data Types-----------------------------------------------
    Questions:
        Q: what's data type and how it works?

    Explination:
    any type of information or data that can be store in variables like
        -- float
        -- decimal number
        -- characters
        -- boolean
    (true-false values), strings etc.

    ----------------------------------------------------------------------------------------------------------

    */

int main()
{

    cout<< " " << endl;
    cout << "                                ----------------                        " << endl;
    cout << "                                   Data types!                          " << endl;
    cout << "                                ----------------                        " << endl;
    cout<< " " << endl;
    /*------variables with different Data types--------------------*/
    string  name = "waseem"; //can give value in the same line
    int age; //can define the integer or decimal number
    bool isMale = true; // explain value will be true or false
    double cgpa; // value can be negative or positve with points (decimal)
    string unvName; // statment in the form of multiple characters
    char gradesInprog = 'B';// can define only character

    /*-----can give value(s) to variable(s) in seprately too----*/
    age = 25;
    cgpa = 3.7;
    unvName = "University of Debrecen";
    /*---------------------------------------------------------------*/

    cout<< " " << endl;
    cout<< "This is "<< name << ". I'm studying in "<< unvName << endl;
    cout<< "My current cgp is: "<<cgpa<< ". My age is: "<<age<< endl;
    cout<< "and my current grade in c++ is: "<<gradesInprog<<endl;
    cout<< " " << endl;
    return 0;

}

