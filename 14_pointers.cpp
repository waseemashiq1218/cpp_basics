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
    --------------------------------------------Lec14: Ponters------------------------------------------------
      Pointers actually store meamory address of the value, variable elements etc. for example variable has
      Value like var1 = 5; the value of var1 stored in computer's physicall memory or in RAM. IF we want to
      access where is that value stored in computer. we can use pointers which give us addresses.

        &var1;

      By using and operator we can call the memory address of specific variable.


    ----------------------------------------------------------------------------------------------------------

    */





int main()
{
    /*____________________________________________________________________________________________________________*/

    string topic = "Pointers";
    cout<< " " << endl;
    cout << "                               Hello, Welcome on the screen!                      \n";
    cout << "                               ______________________________                   " << endl;
    cout << "                              |                              |                  " << endl;
    cout << "                                        "<<topic<<"                             " << endl;//variable calling
    cout << "                              |______________________________|                  " << endl;
    cout << "\n \n";
    /*____________________________________________________________________________________________________________*/

    /*--------------Pointers examp---------------*/

    string full_name = "Muhammad Waseem"; //string variable
    string neptun_code = "MT2OVZ";//string variable
    int age = 25;//integer variable
    double gpa = 3.3;//double variable

    /*Pointer's variables: that can stores the addesses of the variables.*/

    string *pFull_name = &full_name;//use steric with pointerVariableName and called that variable where value stored
    string *pNeptun_code = &neptun_code;
    int *pAge = &age;
    double *pGpa = &gpa;

    /*One method to display the memory addresses*/
    cout << "Full Name  \tNeptun Code \t\tAge\t\t\tGPA \n";
    cout << &full_name << "\t" << &neptun_code << "\t\t" << &age<< "\t\t" << &gpa; //print the addresses of the variables.

    /*Another method to call variable's memory addresses by creating pointers variables.*/
    cout << "\n\n\nFull Name  \tNeptun Code \t\tAge\t\t\tGPA \n";
    cout << full_name << "\t" << neptun_code << "\t\t\t" << age<< "\t\t\t" << gpa<<"\n";
    cout << pFull_name << "\t" << pNeptun_code << "\t\t" << pAge<< "\t\t" << pGpa<<"\n";

    /*-----------De-referssing a pointer---------*/
    //To grab the actual value from the phyical addess, we can use derefressing
    cout << "\n\n\nFull Name  \tNeptun Code \t\tAge\t\t\tGPA \n";
    cout << full_name << "\t" << neptun_code << "\t\t\t" << age<< "\t\t\t" << gpa<<"\n";
    cout << pFull_name << "\t" << pNeptun_code << "\t\t" << pAge<< "\t\t" << pGpa<<"\n";
    cout << *pFull_name << "\t" << *pNeptun_code << "\t\t\t" << *pAge<< "\t\t\t" << *pGpa<<"\n";

    return 0;

}

