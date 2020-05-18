#pragma once
#include <iostream>
#include <string>
#include "Worker.h"
#include "CadreList.h"

class Engineer : public Worker {
	protected:
		std::string Education;
	public:
		Engineer();
		Engineer (
			std::string,
			std::string,
			std::string,
			float,
			std::string,
			std::string
		);
		Engineer(const Engineer&);
		~Engineer();
		void Show();
		void Add(); 
};

Engineer::Engineer() { Education = "UndefinedEducation"; }
Engineer::Engineer(
	std::string	_FirstName,
	std::string	_SecondName,
	std::string	_LastName,
	float		_DateOfBirth,
	std::string	_Experience,
	std::string	_Education
) : Worker (
	_FirstName,
	_SecondName,
	_LastName,
	_DateOfBirth,
	_Experience
) {
	Education = _Education;
}
Engineer::Engineer(const Engineer& rEngineer) { }
Engineer::~Engineer() { }

void Engineer::Show() {
	std::cout << "Worker:\nFirstName: " << Cadre::FirstName << "\nSecondName: " << Cadre::SecondName << "\nLastName: " << Cadre::LastName << "\nDateOfBirth: " << Cadre::DateOfBirth << "\nExperience: " << Worker::Experience << "\nEducation: " << this->Education << std::endl << std::endl;
}

void Engineer::Add() {
	list *pTemp = new list;
	pTemp->pData = new Engineer(
		FirstName,
		SecondName,
		LastName,
		DateOfBirth,
		Experience,
		Education
	);
	pTemp->pNext = nullptr;
	if (CadreList::asList.GetHead() != nullptr) {
		CadreList::asList.GetTail()->pNext = pTemp;
		CadreList::asList.SetTail(pTemp);
	} else {
		CadreList::asList.SetHead(pTemp);
		CadreList::asList.SetTail(pTemp);
	}
}