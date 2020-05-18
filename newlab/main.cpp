#include <iostream>
#include "myset.h"

int main()
{
	myset set1;
	myset set2;
	myset set3;
	set1.input(2);
	set2.input(2);
	set3.input(2);
	set1.print();
	set2.print();
	set1 = set1 - 'A';
	set2 = set2 - 'B';
	set1.print();
	set2.print();
	if (set1 != set2)
		std::cout << "Sets not equal." << std::endl;
	else
		std::cout << "Sets equal." << std::endl;
	if (set3 > set2)
		std::cout << "Set2 is subset of set3" << std::endl;
	else
		std::cout << "Set2 isn't subset of set3" << std::endl;
	return 0;
}