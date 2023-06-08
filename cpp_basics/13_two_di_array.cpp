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
    -----------------------------Lec13: Two Diamensional Arrays---------------------------------------
      Syntax:


    ----------------------------------------------------------------------------------------------------------

    */





int main()
{
    /*____________________________________________________________________________________________________________*/

    string topic = "2 di-Aray (nested loop)";
    cout<< " " << endl;
    cout << "                               Hello, Welcome on the screen!                      \n";
    cout << "                               ______________________________                   " << endl;
    cout << "                              |                              |                  " << endl;
    cout << "                                    "<<topic<<"           " << endl;//variable calling
    cout << "                              |______________________________|                  " << endl;
    cout << "\n \n";
    /*____________________________________________________________________________________________________________*/

    /*-----------Two dimensional Aray example---------------*/

        int t_di_ar [3] [2] = {
        {5,6}, //first element
        {3,2},//seocnd element
        {5,1}//third element

    };

    //<<t_di_ar[2][1];
     /*Note, Each element has an sub-elements. e.g; first element beongs to first array.
        inside that array, there is another array.*/
    for (int i = 0; i < 3; i++){//first array explains how many elements, generally. That loope explain those elements. [3]
        for(int j = 0; j < 2; j++){//second array explains how many elements inside the array. that loop explain second array [2]
            cout<<" "<<t_di_ar[i][j];
        }
        cout<<"\n";
    }


    return 0;

}

