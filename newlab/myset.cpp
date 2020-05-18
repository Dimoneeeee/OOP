#include "myset.h"
#include <iostream>

myset::myset(const myset& mset) {
	try {
		value = new char[mset.count];
		count = mset.count;
		for (int i = 0; i < count; i++)
			value[i] = mset.value[i];
	}
	catch (std::bad_alloc e)
	{
		std::cout << e.what() << std::endl;
	}
}

void myset::input(int size) {
	char key;
	for (int k = 0; k < size; k++) {
		std::cout << "Enter element #" << k << ": ";
		std::cin >> key;
		this->push(key);
	}
}

void myset::print() {
	for (int i = 0; i < count; i++)
		std::cout << value[i] << "\t";
	std::cout << std::endl;
	std::cout << "Print Done.\n" << std::endl;
}

bool myset::subset(const char item) {
	for (int i = 0; i < count; i++) {
		if (value[i] == item)
			return 1;
	}
	return 0;
}

bool myset::subset(const myset& mset) {
	bool find = false;
	if (count >= mset.count) {
		for (int i = 0; i < mset.count; i++) {
			for (int k = 0; k < count; k++) {
				if (value[k] == mset.getChar(i)) {
					find = true;
				}
			}
			if (!find)
				return 0;
			find = false;
		}
		return 1;
	}
	else
		return 0;
}

bool myset::isEqual(const myset& mset) {
	if (count != mset.count)
		return 0;
	for (int i = 0; i < count; i++) {
		if (value[i] != mset.value[i])
			return 0;
	}
	return 1;
}

void myset::push(const char item)
{
	char* p2;
	p2 = value;
	bool isFind = false;

	try {
		if (subset(item))
			return;
		value = new char[count + 1];
		for (int i = 0; i < count; i++)
			value[i] = p2[i];
		for (int i = 0; i < count; i++) {
			if (item < value[i])
			{
				for (int k = count; k > i; k--)
				{
					value[k] = value[k - 1];
				}
				value[i] = item;
				isFind = true;
				break;
			}
		}
		if (!isFind)
			value[count] = item;
		count++;
		if (count > 0)
			delete[] p2;
	}
	catch (std::bad_alloc e) {
		std::cout << e.what() << std::endl;
		value = p2;
	}
}

myset::~myset() {
	if (count > 0)
		delete[] value;
}

void myset::remove(const char item) {
	if (count < 1)
		return;
	if (!subset(item))
		return;
	try {
		char* val2;
		val2 = new char[count - 1];
		for (int i = 0; i < count - 1; i++)
			if (value[i] != item)
				val2[i] = value[i];
			else
			{
				for (int k = i ; k < count - 1; k++)
					val2[k] = value[k + 1];
				break;
			}
		count--;
		if (count > 0)
			delete[] value;
		value = val2;
	}
	catch (std::bad_alloc e)
	{
		std::cout << e.what() << std::endl;
	}
}

myset& myset::operator=(const myset& obj) {
	char* val2;

	try {
		val2 = new char[obj.count];
		if (count > 0)
			delete[] value;
		value = val2;
		count = obj.count;
		for (int i = 0; i < count; i++)
			value[i] = obj.value[i];
	}
	catch (std::bad_alloc e)
	{
		std::cout << e.what() << std::endl;
	}
	return *this;
}

myset& myset::operator-=(const char item) {
	remove(item);
	return *this;
}

myset operator-(const myset& mset, const char item) {
	myset buff(mset);
	buff -= item;
	return buff;
}

bool myset::operator>(const myset& mset) {
	return subset(mset);
}

bool myset::operator!=(const myset& mset) {
	return !isEqual(mset);
}

bool myset::operator==(const myset& mset) {
	return !isEqual(mset);
}