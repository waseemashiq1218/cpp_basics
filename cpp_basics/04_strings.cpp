/*
             -------------------------------C++ Basics----------------------------
             -------------------------Author: Muhammad Waseem---------------------
             -----------------------Masters in Computer Science-------------------
*/
#include <iostream>

using namespace std;

    /*
    -----------------------------------Lec4: Strings & Substrings---------------------------------------------

    well, I would like to explain more about strings. for instance,
        -- how can we impliment strings through various functions.
        -- How can grab string with functions
        -- string indexing.

    ----------------------------------------------------------------------------------------------------------

    */

int main()
{
    /*----------Variable intilization------------*/
    string topic = "Strings!";
    cout<< " " << endl;
    cout << "                                ----------------                        " << endl;
    cout << "                                    "<<topic<<"                         " << endl;//variable calling
    cout << "                                ----------------                        " << endl;
    cout<< " " << endl;
    /*--------------Define Strings---------------*/
    string intro = "This is waseem. I am working on c++ basics";


    /*--------------Call Strings-----------------*/
    cout<< "String length is based on " <<intro.length()<<" characters\n\n";
    /*-----------Indexing in String--------------*/
    /*
        String indexing starts from 0 to onword in c++.
        [0,1,2,3,4,....n]
        e.g;
        ['T', 'h', 'i', 's', ......, 's']
        [ 0,   1,   2,   3,  ......,  42]
    */
    cout<< intro.find('c', 33)<<"\n";//find() calling function explain, find specific chaaracter after specific index
    cout<<intro[2] <<"\n\n";// to find the character on specific index number.
    /*----------------Substring------------------*/
    /*---------Decleration of Substring----------*/
    string sub_intro = intro.substr(32, 42);
    /*Calling of String and Substring respectively*/
    cout<<intro<<"\n";
    cout<<sub_intro<<"\n";
    return 0;

}

