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
    -----------------------------------------Lec19:Iheritance-------------------------------------------------

    ----------------------------------------------------------------------------------------------------------
    */

//Parent class

class designer{
    public:
    void male(){
        cout<<"Designer designs Male suites\n";
    }
};

class partTimer : public designer{
    public:
    void female(){
       cout<<"Designer designs female suites\n";
    }

};


int main()
{
    /*____________________________________________________________________________________________________________*/

    string topic = "Inheritance";
    cout<< " " << endl;
    cout << "                               Hello, Welcome on the screen!                      \n";
    cout << "                               ______________________________                   " << endl;
    cout << "                              |                              |                  " << endl;
    cout << "                                       "<<topic<<"                        " << endl;//variable calling
    cout << "                              |______________________________|                  " << endl;
    cout << "\n \n";
    /*____________________________________________________________________________________________________________*/

    /**/

    designer dmale;
    dmale.male();

    partTimer pdmale;
    pdmale.female();

    return 0;

}
