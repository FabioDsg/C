#pragma once
#include<string>

using Fstring = std::string;
using int32 = int;

struct FBullCowCount
{
	int32 Bulls = 0;
	int32 Cows = 0;
};

enum class EGuessStatus
{
	OK,
	Not_Isogram,
	Wrong_Length,
	Not_LowerCase
};

class FBullCowGame
{
public:
	
	FBullCowGame(); //Constructor

	void reset(); //TODO make a more rich return value.
	int32 GetMaxTries() const;
	int32 CurrentTry() const;
	int32 GetHiddenWordLength() const;
	bool IsGameWon() const;
	EGuessStatus CheckGuessValidity(Fstring) const;// TODO make a more rich return value.
	FBullCowCount SubmitGuess(Fstring);

private:
	//See constructor for initialisation
	int MyCurrentTry;
	int32 MyMaxTries;
	Fstring MyHiddenWord;
};

