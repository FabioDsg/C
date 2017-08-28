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

int32 FBullCowGame::GetHiddenWordLength() const
{
	return MyHiddenWord.length();
}



bool FBullCowGame::IsGameWon() const
{
	return false;
}

EGuessStatus FBullCowGame::CheckGuessValidity(Fstring Guess) const
{
	if (false)
	{
		return EGuessStatus::Not_Isogram;
	}
	else if (false)
	{
		return EGuessStatus::Not_LowerCase;
	}
	else if (Guess.length() != GetHiddenWordLength())
	{
		return EGuessStatus::Wrong_Length;
	}
	else
	{
		return EGuessStatus::OK;
	}
}



// Receives a VALID guess, increments turn, and returns count
FBullCowCount FBullCowGame::SubmitGuess(Fstring Guess)
{
	//Increment the turn number
	MyCurrentTry++;

	//Setup a return variable
	FBullCowCount BullCowCount;
		
	//Loop through all letter in the guess
	int32 HiddenWordLength = MyHiddenWord.length();

	for (int32 i = 0; i < HiddenWordLength; i++)
	{
		//compare letters against the hidden word
		for (int32 j = 0; j < HiddenWordLength; j++)
		{
			//If they match then
			if (Guess[i] == MyHiddenWord[i])
			{
				//if they're in the same place
				if (i == j)
				{
					BullCowCount.Bulls++;//increment bulls
				}
				else
				{
					BullCowCount.Cows++;//increment cows
				}
								
			}
				
		}
	}
		

	return BullCowCount;
}
