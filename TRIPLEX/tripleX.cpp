#include <iostream>

void PrintIntroduction()
{
    std::cout << "##### You are in a restricted area... #####\n";
    std::cout << "##### Enter the correct code to proceed... #####\n\n";
}

void PlayGame()
{

PrintIntroduction();

const int CodeA = 4;
const int CodeB = 3;
const int CodeC = 2;

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
}
else
{
    std::cout << "\n##### Accsess denied! #####";
}

    
}

int main()
{

PlayGame();

return 0;
}