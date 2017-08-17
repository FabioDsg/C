#include "FBullCowGame.h"

FBullCowGame::FBullCowGame()
{
	reset();
}

void FBullCowGame::reset()
{
	constexpr int MAX_TRIES = 8;
	MyMaxTries = MAX_TRIES;

	MyCurrentTry = 1;
	return;
}

int FBullCowGame::GetMaxTries() const
{

	return MyMaxTries;
}

int FBullCowGame::CurrentTry() const
{
	return MyCurrentTry;
}

bool FBullCowGame::IsGameWon() const
{
	return false;
}

bool FBullCowGame::CheckGuessValidity(std::string)
{
	return false;
}
