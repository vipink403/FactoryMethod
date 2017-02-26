#include <iostream>
#include "ToyFactory.h"
using namespace std;

int main()
{
	int type;
	do
	{
		cout << "Enter type or zero for exit\n";
		cin >> type;
		if (!type)
			return 0;
		static Toy *toy = ToyFactory::CreateToy(type);
		if (toy)
		{
			toy->showProduct();
			delete toy;
		}
	} while (type != 0);
	cout << "Exit...!" << endl;
}