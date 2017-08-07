#include <iostream>
#include <string>
#include "PC.h"

using namespace std;

void main()
{
	cout << "BEGIN" << endl;
	std::unique_ptr<PC> myPC = std::make_unique<PC>();

	myPC->SayHello();
	myPC->InstalToMac();
	myPC->SayHello();
}
