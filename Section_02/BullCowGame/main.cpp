#include<iostream>
#include<String>

using namespace std;

void printIntro();
void PlayGame();
string getGuess();

//The entry point for our application
int main()
{
	printIntro();
	PlayGame();
			
	return 0;
}

void PlayGame()
{
	//Loop for the number of turns asking for guesses
	constexpr int NUMBER_OF_TURNS = 5;
	for (int i = 0; i < NUMBER_OF_TURNS; i++)
	{
		string Guess ="";
		Guess = getGuess();
		cout << "Your guess was: " << Guess << endl;
		cout << endl;
	}
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


string getGuess() 
{
		//Get a guess from the player
		cout << "Enter your guess: ";
		string Guess = "";
		getline(cin, Guess);
		return Guess;
}