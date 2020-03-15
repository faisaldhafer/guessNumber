/*
FAISAL ALZAHRANI
*/

#include <iostream>
#include <iomanip>
#include <cstdlib> 
#include <ctime> 

using namespace std;

int main()
{
	int again;

	do				// this "do while loop" to ask user to play again
	{
		int random;
		int n1;
		int attempts = 1;

		srand(time(0));					 //seed random number generator
		random = rand() % 100 + 1;		 //to choose a number between 1 and 100

		do								 // do while to start the game then check the answar
		{

			cout << "Guess a number between 1 and 100" << endl;
			cin >> n1;

			if (n1 == random)			// check if the guess is right, if no, go to else
			{
				cout << "That is right, you win!" << endl;
				cout << "You tried " << attempts << " times" << endl; // print the number of attemps
				break;					//go out of the loop
			}
			else if (attempts == 7) // check the attemps
			{
				cout << "You do not have attempts left " << endl;
				break;				// breck the loop to end the game
			}
			else if (n1 > random)		// check if the guess is bigger than the number
			{
				cout << "Wrong, the number is smaller than that, try again." << endl;
				attempts++;				// increas the number of attemps
			}
			else if (n1 < random)	// check if the guess is smaller than the number
			{
				cout << "Wrong, the number is bigger than that, try again." << endl;
				attempts++;			// increas the number of attemps
			}

		} while (n1 != random);




		cout << "Want to play again? -1 For Yes & 0 For No-" << endl; // 1 means true
		cin >> again;
	} while (again == true);

	getchar();
	return 0;
}
