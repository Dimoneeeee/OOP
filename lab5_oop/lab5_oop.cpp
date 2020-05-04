#include "pch.h"
#include <string>
#include <iostream>
#include "Address.h"

using namespace std;

int main()
{
	Address address; //вызов конструктора без параметров
	Address address2("Dimasik", "Sakharova", 47);//вызов конструктора с параметрами
	Address address3(address);//вызов конструктора копирования
	Address *ptr =new Address;//вызов конструктора без параметров
	address2.SetName("Ananasik");
	ptr = &address2;
	cout << ptr->GetName() << endl;
	ptr = &address3;
	cout << ptr->GetName() << endl;
	ptr->SetName("changed");
	cout << address3.GetName() << endl;
	return 0;
	//Вызов деструктора
	//Вызов деструктора
	//Вызов деструктора
	//Вызов деструктора
}
