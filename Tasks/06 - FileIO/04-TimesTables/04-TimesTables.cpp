#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
	int timesTable;

	string fn = "times.txt";
	ofstream outputStream;
	outputStream.open(fn);
	if (outputStream.is_open() == false) {
		cerr << "Cannot open file " << fn << endl;
		return -1;
	}


	for (unsigned int r = 2; r <= 12; r++) {
		for (unsigned int c = 2; c <= 12; c++) {
			outputStream << r * c << "\t";
		}
		cout << endl;
	}
	cout << endl;

	outputStream.close();
	return 0;
}