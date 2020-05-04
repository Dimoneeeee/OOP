#pragma once

using namespace std;

class Address
{
private:
	string name;//���� ��� �����
	string street;//���� ��� �����
	int number;//���� ��� ������ ����
public:
	//�� ��� ���� - ��������� ����-����
	Address(string name, string street, int number);//������������ � �����������
	Address();//������������ ��� ����������
	Address(const Address &item);//������������ �����������
	~Address();//�����������

	void SetName(string val);//������� �����
	string GetName();//������� �����

	void SetStreet(string val);//������� �����
	string GetStreet();//������� ����� 
	void SetNumber(int val);//������� ������ ���� 
	int GetNumber();//������� ������ ����
};

