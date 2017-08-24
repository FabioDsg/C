/* This is the console executable, that makes use of the BullCow class
This acts as the view in a MVC pattern, and is responsible for all
user interaction. For game logic see the FBullCowGame class.
*/

#include<iostream>
#include<String>
#include "FBullCowGame.h"

using Ftext = std::string;
using int32 = int;

void printIntro();
void PlayGame();
bool AskToPlayAgain();
Ftext getGuess();

//Instantiate a new game
FBullCowGame BCGame;

//The entry point for our application
int main()
{
	std::cout << BCGame.CurrentTry();
	bool bPlayAgain = false;
	do{
		printIntro();
		PlayGame();
		bPlayAgain = AskToPlayAgain();
		}
	while (bPlayAgain);
		return 0;
}

void PlayGame()
{
	BCGame.reset();
	int32 MaxTries = BCGame.GetMaxTries();
	
	//Loop for the number of turns asking for guesses
	//TODO change from FOR to WHILE loop once we are alidating tries
	for (int i = 0; i < MaxTries; i++)
	{
		Ftext Guess = getGuess(); // TODO make loop cheking valid
		
		// Submit valid guess to the game, and receive counts
		FBullCowCount BullCowCount = BCGame.SubmitGuess(Guess);

		//Print number of bulls and COWS
		std::cout << "Bulls = " << BullCowCount.Bulls;
		std::cout << ". Cows " << BullCowCount.Cows << std::endl;

		std::cout << std::endl;
	}

	// TODO Summarise game 
}

bool AskToPlayAgain()
{
	std::cout << "Do you want to play again (y/n)? ";
	Ftext Response = "";
	std::getline(std::cin, Response);
	return (Response[0] == 'y') || (Response[0] == 'Y');
}


	//Introduce the game
	void printIntro() 
	{
		constexpr int WORLD_LENGTH = 9;
		std::cout << "Welcome to Bulls and Cows, a fun word game.\n";
		std::cout << "Can you guess the " << WORLD_LENGTH;
		std::cout << " letter isogram I'm thinking of?\n";
		std::cout << std::endl;
		return;
	}


Ftext getGuess() 
{
	int32 CurrentTry = BCGame.CurrentTry();
	
		//Get a guess from the player
		std::cout << "Try " << CurrentTry << ". Enter your guess: ";
		Ftext Guess = "";
		std::getline(std::cin, Guess);
		return Guess;
}