//#include "StdAfx.h"
#include "vyrib.h"
#include <iostream>
using namespace std;

wyrib::wyrib() :name(const_cast<char*>("")), shifr(const_cast<char*>("")), number(0)
{
	cout << "Vuklukano konstruktor bez parametriv " << this << endl;
}

wyrib::wyrib(string n, string shi, int num):name(n), shifr(shi), number(num)
{
	cout << "Vuklukano konstruktor z parametrom" << this << endl;
}

wyrib::wyrib(const wyrib&)
{
	cout << "Vuklukano konstruktor kopiruvania" << this << endl;
};

wyrib::~wyrib(void)
{
	cout << "Vuklukano destruktor " << this << endl;
};


string wyrib::getname()
{
	return name;
};


string wyrib::getshifr()
{
	return shifr;
};


int wyrib::getnumber()
{
	return number;
};


void wyrib::setName(string n)
{
	name = n;
};
void wyrib::setShifr(string shi)
{
	shifr = shi;
};


void wyrib::setNumber(int num)
{
	number = num;
};


void wyrib::printWybir()
{
	cout << "Name:" << name << "\t age:" << shifr << "\t pol:" << number << endl;
}


void wyrib::setwybir(string n, string shi, int num)
{
	name = n;
	shifr = shi;
	number = num;
	cout << "Name:" << name << "\t Shifr:" << shifr << "\t Number:" << number << endl;
}