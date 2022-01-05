#pragma once
#include <iostream>
#include "client.h"

class Employee {
public:
	std::string surname;
	std::string name;
	std::string pat;
};

class Ticket {
public:
	int num;
	std::string sendDate;
	std::string retDate;
	std::string country;
	std::string city;
	std::string extraStuff;
	float price;
	int amount;
};