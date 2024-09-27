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
	Cpu cpu; // Объект другого класса без конструктора по умолчанию!
	Ram * ram;
	/* добавляем остальные компоненты для ноутбука - указатели на объекты, для которых память выдел. в конструкторе класса Laptop 
	*/
public:
	Laptop(const char* n, double pr, const char* mcpu, double prcpu);
	double GetPrice();
	void Output();
	~Laptop();
};

