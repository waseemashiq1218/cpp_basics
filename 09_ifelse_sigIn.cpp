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
    -----------------------------Lec9: Flow controls (if else statment)---------------------------------------
				
    ----------------------------------------------------------------------------------------------------------

    */

string user_name        = "admin";
string user_password    = "admin123";

string isSignIn(string user, string pass){
            cout <<"Enter user name:";
            cin >> user;
            cout <<"Enter Password: ";
            cin >> pass;
        if(user == user_name && pass == user_password){
                cout<<"\nWelcome to Board!\n";
        } else if(user == user_name && pass != user_password){
            cout << "user name or password are wrong. Try again!\n";
        } else if(user != user_name && pass == user_password){
            cout << "user name or password are wrong. Try again!\n";
        } else{
            cout << "user name or password are wrong. Try again!\n";
        }
}


int main()
{
    /*____________________________________________________________________________________________________________*/

    string topic = "if-else!";
    cout<< " " << endl;
    cout << "                               ______________________________                   " << endl;
    cout << "                              |                              |                  " << endl;
    cout << "                                         "<<topic<<"                            " << endl;//variable calling
    cout << "                              |______________________________|                  " << endl;

    /*____________________________________________________________________________________________________________*/
    cout << "\n \n";
    cout << "                            Hello, Welcome to the Login screen!                      \n";

    string user, pass;
    cout <<isSignIn(user, pass);

    return 0;

}

