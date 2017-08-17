#pragma once
#include<string>

class FBullCowGame
{
public:
	//TODO make a more rich return value.
	FBullCowGame();
	void reset();
	int GetMaxTries() const;
	int CurrentTry() const;
	bool IsGameWon() const;
	bool CheckGuessValidity(std::string);


private:
	//See constructor for initialisation
	int MyCurrentTry;
	int MyMaxTries;
};

