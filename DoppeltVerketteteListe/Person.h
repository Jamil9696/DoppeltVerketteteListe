#pragma once
#include <string>
#include <iostream>

class Person
{
public:
	Person(std::string _name, int _alter)
		:
		name(_name),
		alter(_alter)
	{
	}
	Person(const Person* ptr)
		:
		name(ptr->getName()),
		alter(ptr->getAlter())
	{
	}

	Person operator=(const Person& other) {
		alter = other.alter;
		name = other.name;
		return other;
	}
	Person* operator=(Person* other) {
		alter = other->alter;
		name = other->name;
		return other;
	}

	/*
	friend bool operator<(const Person& rValue, const Person& lValue) {
		return rValue.alter < lValue.alter;
	}
	friend bool operator>(const Person& rValue, const Person& lValue) {
		return rValue.alter > lValue.alter;
	}
	friend bool operator<=(const Person& rValue, const Person& lValue) {
		return rValue.alter <= lValue.alter;
	}

	friend bool operator>=(const Person& rValue, const Person& lValue) {
		return rValue.alter >= lValue.alter;
	}
	
	*/

	friend bool operator<(const Person& rValue, const Person& lValue) {
		return rValue.name < lValue.name;
	}

	friend bool operator>(const Person& rValue, const Person& lValue) {
		return rValue.name > lValue.name;
	}

	friend bool operator<=(const Person& rValue, const Person& lValue) {
		return rValue.name <= lValue.name;
	}

	friend bool operator>=(const Person& rValue, const Person& lValue) {
		return rValue.name >= lValue.name;
	}

	bool operator==(const Person& other) {
		return name == other.name && alter == other.alter;
	}

	bool operator!=(const Person& other) {
		return name != other.name && alter != other.alter;
	}


	std::string getName() const {
		return name;
	}

	int getAlter() const {
		return alter;
	}

	void print() {
		std::cout << name << "\n";

	}
	~Person() {

	}

private:
	std::string name;
	int alter;
};

