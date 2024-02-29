#include <iostream>
#include <iomanip>

#include<fstream>

using namespace std;

int main()
{
    ifstream inputData; //#include <fstream>
    
    inputData.open("inputFile.txt");
    //
    //if (!inputData) //if NOT inputData 
    //{
    //    cout << "File not found" << endl;
    //    return -21; //"early return" -> kills the program 
    //    // return prevents program from going further
    //    // returning nonzero value is convention for abnormal termination
    //}

    string stringName; 
    inputData >> stringName; 
    cout << "Did it work? " << stringName << endl;


    double sum = (2.0 / 7.0) + (3.0 / 7.0) + (2.0 / 7.0);
    //And verify the result with :
    cout << fixed << setprecision(20); //this displays 14 digits after the decimal 
    cout << sum << endl; // prints 1 – as expected ...

    //cout << DBL_MAX << endl; 
    cout << DBL_EPSILON << endl; 
    //if (sum == 1.0) //the dangerous of floating point comparisons...
    //{
    //    cout << "The sum is ONE!\n";
    //}
    //else
    //{
    //    cout << "NOT EQUAL TO ONE?! \n";
    //}

    //a better approach for comparing floating point values 
    //0.00000000000000016
    //errorTolerance depends on your application 
    //does someone DIE if this "specification" is insufficiently "tight" 
    double errorTolerance = DBL_EPSILON;  //uncertainty (Heisenberg Uncertainty principle) 


    //sum = 0.999999 
    if (abs(sum - 1.0) < errorTolerance)
    //0.99999 - 1.0 = -0.00001 
    {
        //cout << "Sum is equal to 1.0 +/- " << errorTolerance << endl; 
        cout << "Sum is equal to 1.0 (approximately)\n"; 
    }

    else
    {
        cout << "NOT equal within tolerance!" << endl; 
    }


    return 0;
}