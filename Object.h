#pragma once
#include <iostream>
#include <string>
using namespace std;

class Toy
{
protected:
	string name;
	double price;
public:
	virtual void prepareParts() = 0;
	virtual void combineParts() = 0;
	virtual void assembleParts() = 0;
	virtual void applyLabel() = 0;
	virtual void showProduct() = 0;
};

class Car : public Toy
{
public:
	void prepareParts() { cout << "Preparing Car parts" << endl; }
	void combineParts() { cout << "Combining Car parts" << endl; }
	void assembleParts() { cout << "Assembling Car parts" << endl; }
	void applyLabel() { cout << "Applying Label on Car parts" << endl; }
	void showProduct()	{	cout << "Showcasing Car parts" << endl;	}
};

class Bike : public Toy
{
public:
	void prepareParts() { cout << "Preparing Bike parts" << endl; }
	void combineParts() { cout << "Combining Bike parts" << endl; }
	void assembleParts() { cout << "Assembling Bike parts" << endl; }
	void applyLabel() { cout << "Applying Label on Bike parts" << endl; }
	void showProduct() { cout << "Showcasing Bike parts" << endl; }
};

class Plane : public Toy
{
public:
	void prepareParts() { cout << "Preparing Plane parts" << endl; }
	void combineParts() { cout << "Combining Plane parts" << endl; }
	void assembleParts() { cout << "Assembling Plane parts" << endl; }
	void applyLabel() { cout << "Applying Label on Plane parts" << endl; }
	void showProduct() { cout << "Showcasing Plane parts" << endl; }
};
