#pragma once
#ifndef CAR_H
#define CAR_H
#include<iostream>

using namespace std;

class Car
{
    char *marka;
	char *color;
	int size;
	int speed;
public:
	Car(const char *m,const char *c,int s,int sp);
	void info();
	void start();
   ~Car();
};

#endif 


