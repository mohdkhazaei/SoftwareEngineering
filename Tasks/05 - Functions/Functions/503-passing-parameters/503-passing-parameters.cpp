#include <iostream>
using namespace std;

void displayBanner(int stringLen)
{
	for (unsigned int n = 0; n < (stringLen + 4); n++) {
		cout << "*";
	}
	cout << endl;
}

void displayWithingBanner(string message)
{
	int L = message.length();

	displayBanner(L);	//Write the banner above

	cout << "* ";				//Leading *
	cout << message;			//Message
	cout << " *" << endl;	//Trailing *

	displayBanner(L);			//Write the banner below
}

int main()
{
	const string message = "Welcome to Computer Sciencesssssssssssssssssssssss";

	displayWithingBanner(message);

		return 0;
}