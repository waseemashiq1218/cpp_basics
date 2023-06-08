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
    ------------------------------------Lec16: Constructor Function-------------------------------------------
    Classes: it's just blueprint for new kind of datatype or data.
    why we need it? because We have to solve real time probelems which isn't possible with predefined datatypes and
    variables. So we can create classes and objects to use as per specific requirements or user needs.

    Constructor: A user-defined which is called when we need to run the class. it is defined inside the class.
    One class has multiple constructer.

    ----------------------------------------------------------------------------------------------------------

    */

//computer science class which has some public attribute that can use to define what kind of information cs has.
class cs {
    public:
        string dep_name;
        string dep_location;
        double dep_building_no;
        //constructor function creatred or intilized
        cs (string pdn, string pdl, double pdbn){
            dep_name = pdn;
            dep_location = pdl;
            dep_building_no = pdbn;

        }
};



int main()
{
    /*____________________________________________________________________________________________________________*/

    string topic = "Constructor Function";
    cout<< " " << endl;
    cout << "                               Hello, Welcome on the screen!                      \n";
    cout << "                               ______________________________                   " << endl;
    cout << "                              |                              |                  " << endl;
    cout << "                                    "<<topic<<"                      " << endl;//variable calling
    cout << "                              |______________________________|                  " << endl;
    cout << "\n \n";
    /*____________________________________________________________________________________________________________*/

    /*--------------constructor examp---------------*/
    //cs cs1;
    //cs1.dep_building_no = 01;
    //cs1.dep_name = "MCS";
    //cs1.dep_location = "Kassai campus, Debrecen";

    cs cs1("MCS","Kassai campus, Debrecen", 01);

    cout<<cs1.dep_building_no<<"\t"<<cs1.dep_name<<"\t"<<cs1.dep_location<<"\n";
    return 0;

}

