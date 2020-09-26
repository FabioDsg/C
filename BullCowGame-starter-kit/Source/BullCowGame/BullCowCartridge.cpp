// Fill out your copyright notice in the Description page of Project Settings.
#include "BullCowCartridge.h"

void UBullCowCartridge::BeginPlay() // When the game starts
{
    Super::BeginPlay();
    
    SetupGame();

    PrintLine(TEXT("The hiddenWord is: %s"), *HiddenWord); // Debug line

    // Welcoming the player
    PrintLine(TEXT("Welcome to game! Let's play!"));
    PrintLine(TEXT("Guess the %i letter word!"), HiddenWord.Len()); // Magic Number Remove
    PrintLine(TEXT("Type your guess and press enter to continue..."));


    // Prompt player for guess
}

void UBullCowCartridge::OnInput(const FString& Input) // When the player hits enter
{
    ClearScreen();

    // Check player guess
    
    if (Input == HiddenWord)
    {
        PrintLine(TEXT("You have won!!!"));
    }
    else
    {
        if (Input.Len() != HiddenWord.Len())
        {
            PrintLine(TEXT("The Hidden Word is %i characters long, try again!"), HiddenWord.Len());
        }
        PrintLine(TEXT("You have lost!"));
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
    HiddenWord = TEXT("cake"); // Declaration moved into head file
    Lives = 4; // Set lives
}