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
    -----------------------------Lec11: Flow controls (While loop)---------------------------------------
        Syntax:
            do{
                code..
            }while(condition);
    ----------------------------------------------------------------------------------------------------------

    */


int main()
{
    /*____________________________________________________________________________________________________________*/

    string topic = "While loop!";
    cout<< " " << endl;
    cout << "                               Hello, Welcome on the screen!                      \n";
    cout << "                               ______________________________                   " << endl;
    cout << "                              |                              |                  " << endl;
    cout << "                                         "<<topic<<"                            " << endl;//variable calling
    cout << "                              |______________________________|                  " << endl;
    cout << "\n \n";
    /*____________________________________________________________________________________________________________*/

    /*-----------While and do-while loop example---------------*/
    //int index = 1;
    //as long as while condition is true, the loop will apply on code.
    /*while(index <= 5){
        cout<<index<<"\n";
        index++;

    }*/

    /*do {
        cout<<index<<"\n";
        index++;
    }while(index <= 5);*/
    /*----------------------------------------------------------*/
    int secretNum = 4;
    int guess;
    int guessCount = 0;
    int guessLim = 3;
    bool noGuess = false;

    while (secretNum != guess && !noGuess){
        if (guessCount<guessLim){
            cout << "Enter guess: ";
            cin >> guess;
            guessCount++;
        } else{
            noGuess = true;
        }
    }
    if (noGuess){
        cout <<"You loss!";
    }else{
        cout<< "You win!";
    }

    return 0;

}

