#pragma once
#include "Cpu.h"
using namespace std;
class Ram
{
	char* model;
	double price;
public:
	Ram();
	Ram(const char* m, double pr);
	const char* GetModel();
	double GetPrice();
	void SetPrice(double pr);
	void Output();
	~Ram();
};

class Laptop
{
	char* name;
	double price;
	Cpu cpu; // ������ ������� ������ ��� ������������ �� ���������!
	Ram *ram;
	/* ��������� ��������� ���������� ��� �������� - ��������� �� �������, ��� ������� ������ �����. � ������������ ������ Laptop 
	*/
public:
	Laptop(const char* n, double pr, const char* mcpu, double prcpu, const char* mram, double prram);
	double GetPrice();
	void Output();
	~Laptop();
};

