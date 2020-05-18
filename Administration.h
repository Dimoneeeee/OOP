#pragma once
#include <iostream>
#include <string>
#include "Cadre.h"
#include "CadreList.h"

class Administration : public Cadre {	
	protected:
		std::string Post;
	public:
		Administration();
		Administration (
			std::string, 
			std::string, 
			std::string,
			float, 
			std::string
		);
		Administration(const Administration&);
		~Administration();
		void Show();
		void Add();
};

Administration::Administration() { 
	Post = "UndefinedPost";
}
Administration::Administration(
	std::string	_FirstName,
	std::string	_SecondName, 
	std::string	_LastName,
	float		_DateOfBirth, 
	std::string	_Post
) : Cadre (
	_FirstName,
	_SecondName,
	_LastName,
	_DateOfBirth
) {
	Post = _Post;
}
Administration::Administration(const Administration& rAdministration) { }
Administration::~Administration() { }

void Administration::Show() {
	std::cout << "Administration:\nFirstName: " << Cadre::FirstName << "\nSecondName: " << Cadre::SecondName << "\nLastName: " << Cadre::LastName << "\nDate of birth: "<< Cadre::DateOfBirth << "\nPost: "<< this->Post << std::endl << std::endl;
}

void Administration::Add() {
	list *pTemp = new list;
	pTemp->pData = new Administration(
		FirstName,
		SecondName,
		LastName,
		DateOfBirth,
		Post
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