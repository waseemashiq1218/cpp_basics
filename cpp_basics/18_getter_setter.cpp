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
    -----------------------------------------Lec18: Getter and Setter-------------------------------------------

    ----------------------------------------------------------------------------------------------------------
    */
class student {
    private:
        string student_class;
    public:
        string student_Neptun_no;
        string student_name;
        double Student_gpa;
        student(string neptun, string name, double gpa, string sClass){
            student_Neptun_no = neptun;
            student_name = name;
            Student_gpa = gpa;
        }

        //setter function
        void setStdClass (string sClass){
            if (sClass == "MCS" || sClass == "BCS"){
                student_class = sClass;
            } else {
                student_class = "invalid class, Please choose correct class!";
            }
        }
        //getter function
        string getStdClass(){
            return student_class;
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

    string topic = "Getter and Setter";
    cout<< " " << endl;
    cout << "                               Hello, Welcome on the screen!                      \n";
    cout << "                               ______________________________                   " << endl;
    cout << "                              |                              |                  " << endl;
    cout << "                                       "<<topic<<"                      " << endl;//variable calling
    cout << "                              |______________________________|                  " << endl;
    cout << "\n \n";
    /*____________________________________________________________________________________________________________*/

    /*--------------Getter and Setter examp---------------*/

    //student std1 ("MT2OZ", "Muhammad Waseem", 3.3, "+36205898574");
    student std2 ("AQ0CA", "Zeba Ali", 3.5, "MCS");
    //std2.setStdClass("mcs");

    //cout<<std1.hasPass()<<"\t"<<std2.hasPass();
    cout<<std2.getStdClass();

    return 0;

}

