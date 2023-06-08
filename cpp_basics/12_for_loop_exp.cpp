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
    -----------------------------Lec13: Exponent Function with for loop---------------------------------------
      Syntax:

        for ( initialization;condition;increment ) {
            statement(s);
        }
    ----------------------------------------------------------------------------------------------------------

    */

    int res = 1;
    int i;

    int powFun(int basNo, int powNo){
        /*User input values*/
        cout<<"enter base val: ";
        cin>> basNo;
        cout<< "enter pow val: ";
        cin>> powNo;
        /*Condition that make power of two values.*/
        for (i = 0; i < powNo; i++){
            res = res * basNo;
        }

        return res;
    }



int main()
{
    /*____________________________________________________________________________________________________________*/

    string topic = "Exponent Functions!";
    cout<< " " << endl;
    cout << "                               Hello, Welcome on the screen!                      \n";
    cout << "                               ______________________________                   " << endl;
    cout << "                              |                              |                  " << endl;
    cout << "                                      "<<topic<<"           " << endl;//variable calling
    cout << "                              |______________________________|                  " << endl;
    cout << "\n \n";
    /*____________________________________________________________________________________________________________*/

    /*-----------exponent functions example---------------*/
    int basNo;
    int powNo;
    cout << powFun(basNo, powNo);

    return 0;

}

