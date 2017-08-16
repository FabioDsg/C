#include "FBullCowGame.h"

void FBullCowGame::reset()
{
	return;
}

int FBullCowGame::GetMaxTries()
{

	return MyMaxTries;
}

int FBullCowGame::CurrentTry()
{
	return MyCurrentTry;
}

bool FBullCowGame::IsGameWon()
{
	return false;
}

bool FBullCowGame::CheckGuessValidity(std::string)
{
	return false;
}
