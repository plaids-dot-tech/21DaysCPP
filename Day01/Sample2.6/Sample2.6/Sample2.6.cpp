#include <iostream>
#include <string>
using namespace std;


int main()
{
	int InputNumber;

	cout << "Enter an integer: ";

	cin >> InputNumber;

	cout << "Enter your name: ";
	string InputName;
	cin >> InputName;

	cout << InputName << " entered " << InputNumber << endl;

	return 0;
}