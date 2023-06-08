/*
             -------------------------------C++ Basics----------------------------
             -------------------------Author: Muhammad Waseem---------------------
             -----------------------Masters in Computer Science-------------------
*/
#include <iostream>// used to print inputs and outputs of the code
#include <cmath> //used to call mathmaticall function during code
#include <string>

using namespace std;

    /*
    -----------------------------Lec12: Flow controls (for loop)---------------------------------------
      Syntax:

        for ( initialization;condition;increment ) {
            statement(s);
        }
    ----------------------------------------------------------------------------------------------------------

    */


int main()
{
    /*____________________________________________________________________________________________________________*/

    string topic = "While loop!";
    cout<< " " << endl;
    cout << "                               Hello, Welcome on the screen!                      \n";
    cout << "                               ______________________________                   " << endl;
    cout << "                              |                              |                  " << endl;
    cout << "                                         "<<topic<<"                            " << endl;//variable calling
    cout << "                              |______________________________|                  " << endl;
    cout << "\n \n";
    /*____________________________________________________________________________________________________________*/

    /*-----------for loop example---------------*/
    int arry_val [] = {2, 3, 5, 1, 7};
    for (int i = 0; i < 4; i++){
            cout<<arry_val[i]<<"\n";

    }

    return 0;

}

