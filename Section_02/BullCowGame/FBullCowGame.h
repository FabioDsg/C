#pragma once
#include<string>

class FBullCowGame
{
public:
	//TODO make a more rich return value.
	void reset();
	int GetMaxTries();
	int CurrentTry();
	bool IsGameWon();
	bool CheckGuessValidity(std::string);


private:
	int MyCurrentTry = 1;
	int MyMaxTries = 5;
};

