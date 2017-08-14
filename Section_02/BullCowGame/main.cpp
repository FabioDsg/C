#include<iostream>
#include<String>

using namespace std;

int main()
{
	//Introduce the game
	constexpr int WORLD_LENGTH = 9;

	cout << "Welcome to Bulls and Cows, a fun word game.\n";
	cout << "Can you guess the " << WORLD_LENGTH; 
	cout << " letter isogram I'm thinking of?\n";
	cout << endl;

	//Get a guess from the player
	cout << "Enter your guess: ";
	string Guess = "";
	getline(cin, Guess);

	//Repeat the guess back to them
	cout << "Your guess was: " << Guess << std::endl;

	// try get a guess from the player without "string Guess = "";" 
	cout << "Enter your guess: ";
	getline(cin, Guess);

	//Repeat the guess back to them
	cout << "Your guess was: " << Guess << std::endl;
	cout << endl;
	return 0;
}