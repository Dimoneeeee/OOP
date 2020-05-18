#pragma once
#include <iostream>
#include <string>

class Cadre {	
	protected:
		std::string	FirstName;
		std::string	SecondName;	
		std::string	LastName;
		float		DateOfBirth;			
	public:
		Cadre();
		Cadre (
			std::string, 
			std::string, 
			std::string,
			float
		);
		Cadre(const Cadre&);
		~Cadre(); 
		virtual void Show() = 0;
		virtual void Add()	= 0;

};

Cadre::Cadre() { 
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