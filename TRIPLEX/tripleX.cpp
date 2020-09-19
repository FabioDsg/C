#include <iostream>

void PrintIntroduction(int Difficulty)
{
    std::cout << "\n\nYou are at the level " << Difficulty;
    std::cout << "\n##### Restricted area...#####\n##### Enter the correct code to proceed... #####\n\n";
}

bool PlayGame(int Difficulty)
{

PrintIntroduction(Difficulty);

const int CodeA = rand();
const int CodeB = rand();
const int CodeC = rand();

const int Codesum = CodeA + CodeB + CodeC;
const int CodeProduct = CodeA * CodeB * CodeC;

// Print CodeSum and CodeProduct to the terminal
std::cout << "+ There are 3 numbers in the code";
std::cout << "\n+ The codes add up to: " << Codesum;
std::cout << "\n+ The codes multiply to give: " << CodeProduct << std::endl;

// Store player guess
int GuessA, GuessB, GuessC;
std::cin >> GuessA >> GuessB >> GuessC;

int GuessSum =  GuessA + GuessB + GuessC;
int GuessProduct =  GuessA * GuessB * GuessC;

if (GuessSum == Codesum && GuessProduct == CodeProduct)
{
    std::cout << "\n##### Accsess granted! #####";
    return true;
}
else
{
    std::cout << "\n##### Accsess denied! #####";
    return false;
}

    
}

int main()
{

int LevelDifficulty = 1;

while(true)
    {
        bool bLevelComplete = PlayGame(LevelDifficulty);
        std::cin.clear(); // Clears any errors
        std::cin.ignore(); // Discards the buffer

        if (bLevelComplete) 
        {
        ++LevelDifficulty;
        }
    }

return 0;
}