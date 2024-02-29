#include <iostream>

using namespace std;

int main()
{
    while (true)
    {


        cout << "Enter your your favorite food: \n";
        string favoriteFood;
        cin >> favoriteFood;

        switch (favoriteFood) //NO STRINGS ALLOWED!
        //like a LIGHT switch 
        {
        case  "spaghetti":
            cout << "Spaghetti ist SEHR GUT!\n";
            break;

        case "hamburger":
            cout << "Hamburgers are ALSO good\n";
            break;

        case 'C':
            cout << "GPA = 2.0\n";
            break;

        case 'D':
            cout << "GPA = 1.0\n";
            break;

        case 'F':
            cout << "GPA = 0.0\n";
            break;

        default:
            cout << "UNRECOGNIZED letter grade" << endl;
            break;
        }
    }

    return 0;
}