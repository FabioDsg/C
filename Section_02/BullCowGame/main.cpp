#include<iostream>
#include<String>

using namespace std;

void printIntro();
string getGuessAndPrintBack();

//The entry point for our application
int main()
{
		
	printIntro();
	
	//Loop for the number of turns asking for guesses
	constexpr int NUMBER_OF_TURNS = 5;
	for (int i = 0; i < NUMBER_OF_TURNS; i++) 
	{
		getGuessAndPrintBack();
		cout << endl;
	}
	
		
	return 0;
}


	//Introduce the game
	void printIntro() 
	{
		constexpr int WORLD_LENGTH = 9;
		cout << "Welcome to Bulls and Cows, a fun word game.\n";
		cout << "Can you guess the " << WORLD_LENGTH;
		cout << " letter isogram I'm thinking of?\n";
		cout << endl;
		return;
	}


string getGuessAndPrintBack() 
{
		//Get a guess from the player
		cout << "Enter your guess: ";
		string Guess = "";
		getline(cin, Guess);
		
		//Print the guess back to them
		cout << "Your guess was: " << Guess << endl;
		return Guess;
		
}