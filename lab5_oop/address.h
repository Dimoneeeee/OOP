#pragma once

using namespace std;

class Address
{
private:
	string name;//поле для имени
	string street;//поле для улицы
	int number;//поле для номера дома
public:
	//всё что ниже - прототипы чего-либо
	Address(string name, string street, int number);//конструктора с параметрами
	Address();//конструктора без параметров
	Address(const Address &item);//конструктора копирования
	~Address();//деструктора

	void SetName(string val);//сеттера имени
	string GetName();//геттера имени

	void SetStreet(string val);//сеттера улицы
	string GetStreet();//геттера улицы 
	void SetNumber(int val);//сеттера номера дома 
	int GetNumber();//геттера номера дома
};

