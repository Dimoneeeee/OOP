#include "pch.h"
#include <string>
#include <iostream>
#include "Address.h"

using namespace std;


Address::Address()//����������� ��� ����������
{
	cout << "Constructor bez parametrov bil vizvan. Object: " << this << endl;//��������� � ������ ������������
	name = "null";
	street = "null";
	number = 0;
}
Address::Address(string name, string street, int number)//����������� � �����������
{
	cout << "Constructor bez parametrov bil vizvan. Object: " << this << endl;
	this->name = name;
	this->street = street;
	this->number = number;
}
Address::Address(const Address &address)//����������� �����������
{
	cout << "Constructor copirovaniya bil vizvan. Object: " << this << endl;
	this->name = address.name;
	this->street = address.street;
	this->number = address.number;
}
Address::~Address()//����������
{
	cout << "Destructor bil vizvan. Object: " << this << endl;
}
void Address::SetName(string val)//������ �����
{
	name = val;
}
string Address::GetName()//������ �����
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

