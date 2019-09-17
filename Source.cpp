#include <cstdlib> 
#include <ctime> 
#include <string>
#include <iostream>

using namespace std;

int main()
{
	const int GOLD_PIECES = 900;
	int adventurers, playerChoice;
	string leader;
	char decision;
	// reset seed each time program is launched
	srand((unsigned)time(0));


	//get the information
	cout << "\t\t ***Welcome to The Jungle***\n\n";
	cout << "Please enter the following for your personalized adventure\n";

	cout << "Enter a number of players: ";
	cin >> adventurers;


	cout << "Welcome to the jungle brave fools! before you is a split path, one leads left and one leads right." << endl;

	int test = 0;
	//game loop to determine how many lives are lost on the way through
	while (true) {
		cout << "Which do you choose? R or L" << endl;
		cin >> decision;
		// randomly picks a number from 1-100
		int i = (rand() % 100) + 1;

		// checks if a life was lost by determining if the random number generated was even or odd
		if ((tolower(decision) == 'l' && (i % 2) == 1) || (tolower(decision) == 'r' && (i % 2 == 0)))
		{
			adventurers -= 1;
			cout << "a trap was sprung! One of the players has died." << endl;
		}
		// displays msg when player avoids danger
		else {
			cout << "the path is clear! You continue deeper into the jungle." << endl;
		}
		// prints lives left
		cout << "You have " << adventurers << " left!" << endl;
		//checking the random number
		//cout << i << endl;


		//checks for game over loss condition
		if (adventurers == 0) {
			cout << "EVERYONE DIED! \n\t\t ***GAME OVER***";
			break;
		}

		// once loops is finished shows the players final score
		if (test == 4) {
			cout << "you made it out with " << adventurers << "and the " << GOLD_PIECES << " gold!";
			break;
		}
		test++;


	};


	return 0;
}

