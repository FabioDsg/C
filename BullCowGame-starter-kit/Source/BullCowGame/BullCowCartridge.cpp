// Fill out your copyright notice in the Description page of Project Settings.
#include "BullCowCartridge.h"

void UBullCowCartridge::BeginPlay() // When the game starts
{
	Super::BeginPlay();

	SetupGame();

	PrintLine(TEXT("The hidden word is: %s"), *HiddenWord); // Debug line

}

void UBullCowCartridge::OnInput(const FString& Input) // When the player hits enter
{

	if (bGameOver)
	{
		ClearScreen();
		SetupGame();


	}
	else // Checking PlayerGuess
	{
		if (Input == HiddenWord)
		{
			PrintLine(TEXT("You have won!!!"));
			EndGame();
		}
		else
		{


			if (Input.Len() != HiddenWord.Len())
			{
				PrintLine(TEXT("The Hidden Word is %i characters long. \nYou have lost!"), HiddenWord.Len());
				EndGame();
			}

		}


	}


	// Check if Isogram

	// Check Right number of characters

	// Remove life

	// Check if life is > 0

	// If yes play again

	// Show lives left

	// Prompt to play again

}

void UBullCowCartridge::SetupGame()
{

	// Welcoming the player
	PrintLine(TEXT("Welcome to game! Let's play!"));

	HiddenWord = TEXT("cake"); // Declaration moved into head file
	Lives = 4; // Set lives
	bGameOver = false;

	PrintLine(TEXT("Guess the %i letter word!"), HiddenWord.Len()); // Magic Number Remove
	PrintLine(TEXT("Type your guess. \nPress enter to continue...")); // Prompt player for guess


}

void UBullCowCartridge::EndGame()
{
	bGameOver = true;
	PrintLine(TEXT("Press enter to play again."));
}