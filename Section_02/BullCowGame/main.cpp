#include<iostream>
#include<String>
#include "FBullCowGame.h"

void printIntro();
void PlayGame();
bool AskToPlayAgain();
std::string getGuess();

//Instantiate a new game
FBullCowGame BCGame;

//The entry point for our application
int main()
{
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
	int MaxTries = BCGame.GetMaxTries();
	
	//Loop for the number of turns asking for guesses
	for (int i = 0; i < MaxTries; i++)
	{
		std::string Guess ="";
		Guess = getGuess();
		std::cout << "Your guess was: " << Guess << std::endl;
		std::cout << std::endl;
	}
}

bool AskToPlayAgain()
{
	std::cout << "Do you want to play again (y/n)? ";
	std::string Response = "";
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


std::string getGuess() 
{
	int CurrentTry = BCGame.CurrentTry();
	
		//Get a guess from the player
		std::cout << "Try " << CurrentTry << ". Enter your guess: ";
		std::string Guess = "";
		std::getline(std::cin, Guess);
		return Guess;
}