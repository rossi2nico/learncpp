#include <iostream>

#define GRAVITY 9.8

double getTowerHeight() 
{	
	double height {};

	std::cout << "height of tower (m): ";
	std::cin >> height;

	return height;
}

void printBallHeights(double initialHeight, int seconds) 
{		
	for (int x { 0 }; x <= seconds; x++) {
		double height = initialHeight - (GRAVITY * (x * x) / 2);

		std::cout << "At " << x << " seconds, the ball is ";
		
		if (height <= 0) {
			std::cout << "on the ground.\n";
		}
		else {
			std::cout << "at height: " << height << " meters\n";
		}
	}
}

int main() 
{
	printBallHeights(getTowerHeight(), 10);	
	printBallHeights(getTowerHeight(), 5);	
	printBallHeights(getTowerHeight(), 15);	
	
	return 0;
}

