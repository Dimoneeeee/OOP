#include "pch.h"
#include <string>
#include <iostream>
#include "Address.h"

using namespace std;

int main()
{
	Address address; //����� ������������ ��� ����������
	Address address2("Dimasik", "Sakharova", 47);//����� ������������ � �����������
	Address address3(address);//����� ������������ �����������
	Address *ptr =new Address;//����� ������������ ��� ����������
	address2.SetName("Ananasik");
	ptr = &address2;
	cout << ptr->GetName() << endl;
	ptr = &address3;
	cout << ptr->GetName() << endl;
	ptr->SetName("changed");
	cout << address3.GetName() << endl;
	return 0;
	//����� �����������
	//����� �����������
	//����� �����������
	//����� �����������
}
