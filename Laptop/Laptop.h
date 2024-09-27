#pragma once
#include "Cpu.h"
class Ram
{
	char* model;
	double price;
public:
	Ram();
	Ram(const char* m, double pr);
};

class Laptop
{
	char* name;
	double price;
	Cpu cpu; // ������ ������� ������ ��� ������������ �� ���������!
	Ram * ram;
	/* ��������� ��������� ���������� ��� �������� - ��������� �� �������, ��� ������� ������ �����. � ������������ ������ Laptop 
	*/
public:
	Laptop(const char* n, double pr, const char* mcpu, double prcpu);
	double GetPrice();
	void Output();
	~Laptop();
};

