/*
             -------------------------------C++ Basics----------------------------
             -------------------------Author: Muhammad Waseem---------------------
             -----------------------Masters in Computer Science-------------------
*/
#include <iostream>

using namespace std;

int main()
{
    /*
    --------------------------------------------Lec2: Variables-----------------------------------------------
    Questions:
        Q: what's the variable?
        Q: why we need to use them and is it neccessary?
        Q: What's the structure to use them?
        Q: how can declare or define and how can we call or or use them?

    Explination:
        it's just a container that store information or "Data" for reuse. it's really
        usefull in terms of usability of the code.
        Q: what's the data?
        There are many types of data but for now, we consider two types; string and other one is integer.
        e.g; if we need to write the statement then we will use string as you can show in code too.
        Let's assume, we have database in which 100 of employees information. some of them quite the job or
        terminated by the compmany. if we need to replace the old information of the employess with new ones,
        then we don't need to change manually because of variables we just update value of the variable such
        as name, age etc.

    ----------------------------------------------------------------------------------------------------------

    */

    cout<< " " << endl;
    cout << "                                ----------------                        " << endl;
    cout << "                                   Variables!                           " << endl;
    cout << "                                ----------------                        " << endl;
    cout<< " " << endl;
    /*------define variables-------*/
    string  name = "waseem"; //can give value in the same line
    int age;

    /*-----can give value(s) to variable(s) in seprately too----*/
    age = 25;
    cout<< " " << endl;
    cout<< " Intro: " << endl;
    cout<< " This is" << name<<". I'm writing that code for myself as well as for those who can not be able to understand the programming language. for instance, c++. By the Way, I'm "<<age<<" year's old. " << endl;
    cout<< "" << endl;
    return 0;

}

