/*
             -------------------------------C++ Basics----------------------------
             -------------------------Author: Muhammad Waseem---------------------
             -----------------------Masters in Computer Science-------------------
*/
#include <iostream>// used to print inputs and outputs of the code
#include <cmath> //used to call mathmaticall function during code

using namespace std;

    /*
    --------------------------------------Lec7: Arrays--------------------------------------------------------
    Syntax:
        Array Decleration:
        type type_name[Elements];

        Array Intilization:
        type type_name[Elements] = {};

    Universal syntax:
        type type_name[Elements] {value(s) on eac index};

    Explination:
        -- type can be data type (int, float, double)
        -- type_name can name as per your desire or structe of the code
        -- Elements inside square brackets represents the number of the elements in array
        -- In intilization, currly braces explain, the stored values in an array

        Array indexing:
            The indexing of the array in c++ starts from 0 to n. for instance, we have an array;

            type    type_name[Elemtents]    =   {index_0,   index_1,    index_2,    index_3,    index_4,    index_5,    index_6};
            int     indexValues[7]          =   {2,         4,          5,          7,          0,          3,          9};

            In universall indexing, we don't need to used equeal sign between decleration and intilization,

            type    type_name[Elemtents] {index_0,   index_1,    index_2,    index_3,    index_4,    index_5,    index_6};
            int     indexValues[7]       {2,         4,          5,          7,          0,          3,          9};

        Multidimensional Array: This concept will explain later when we will learn about loops..
        For now, We can define two dimensional or multiple dimensional arrays like

            type    type_name[Elemtent_1][Elemtent_2]....[Elemtent_n];
            double table [3][3];

                            0     1       2
                       0 |'''''|''''''|''''''|
        table[3][3] =    |_____|______|______|
                       1 |     |      |      |
                         |_____|______|______|
                       2 |     |      |      |
                         |_____|______|______|

    ----------------------------------------------------------------------------------------------------------

    */

int main()
{
    /*____________________________________________________________________________________________________________*/

    string topic = "Arrays!";
    cout<< " " << endl;
    cout << "                                ----------------                        " << endl;
    cout << "                                    "<<topic<<"                         " << endl;//variable calling
    cout << "                                ----------------                        " << endl;

    /*____________________________________________________________________________________________________________*/

    /*-----------First Method-------------*/

    int array_val []= {3, 2, 5, 7, 0}; //decleration & intilization of array

    cout << array_val[4] << "\n";

    array_val[4] = 19; //Modifies the value on specfic index

    cout << array_val[4] << "\n\n";

    /*-------Give size to an array--------*/
    double array_dval [10]= {3, 2, 5, 7, 0};

    cout << array_dval[5] << "\n";
    array_dval[5] = 3;

    cout << array_dval[5] << "\n\n";
    cout << "[" << array_dval[0] << array_dval[1] << array_dval[2] << array_dval[3] << array_dval[4] << "]"<< "\n\n";

    /*------------Second method-----------*/
    float array_fval [5] {3.1, 2.0, 5.9, 7.3, 0.5};

    cout << "[" << array_fval[0] << ", " << array_fval[1] << ", " << array_fval[2] << ", " << array_fval[3] << ", " << array_fval[4] << "]"<<"\n";

    return 0;

}

