#include<iostream>
#include<String>

using namespace std;

void printIntro();
string getGuessAndPrintBack();

//The entry point for our application
int main()
{
	
	printIntro();
	getGuessAndPrintBack();
		
	cout << endl;
	return 0;
}

//Introduce the game
void printIntro() {

	constexpr int WORLD_LENGTH = 9;

	cout << "Welcome to Bulls and Cows, a fun word game.\n";
	cout << "Can you guess the " << WORLD_LENGTH;
	cout << " letter isogram I'm thinking of?\n";
	cout << endl;
	return;
}

//Get a guess from the player
string getGuessAndPrintBack() {

	cout << "Enter your guess: ";
	string Guess = "";
	getline(cin, Guess);
	//Print the guess back to them
	cout << "Your guess was: " << Guess << endl;
	return Guess;
}