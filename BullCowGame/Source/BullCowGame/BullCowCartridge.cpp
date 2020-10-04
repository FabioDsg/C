// Fill out your copyright notice in the Description page of Project Settings.
#include "BullCowCartridge.h"

void UBullCowCartridge::BeginPlay() // When the game starts
{
    Super::BeginPlay();

    SetupGame(); // Setting Up Game

    PrintLine((TEXT("The HiddenWord is: %s "), *HiddenWord)); // Debug line
    

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
        if (HiddenWord == Input)
        {
            PrintLine(TEXT("You have won!"));
            EndGame();
        }
        else
        {
            --Lives;
            PrintLine(TEXT("Lost a life!"));
            if (Lives > 0)
            {
                if (Input.Len() != HiddenWord.Len())
                {
                    PrintLine(TEXT("Sorry, try guess again! \nYou have %i lives remaining"), Lives);
                }

            }
            else
            {
                PrintLine(TEXT("You have no lives left!"));
            }
            

        }
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
    // Welcome the player
    PrintLine(TEXT("Welcome to Bull Cows Game!"));

    HiddenWord = TEXT("cake");
    Lives = 4; // Set lives
    bGameOver = false;

    PrintLine(TEXT("Guess the %i letter word! "), HiddenWord.Len());
    PrintLine(TEXT("Type in your guess. \nPress enter to continue..."));  // Prompt player to guess

}

void UBullCowCartridge::EndGame()
{
    bGameOver = true;
    PrintLine(TEXT("Press enter to play again..."));
}