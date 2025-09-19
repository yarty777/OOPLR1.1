#pragma once
#include "string.h"
#include "iostream"
using namespace std;
class wyrib
{
public:
	string name;
	string shifr;
	int number;
	wyrib();
	wyrib(string name, string shifr, int number);
	wyrib(const wyrib&);
	~wyrib(void);
	string getname();
	string getshifr();
	int getnumber();
	void setwybir(string n, string shi, int num);
	void setName(string name);
	void setShifr(string shifr);
	void setNumber(int number);
	void printWybir();
};