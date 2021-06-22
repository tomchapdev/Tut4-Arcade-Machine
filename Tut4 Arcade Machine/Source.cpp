#include <iostream>

using namespace std;

int main()
{
	int payInitialFee();
	char enterOption();
	void processOption(char option, int& balance);

	cout << "Arcade Machine Menu v1.0";
	int balance = payInitialFee();
	char option = enterOption();

	while ((option != 'Q') && (balance > 0))
	{
		processOption(option, balance);
		option = enterOption();
	}
	return 0;
}

// Hardcoded for now, this function should connect to the machine itself or an online account to read how much money the player has spent
int payInitialFee()
{
	return 100;
}

char enterOption()
{
	char option;
	cout << "\nEnter option (P:play or B:balance or Q: quit> ";
	cin >> option;
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
		cout << "The current balance is \x9C" << balance << endl;
		break;
	default:
		cout << "ERROR: Invalid Command!\n";
	}
}

void playGame(int& balance)
{
	int gameFee = 20;

	cout << "Playing...\n";				//... Player plays arcade game
	balance -= gameFee;
}