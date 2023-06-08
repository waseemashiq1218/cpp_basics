/*
             -------------------------------C++ Basics----------------------------
             -------------------------Author: Muhammad Waseem---------------------
             -----------------------Masters in Computer Science-------------------
*/
#include <iostream>// used to print inputs and outputs of the code
#include <cmath> //used to call mathmaticall function during code

using namespace std;

    /*
    --------------------------------------Lec8: Functions--------------------------------------------------------
    collection of codes that performas specifcs tasks. because of reusbality, it's importance increases during
    coding.
    Some functions used to return value and some are not.

    ----------------------------------------------------------------------------------------------------------

    */
void isTriExist(){
    cout<< "\n\n\n";
    cout << "                                   _________________                         " << endl;
    cout << "                                  |                 |                        " << endl;
    cout << "                                    Hello Triangle!                          " << endl;
    cout << "                                  |_________________|                        " << endl;
    cout<< "\n";
    cout<< "                                           /|                                " << endl;
    cout<< "                                          / |                                " << endl;
    cout<< "                                         /  |                                " << endl;
    cout<< "                                        /   |                                " << endl;
    cout<< "                                       /____|                                " << endl;
    cout<< " " << endl;
}


void isTriNotExist( string yourName, double age ){
    cout<< "\n";
    cout << "                                   _________________                            " << endl;
    cout << "                               ----                 ----                        " << endl;
    cout << "                                      Hello " << yourName                         << endl;
    cout << "                                  You are " << age << " years old"                << endl;
    cout << "                               ----_________________----                        " << endl;
    cout<< "\n";

}

double isAgeRet(double age){
    return age;
}

int main()
{
    /*____________________________________________________________________________________________________________*/

    string topic = "Function basics!";
    cout<< " " << endl;
    cout << "                                |----------------------|                  " << endl;
    cout << "                                     "<<topic<<"                          " << endl;//variable calling
    cout << "                                |----------------------|                  " << endl;

    /*____________________________________________________________________________________________________________*/

    isTriExist();
    isTriNotExist("Waseem", 25);
    isTriNotExist("Zeba", 24);
    cout << "\n                                  You are " << isAgeRet(24) << " years old"                << endl;
    return 0;

}

