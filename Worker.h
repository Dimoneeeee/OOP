#pragma once
#include <iostream>
#include <string>
#include "Cadre.h"
#include "CadreList.h"

class Worker : public Cadre {	
	protected:
		std::string Experience;
	public:
		Worker();
		Worker (
			std::string, 
			std::string, 
			std::string,
			float, 
			std::string
		);
		Worker(const Worker &);
		~Worker();
		void Show();
		void Add();	
};

Worker::Worker() { Experience = "UndefinedExperience"; }
Worker::Worker (
	std::string	_FirstName,
	std::string	_SecondName,
	std::string	_LastName,
	float		_DateOfBirth,
	std::string	_Experience
) : Cadre (
	_FirstName,
	_SecondName,
	_LastName,
	_DateOfBirth
) {
	Experience = _Experience;
}
Worker::Worker(const Worker& rWorker) { }
Worker::~Worker() { }

void Worker::Show() {
	std::cout << "Worker:\nFirstName: " << Cadre::FirstName << "\nSecondName: " << Cadre::SecondName << "\nLastName: " << Cadre::LastName << "\nDateOfBirth: " << Cadre::DateOfBirth << "\nExperience: " << this->Experience << std::endl << std::endl;
}

void Worker::Add() {
	list *pTemp	= new list;
	pTemp->pData = new Worker(
		FirstName,
		SecondName,
		LastName,
		DateOfBirth,
		Experience
	);
	pTemp->pNext = nullptr;
	if (CadreList::asList.GetHead() != nullptr) {
		CadreList::asList.GetTail()->pNext = pTemp;
		CadreList::asList.SetTail(pTemp);
	}
	else {
		CadreList::asList.SetHead(pTemp);
		CadreList::asList.SetTail(pTemp);
	}
}
	FirstName	= "UndefinedFirstName";
	SecondName	= "UndefinedSecondName";
	LastName	= "UndefinedLastName";
	DateOfBirth	= 1;
}
Cadre::Cadre(std::string _FirstName, std::string _SecondName, std::string _LastName, float _DateOfBirth) {
	FirstName	= _FirstName;
	SecondName	= _SecondName;
	LastName	= _LastName;
	DateOfBirth	= _DateOfBirth;
}
Cadre::Cadre(const Cadre& rCadre) { }
Cadre::~Cadre() { }