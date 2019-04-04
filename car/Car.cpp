#include "Car.h"

Car::~Car()
{
}

Car::Car(const char * m, const char * c, int s, int sp)
{
	marka=new char[strlen(m)+1];
	strcpy_s(marka,strlen(m) + 1, m);
	color = new char[strlen(c) + 1];
	strcpy_s(color,strlen(c) + 1, c);
	speed = sp;
	size = s;
}

void Car::info()
{
	cout << "Marka Auto: " << marka << endl;
	cout << "Color Auto: " << color << endl;
	cout << "Maxspeed Auto: " << speed << endl;
	cout << "size Auto: " << size << endl;
}

void Car::start()
{
}
