/*
             -------------------------------C++ Basics----------------------------
             -------------------------Author: Muhammad Waseem---------------------
             -----------------------Masters in Computer Science-------------------
*/
#include <iostream>// used to print inputs and outputs of the code
#include <cmath> //used to call mathmaticall function during code

using namespace std;

    /*
    ---------------------------------------Lec5: Numbers-----------------------------------------------------

    Data type: Numbers
        int: The Numbers will be integers
        float: numbers with points
        Double: negative/positive numbers with decimal numbers

    ----------------------------------------------------------------------------------------------------------

    */

int main()
{
    /*----------Variable intilization------------*/
    string topic = "Numbers!";
    cout<< " " << endl;
    cout << "                                ----------------                        " << endl;
    cout << "                                    "<<topic<<"                         " << endl;//variable calling
    cout << "                                ----------------                        " << endl;
    cout<< " " << endl;
    /*------Decleration of Numbers----------*/
    int inum = 3;
    double dnum = 3.1;

    /*----------calling Numbers-------------*/
    cout<<inum<<"\n";
    cout<<dnum<<"\n\n";

    /*-------Increment and decrement--------*/
    inum++;
    cout<<"Incremented integer Number is: "<<inum<<"\n";
    inum--;
    cout<<"Decremented integer Number is: "<<inum<<"\n\n";
    dnum++;
    cout<<"Incremented decimal Number is: "<<dnum<<"\n";
    dnum--;
    cout<<"Decremented decimal Number is: "<<dnum<<"\n\n";

    /*--------Basic Mathmatic operations---------*/
    /*
        +,-,*,/,%
    */
    cout<< "sum is: " <<3+3<<"\n";
    cout<< "prod is: " <<3*3<<"\n";
    cout<< "div: " <<3/3<<"\n";
    cout<< "reminder: " <<3%3<<"\n";
    cout<< "subtraction: " <<3-3<<"\n\n";

    /*-----------Methmatical functions-----------*/
    /*
    There are some basic methmatic functions;
        pow(),
        sqrt(),
        round()
            ceil(),
            floor()
        fmax(),
        fmin()
    */
    cout<<pow(inum,2)<<"\n";
    cout<<pow(dnum,2)<<"\n\n";

    cout<<sqrt(inum)<<"\n";
    cout<<sqrt(dnum)<<"\n\n";

    cout<<round(inum)<<"\n";
    cout<<round(dnum)<<"\n\n";

    cout<<ceil(dnum)<<"\n";
    cout<<floor(dnum)<<"\n\n";

    cout<<fmax(inum, dnum)<<"\n";
    cout<<fmin(inum, dnum)<<"\n";


    return 0;

}

