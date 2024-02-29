#include <iostream>

using namespace std;

int main()
{
    char menuLetterChosen; 
    cout << "Enter the letter of the menu button you want to click" << endl; 
    cin >> menuLetterChosen; 
    //string name = "asfdasd";
    //if (menuLetterChosen == 'F' || menuLetterChosen == 'f') //NO DOUBLE QUOTES HERE! - don't!
    ////Karo -> || means OR (logical OR operator) -> compound expression 
    //else if () 
    //else if 
    //else 

    switch(menuLetterChosen)
    {
    case 'F':
    case 'f': 
        cout << "Displaying the File menu options ...\n";
        cout << "Save, open, save as, etc. ...\n";
        break; //we will see later that `break` can be used to "get out of" LOOPS 

    case 'E': 
        cout << "Edit menu options\n"; 
        break; 

    case 'D':
        cout << "displaying debug menu options ...\n";
        break; 

    default: 
        cout << "UNRECOGNIZED input \n";
        break; 
    }


    return 0;
}