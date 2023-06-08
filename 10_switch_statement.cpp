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
    -----------------------------Lec10: Flow controls (Switch statment)---------------------------------------
        Syntax:
		switch (variable){
			    case 1:
                    break;
			    case 2:
                    break;
			    default:
		}
    ----------------------------------------------------------------------------------------------------------

    */

string getWeekDays(int dNum){
    string dName;

    switch (dNum){
    case 0:
        dName = "Sun";
        break;
    case 1:
        dName= "Mon";
        break;
    case 2:
        dName = "Tue";
        break;
    case 3:
        dName = "Wed";
        break;
    case 4:
        dName = "Thu";
        break;
    case 5:
        dName = "Fri";
        break;
    case 6:
        dName = "Sat";
        break;
    default:
        dName = "Inavlid Day Num";
    }
    return dName;
}

int main()
{
    /*____________________________________________________________________________________________________________*/

    string topic = "Switch statment!";
    cout<< " " << endl;
    cout << "                               ______________________________                   " << endl;
    cout << "                              |                              |                  " << endl;
    cout << "                                         "<<topic<<"                            " << endl;//variable calling
    cout << "                              |______________________________|                  " << endl;

    /*____________________________________________________________________________________________________________*/
    cout << "\n \n";
    cout << "                            Hello, Welcome to the screen!                      \n";

    cout << getWeekDays(2)<<"\n";

    return 0;

}

