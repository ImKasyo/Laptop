#include "Laptop.h"
#include<iostream>
using namespace std;

Laptop::Laptop(const char* n, double pr, const char* mcpu, double prcpu, const char* mram, double prram):cpu(mcpu, prcpu), ram(mram, prram)
{
	name = new char[strlen(n) + 1];
	strcpy_s(name, strlen(n) + 1, n);
	price = pr;

	//ram = new Ram("Samsung", 200);
}

double Laptop::GetPrice()
{
	return price + cpu.GetPrice() + ram->GetPrice() ;
}

void Laptop::Output()
{
	cout << "Model: " << name << endl
		<< "Cpu: " << cpu.GetModel() << endl
		<< "Ram" << ram->GetModel() << endl
		<< "Laptop price = " << GetPrice() << " $\n" << endl;
}

Laptop::~Laptop()
{
	delete[] name;
	//delete ram;
}
