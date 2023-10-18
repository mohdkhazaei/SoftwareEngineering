#include <iostream>
using namespace std;

int L;		//This is not an ideal location - we will soon address this

 void displayBanner()
	{
		for (unsigned int n = 0; n < (L + 4); n++)
		{
			cout << "*";
		}
	}
int main()
{
	const string message = "Welcome to comp sci";
	
	//Get the length of the string
	L = message.length();

	displayBanner();
	//Write the banner above
	
	cout << endl;

	cout << "* ";				//Leading *
	cout << message;			//Message
	cout << " *" << endl;		//Trailing *

	//Write the banner below
	displayBanner();
	cout << endl;

	//Tell the calling shell all is well
	return 0;
}