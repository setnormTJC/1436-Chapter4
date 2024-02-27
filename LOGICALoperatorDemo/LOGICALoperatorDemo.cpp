#include <iostream>

using namespace std;

int main()
{

    //the "logical operators" 
    //AND, NOT, OR (logic gates) 
    //AND -> && & -> single ampersand is bitwise AND
    //    OR -> || //single pipe | is called "bitwise OR" (we're not getting into this)
    //    NOT -> !

    //int firstNum = 0; 
    //int secondNum = 100; 

    //int number = -154; 

    //  if (number >= 0 && number <= 100)
    //cout << (0 <= number) << endl; 
    //if (0 <= number <= 100) //DON'T!
    //{
    //    cout << "The number " << number << " is between 0 and 100 (inclusive) " << endl;
    //}

    //else
    //{
    //    cout << "The number " << number << " is NOT between 0 and 100\n";
    //}

    //int par = 4; 
    //int strokeCount = 3; 

    string time = "night";
    string weather = "rainy"; //change this to "rainy" in a minute
    int speed = 60; 

    //Texas A&M
    if (time == "night" || weather == "rainy")
    {
        speed = speed - 5; //slow down (more risky driving conditions) 
    }

    else
    {
        cout << "Continuing to drive at current speed" << endl; 
    }

    cout << "Final speed " << speed << endl; 



    return 0;
}