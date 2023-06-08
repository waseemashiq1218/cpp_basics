/*
             -------------------------------C++ Basics----------------------------
             -------------------------Author: Muhammad Waseem---------------------
             -----------------------Masters in Computer Science-------------------
*/
#include <iostream>// used to print inputs and outputs of the code
#include <cmath> //used to call mathmaticall function during code

using namespace std;

    /*
    -----------------------------------Lec6: Input from user--------------------------------------------------

        cin>>;
            user can input numbers.
        getline(cin, variable);
            user can input string or statment

    ----------------------------------------------------------------------------------------------------------

    */

int main()
{
    string topic = "User Input!";
    cout<< " " << endl;
    cout << "                                ----------------                        " << endl;
    cout << "                                   "<<topic<<"                          " << endl;//variable calling
    cout << "                                ----------------                        " << endl;
    cout<< " " << endl;
    /*--------getline statment used----------*/
    string full_name;
    cout<<"enter your full name: ";
    getline(cin, full_name);
    cout<<"Hi, "<<full_name<<"\n";

    /*----------cin statment used------------*/
    double age;
    cout<<"enter your age: ";
    cin>> age;
    cout<<"You're "<<age<<" years old.\n";





    return 0;

}

