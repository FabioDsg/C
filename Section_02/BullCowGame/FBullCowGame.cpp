#include "FBullCowGame.h"

using int32 = int;

FBullCowGame::FBullCowGame()
{
	reset();
}

void FBullCowGame::reset()
{
	constexpr int32 MAX_TRIES = 8;
	MyMaxTries = MAX_TRIES;

	const Fstring HIDDEN_WORD = "planet";
	MyHiddenWord = HIDDEN_WORD;

	MyCurrentTry = 1;
	return;
}

int32 FBullCowGame::GetMaxTries() const
{

	return MyMaxTries;
}

int32 FBullCowGame::CurrentTry() const
{
	return MyCurrentTry;
}

bool FBullCowGame::IsGameWon() const
{
	return false;
}

bool FBullCowGame::CheckGuessValidity(Fstring)
{
	return false;
}

// Receives a VALID guess, increments turn, and returns count
BullCowCount FBullCowGame::SubmitGuess(Fstring)
{
	//Increment the turn number
	MyCurrentTry++;

	//Setup a return variable
	BullCowCount BullCowCount;


	return BullCowCount;
}
