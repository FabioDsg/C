// Fill out your copyright notice in the Description page of Project Settings.
#include "BullCowCartridge.h"

void UBullCowCartridge::BeginPlay() // When the game starts
{
    Super::BeginPlay();
    
    // Welcome the player
    PrintLine(TEXT("Welcome to Bull Cown Game!"));
    PrintLine(TEXT("Guess the 4 letter word! "));
    PrintLine(TEXT("Press enter to continue..."));
 
    SetupGame(); // Setting Up Game

    // Prompt player to guess


}

void UBullCowCartridge::OnInput(const FString& Input) // When the player hits enter
{
    ClearScreen();

    // Checking PlayerGuess

    if (HiddenWord == Input)
    {
        PrintLine(TEXT("You have won!"));
    }
    else
    {
        if (Input.Len() != HiddenWord.Len())
        {
            PrintLine(TEXT("The hidden word is 4 characters long, try again!"));
        }
        
        PrintLine(TEXT("You have lost!"));

        
    }

    // Check if is a Isogram

    // Check right number of characters

    // Remove life

    // Check if lives is > 0

    // If yes PlayAgain

    // Show lives left

    // If no show GameOver

    // Prompt to play again

}

void UBullCowCartridge::SetupGame()
{
    
    HiddenWord = TEXT("cake");

    Lives = 4; // Set lives

}