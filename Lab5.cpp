
#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

void won();

void lost();

void ifcontinue();

int wins = 0;
int losses = 0;

int main()
{
	srand(unsigned int(time(NULL)));

	// acquire the random number value
	int randomNumber = rand() % 100 + 1;
	int userInput;
	int guesses = 1;


	
	do{
		cout << "Please enter a number between 1 and 100: ";

		cin >> userInput;

		if (randomNumber == userInput)
		{
			won();//function for if the user wins
			wins = wins++;
			guesses = 21; 
		}
		else
		{
			lost();//function for if the user loses
			guesses = guesses++;
			if (guesses >= 21) {
				losses = losses++;
			}
		}
	}
	while (guesses <= 20);
	ifcontinue();
}

void lost()//Stores and selects responses for if the user guesses incorrectly
{
	int lossresponse = rand() % 10 + 1;
	switch (lossresponse) {
	case 1: cout << "Try again!" << endl;
		break;
	case 2: cout << "You can do it!" << endl;
		break;
	case 3: cout << "Keep going!" << endl;
		break;
	case 4: cout << "Not quite!" << endl;
		break;
	case 5: cout << "Oof" << endl;
		break;
	case 6: cout << "That's not it!" << endl;
		break;
	case 7: cout << "Swing and'a miss!" << endl;
		break;
	case 8: cout << "Are you even trying?" << endl;
		break;
	case 9: cout << "How sad" << endl;
		break;
	case 10: cout << "Keep on trying!" << endl;
		break;
	}
}
void won()//stores and selects responses for if the user guesses correctly
{
	int winresponse = rand() % 10 + 1;
	switch (winresponse) {
	case 1: cout << "WOW! You Got It!!!" << endl;
		break;
	case 2: cout << "Im Impressed!" << endl;
		break;
	case 3: cout << "Did You Cheat?" << endl;
		break;
	case 4: cout << "Great Work!" << endl;
		break;
	case 5: cout << "How'd you get it!?" << endl;
		break;
	case 6: cout << "I thought that was a hard one" << endl;
		break;
	case 7: cout << "I'll have to try harder next time" << endl;
		break;
	case 8: cout << "Hope you had fun!" << endl;
		break;
	case 9: cout << "Superstar!" << endl;
		break;
	case 10: cout << "WooHoo!!!" << endl;
		break;
	}
}
void ifcontinue()//Prompts the user if they wish to continue then restarts or exits the code based on answer
{
	string continueresponse;
	int continueprompt = rand() % 10 + 1;
	switch (continueprompt) {//stores and selects the promps for if the user wants to play again
	case 1: cout << "Wanna try again? Yes/No:" << endl;
		break;
	case 2: cout << "One more time? Yes/No:" << endl;
		break;
	case 3: cout << "Can you please play again? Yes/No:" << endl;
		break;
	case 4: cout << "C'mon try again! Yes/No:" << endl;
		break;
	case 5: cout << "Wanna give her another shot? Yes/No:" << endl;
		break;
	case 6: cout << "How about another round? Yes/No:" << endl;
		break;
	case 7: cout << "One more for good measure? Yes/No:" << endl;
		break;
	case 8: cout << "Another chance at victory? Yes/No:" << endl;
		break;
	case 9: cout << "Do you wish to try again? Yes/No" << endl;
		break;
	case 10: cout << "Come at me again! Yes/No" << endl;
		break;
	}
	cin >> continueresponse;

	if (continueresponse == "Yes") {
		main();
	}
	else {
		if (continueresponse == "No") {
			cout << "You won " << wins << " times and lost " << losses << " times.";
			exit;
		}
		else {
			cout << "please enter Yes or No" << endl;
			ifcontinue();
		}
	}
}