#include <iostream>
#include <cassert>

using namespace std;

#define print(a)  cout << a << endl; //alias (another name for a thing)
//"macro" (large) 

int main()
{
    //use INT_MAX
    //print("hello world");
    cout << INT_MAX << endl; 
    cout << INT_MIN << endl;

    cout << "Enter an integer, [lease" << endl; 
    int integer; 

    cin >> integer; 

    assert(integer < INT_MAX && integer > INT_MIN); 



    //INT_MAX
    return 0;
}