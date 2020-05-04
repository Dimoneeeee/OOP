#include "pch.h"
#include <string>
#include <iostream>
#include "Address.h"

using namespace std;


Address::Address()//конструктор без параметров
{
	cout << "Constructor bez parametrov bil vizvan. Object: " << this << endl;//сообщение о вызове конструктора
	name = "null";
	street = "null";
	number = 0;
}
Address::Address(string name, string street, int number)//конструктор с параметрами
{
	cout << "Constructor bez parametrov bil vizvan. Object: " << this << endl;
	this->name = name;
	this->street = street;
	this->number = number;
}
Address::Address(const Address &address)//конструктор копирования
{
	cout << "Constructor copirovaniya bil vizvan. Object: " << this << endl;
	this->name = address.name;
	this->street = address.street;
	this->number = address.number;
}
Address::~Address()//деструктор
{
	cout << "Destructor bil vizvan. Object: " << this << endl;
}
void Address::SetName(string val)//сеттер имени
{
	name = val;
}
string Address::GetName()//геттер имени
{
	return name;
}

void Address::SetStreet(string val)
{
	street = val;
}
string Address::GetStreet()
{
	return street;
}

void Address::SetNumber(int val)
{
	number = val;
}
int Address::GetNumber()
{
	return number;
}

