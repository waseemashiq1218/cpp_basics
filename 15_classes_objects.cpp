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
    --------------------------------------------Lec15: classes and objects------------------------------------------------
    Classes: it's just blueprint for new kind of datatype or data.
    why we need it? because We have to solve real time probelems which isn't possible with predefined datatypes and
    variables. So we can create classes and objects to use as per specific requirements or user needs.
    
    
    ----------------------------------------------------------------------------------------------------------

    */

//computer science class which has some public attribute that can use to define what kind of information cs has.
class cs {
    public:
        string dep_name;
        string dep_location;
        double dep_building_no;
};



int main()
{
    /*____________________________________________________________________________________________________________*/

    string topic = "Classes & Objects";
    cout<< " " << endl;
    cout << "                               Hello, Welcome on the screen!                      \n";
    cout << "                               ______________________________                   " << endl;
    cout << "                              |                              |                  " << endl;
    cout << "                                    "<<topic<<"                      " << endl;//variable calling
    cout << "                              |______________________________|                  " << endl;
    cout << "\n \n";
    /*____________________________________________________________________________________________________________*/

    /*--------------classes and object examp---------------*/
    cs cs1;
    cs1.dep_building_no = 01;
    cs1.dep_name = "MCS";
    cs1.dep_location = "Kassai campus, Debrecen";

    cout<<cs1.dep_building_no<<"\t"<<cs1.dep_name<<"\t"<<cs1.dep_location<<"\n";
    return 0;

}

