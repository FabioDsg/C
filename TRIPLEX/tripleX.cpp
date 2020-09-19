#include <iostream>
#include <ctime>

void PrintIntroduction(int Difficulty)
{
    std::cout << "\n\nYou are at the level " << Difficulty;
    std::cout << "\n##### Restricted area...#####\n##### Enter the correct code to proceed... #####\n\n";
}

bool PlayGame(int Difficulty)
{

PrintIntroduction(Difficulty);

const int CodeA = rand() % Difficulty + Difficulty; // Adding + 1 to remove 0 from range
const int CodeB = rand() % Difficulty + Difficulty;
const int CodeC = rand() % Difficulty + Difficulty;

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

srand(time(NULL)); // Create new random sequence based on time of day

int LevelDifficulty = 1;
int const MaxDifficulty = 5;

while(LevelDifficulty <= MaxDifficulty) // Loop game until all levels completed
    {
        bool bLevelComplete = PlayGame(LevelDifficulty);
        std::cin.clear(); // Clears any errors
        std::cin.ignore(); // Discards the buffer

        if (bLevelComplete) 
        {
        ++LevelDifficulty;
        }
    }
std::cout << "\n##### You finished here! Get out! #####";
return 0;
}