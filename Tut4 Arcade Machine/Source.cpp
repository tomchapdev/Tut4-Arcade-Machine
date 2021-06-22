#include <iostream>
const char POUNDSIGN = 0x9C;

int main()
{
	//Hurdy Gurdy Truffle Shuffle
	//Another Test
	char enterOption();
	void processOption(char option, int& balance);

	std::cout << "Arcade Machine Menu v1.0";
	int balance = 100;							//payInitialFee value set in declaration instead of unnecessary function
	char option = enterOption();

	while ((option != 'Q') && (balance > 0))
	{
		processOption(option, balance);
		option = enterOption();
	}
	return 0;
}

char enterOption()
{
	char option;
	std::cout << "\nEnter option (P:play or B:balance or Q: quit> ";
	std::cin >> option;
	return toupper(option);
}

void processOption(char option, int& balance)
{
	void playGame(int&);

	switch (option)
	{
	case 'P':
		playGame(balance);
		break;
	case 'B':
		std::cout << "The current balance is " << POUNDSIGN << balance << std::endl;
		break;
	default:
		std::cout << "ERROR: Invalid Command!\n";
	}
}

void playGame(int& balance)
{
	int gameFee = 20;

	std::cout << "Playing...\n";				//... Player plays arcade game
	balance -= gameFee;
}