#include <iostream>
#include <cmath>
#include <iomanip>
#include <fstream>
#include <string>

//camelCase

int main() {
	//cout << "You are this many inches tall" << 1212341234 / 1234123434433 << endl;
	//Part 1 - distances
	double X1 = 0, Y1 = 0;
	double X2 = 6, Y2 = 6;

	double pythagorean_distance = sqrt(pow(X1 - X2, 2) + pow(Y2 - Y1, 2));
	double Manhattan_distance = abs(X1 - X2) + abs(Y1 - Y2);


	std::cout << std::fixed; //ioManip
	std::cout << std::setprecision(2);

	std::cout << "Pythagorean distance: " << pythagorean_distance << std::endl;
	std::cout << "Manhattan distance: " << Manhattan_distance << std::endl;


	//Optional extra:
	double TJC_Pirtle_Building_longitude = 32.331'852'295'233'43, 
		TJC_Pirtle_Building_latitude = -95.28150422263471;
	
	double Dallas_Fort_Worth_InternationaL_Airport_longitude = 32.897653638670896, 
		Dallas_Fort_Worth_InternationaL_Airport_latitude = -97.03216990912894;

	//double pythagorean_distance_TJC_to_DFW = sqrt(

	//	pow(
	//		TJC_Pirtle_Building_latitude - Dallas_Fort_Worth_InternationaL_Airport_longitude, 2) 
	//	
	//	+ pow
	//	(TJC_Pirtle_Building_latitude - Dallas_Fort_Worth_InternationaL_Airport_latitude, 2)

	//); //LOGIC ERROR!

	//const double CONVERSION_FACTOR;
	const double NUMBER_OF_MILES_IN_ONE_DEGREE = 60;

	double pythagorean_distance_TJC_to_DFW = sqrt(

		pow(
			TJC_Pirtle_Building_latitude - Dallas_Fort_Worth_InternationaL_Airport_latitude, 2)

		+ pow
		(TJC_Pirtle_Building_longitude - Dallas_Fort_Worth_InternationaL_Airport_longitude, 2)
	)
		* NUMBER_OF_MILES_IN_ONE_DEGREE;

	std::cout << std::fixed;
	std::cout << std::setprecision(2);

	std::cout << "Distance between TJC Pirtle to DFW : " << pythagorean_distance_TJC_to_DFW << " MILES" << std::endl;
	//120 miles 


	//Part 2 - lengths

	const int TWITTER_CHAR_LIMIT = 280;

	std::string tweet;
	std::cout << "Enter your tweet: ";
	std::getline(std::cin, tweet);

	if (tweet.length() > TWITTER_CHAR_LIMIT) {
		std::cout << "Your tweet exceeds Twitter's character limit of " << TWITTER_CHAR_LIMIT << " characters.\n";
	}
	else {
		std::cout << "Your tweet is within Twitter's character limit.\n";
	}

	std::ofstream outFile("tweet.txt");
	outFile << "Tweet: " << tweet << "\n";
	outFile << "Length: " << tweet.length() << "\n";
	outFile.close();

	std::cout << "Your tweet and its length have been written to 'tweet.txt'.\n";
	return 0;
}


