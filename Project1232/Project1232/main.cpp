 
#include <iostream>
#include <string>
#include <cmath> 
#include <vector>
#include <iomanip>
#include <cstdlib> 
#include <ctime> 

using namespace std;



int main() 
{
	
	
	int num;
	int guess;
	int guesses = 3;
	int counter = 0;
	int atempts = 3;

	

	while (counter != guesses) {

		srand(time(0));
		num = rand() % 9;

		cout << "Please enter your guess number from 1 to 5: " << endl;
		cin >> guess;

		atempts--;

		if (guess != num) {
			cout << "Wrong, num was " << num << " ,you have "
				<< atempts  << " left " << endl;
 		}

		if (guess == num) {
			cout << "Correct, num was " << num << endl;
		}

		if (atempts < 1) {
			cout << "Game Over " << endl;
		}
		
		counter++;
	}

	
	return 0;
}


