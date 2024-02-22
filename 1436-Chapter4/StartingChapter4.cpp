#include <iostream>

using namespace std;

int main()
{
    //int a = 77; 
    //if (a > 5) //this an "expression" (NOT it's raining CATS and dogs)
    //    //a > 5 -> evaluates to TRUE
    //{
    //    cout << "a = " << a << "is INDEED greater than 5" << endl;
    //}

    //else //else means the if condition is NOT true
    //{
    //    cout << "a = " 
    //        << a
    //        << "is NOT greater than 5" << endl; 
    //}

    //if (true)
    //{
    //    cout << "TRUE" << endl; 
    //}

    string correctPassword = "123456"; //SPACEBALLS

    cout << "Enter your password - if correct, we'll let you in" << endl; 
    string enteredPassword; 
    cin >> enteredPassword; //OVERWRITES (LOGIC error!) 

    bool isTrue = true; //boolean (after George Boole) have value TRUE or FALSE

    //int a = 4; 
    if (enteredPassword == correctPassword) // == is called the "equality operator" 
    {
        cout << "Welcome in!" << endl; 
    }

    else
    {
        cout << "No dice!" << endl; 
    }

    return 0;
}