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
    -----------------------------------------Lec16: Obejct Function-------------------------------------------

    ----------------------------------------------------------------------------------------------------------
    */
class student {
    public:
        string student_Neptun_no;
        string student_name;
        double Student_gpa;
        student(string neptun, string name, double gpa){
            student_Neptun_no = neptun;
            student_name = name;
            Student_gpa = gpa;
        }
        //Object Function
        bool hasPass(){
            if (Student_gpa >= 3.5){
                return true;
            }
            return false;
        }
};


int main()
{
    /*____________________________________________________________________________________________________________*/

    string topic = "Object Function";
    cout<< " " << endl;
    cout << "                               Hello, Welcome on the screen!                      \n";
    cout << "                               ______________________________                   " << endl;
    cout << "                              |                              |                  " << endl;
    cout << "                                       "<<topic<<"                      " << endl;//variable calling
    cout << "                              |______________________________|                  " << endl;
    cout << "\n \n";
    /*____________________________________________________________________________________________________________*/

    /*--------------Object function examp---------------*/

    student std1 ("MT2OZ", "Muhammad Waseem", 3.3);
    student std2 ("AQ0CA", "Zeba Ali", 3.5);

    cout<<std1.hasPass()<<"\t"<<std2.hasPass();

    return 0;

}

