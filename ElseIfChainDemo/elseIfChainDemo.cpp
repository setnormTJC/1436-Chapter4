#include <iostream>
#include <string>

using std::cout; 
using std::cin; 
using std::endl; 
using std::string;

int main()
{
	//int num = 5; 

	//if (num >= 5) //NO! -> do not put a semicolon after the closing parenthesis of an `if`
	//{
	//	cout << "The number " << num << " is greater  than or equal to 5" << endl; 
	//}

	//if(num == 5)
	//{
	//	cout << "The number " << num << " is EQUAL TO  5" << endl; 
	//}

	//else  /*()*/// NO PARENTHESES on an `else`//catch-all remaining possibilites
	//{
	//	cout << "The number " << num << " is LESS than 5" << endl; 
	//}

	//three possibilities: 
	//	if else if else 

	//cout << "\n\n\n\n\n\n\n";

	//more than 3 possibilities (switch)
	//Cute Origami thing: https://www.youtube.com/watch?v=WpsmrQdN0Do4

	while (true) //infinite loop
	{
		//{ //"anonymous scope" 

		cout << "Enter a color (ex: white, blue, purple, etc.)" << endl;
		string color;

		cin >> color;

		if (color == "white")
		{
			cout << "White is associated with \"purity\" - whatever that means." << endl;
		}

		else if (color == "blue")
		{
			cout << "I guess the color blue is most often associated with the sky.\n";
		}

		else if (color == "purple")
		{
			cout << "Purple - the color of royalty?" << endl;
		}

		else if (color == "green")
		{
			cout << "Green -> jealousy ... and grass ... and LIFE" << endl;
		}

		else
		{
			cout << "That color isn't one I'd care to describe...\n";
		}
			
		cout << "\n\n";
	}  //end while true


	return 0; 
}