#include <iostream>

using namespace std;

int main()
{

    //cout << std::boolalpha; //forces a BOOLean to be displayed in its ALPHAbetic representation
    //cout << (5 > 4) << endl;  //"comparison expression" 

    //int firstNumber = 5; 
    //int secondNumber = 5; 

    //if (firstNumber != secondNumber)
    //{
    //    cout << firstNumber << "!=" << secondNumber << " is true" << endl;
    //}

    //else 
    //{
    //    //THIS gets executed if the expression in the IF is NOT true (FALSE)
    //    cout << "If was not true" << endl; 
    //}
    //bool isDoorOpen = true; 
    ////by convention, many boolean variables start with the word "is" or "has" 
    //bool hasArrived = false; 


    //if (isDoorOpen) //!true = false
    //{
    //    cout << "Come on in - door is open " << endl;
    //    cout << "Does this get printed?" << endl;
    //    //insert 200 additional lines of code 

    //}

    //else
    //{
    //    cout << "keep out" << endl; 

    //}

    
    //int driverSpeed; 
    //cout << "Please enter how fast you were traveling: ";
    //cin >> driverSpeed; //62 mph (lkjasdfhksafdkjsa)
    //if (cin.fail()) //cin.fail() returns TRUE if user input is of the wrong type 
    //{
    //    cout << "Invalid input. Please enter a numerical value." << endl;
    //    cin.clear(); //clear function clears the "fail state" 
    //    cin.ignore(100, '\n'); 
    //    cin >> driverSpeed;
    //}

    //cout << driverSpeed << endl; 


    //ter -> terrain (related to the earth? )
    //un, bi, tri

    int hour = 10;
    //ternary operator is ?:
    string time = (hour < 18) ? "Daytime" : "Evening";
    //general syntax: expression ? TrueResult : FalseResult
    cout << time << endl;

    return 0;
}