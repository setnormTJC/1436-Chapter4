#include <iostream>

using namespace std;



int main()
{
    //enumeration (noun meaning a list of stuff) 
    //enum comes from the word "enumerate" (to list) 
    enum animals //enums are supported in Java, Python, etc. etc. 
    {
        cow,
        dog,
        fox
    };

    cout << "Enter animal number (0 - cow, 1 - dog, etc.)" ;
    int animalNumber;
    cin >> animalNumber; 

    switch (animalNumber)
    {
    case animals::cow: //cow is an enum type that takes the place of an integer
        //enums make code more "readable" 
        cout << "Cow goes moo\n";
        break; 

    case dog: 
        cout << "Woof, woof\n";
        break;

    case fox: 
        cout << "What does the fox say?\n";
        break;

    default: 
        cout << "Unrecognized animal\n";
        break;
    }

    return 0;
}