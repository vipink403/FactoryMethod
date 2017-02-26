#pragma once
#include "Object.h"

class ToyFactory
{
public:
	static Toy* CreateToy(int type)
	{
		Toy *toy = nullptr;
		switch (type)
		{
			case 1:
				toy = new Car();
				break;
			case 2:
				toy = new Bike();
				break;
			case 3:
				toy = new Plane();
				break;
			default:
				break;
		}
		toy->prepareParts();
		toy->combineParts();
		toy->assembleParts();
		toy->applyLabel();
		toy->showProduct();

		return toy;
	}
};