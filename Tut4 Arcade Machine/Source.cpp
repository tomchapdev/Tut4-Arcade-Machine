#include <iostream>

using namespace std;

int main()
{
	int payInitialFee();
	char enterOption();
	void showBalance(int balance), processOption(char option, int& balance);

	int balance = payInitialFee();
	char option = enterOption();

	while ((option != 'Q') && (balance > 0))
	{
		processOption(option, balance);
		option = enterOption();
	}
	return 0;
}

int payInitialFee()
{
	return 100;
}

void showBalance(int balance)
{
	cout << "The current balance is \x9C" << balance << endl;
}

char enterOption()
{
	char option;
	cout << "\nEnter option (P:play or B:balance or Q:quit> ";
	cin >> option;
	return toupper(option);
}

void playGame(int& balance)
{
	int gameFee = 20;

	cout << "Playing...\n";
	balance -= gameFee;
}

void processOption(char option, int& balance)
{
	switch (option)
	{
	case 'P':
		playGame(balance);
		break;
	case 'B':
		showBalance(balance);
		break;
	default:
		cout << "ERROR: Invalid Command!\n";
	}
}