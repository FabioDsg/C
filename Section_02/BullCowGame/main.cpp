#include<iostream>

int main()
{
	constexpr int WORLD_LENGTH = 9;

	std::cout << "Welcome to Bulls and Cows, a fun word game." << std::endl;
	std::cout << "Can you guess the " << WORLD_LENGTH; 
	std::cout << " letter isogram I'm thinking of?\n";
	return 0;
}