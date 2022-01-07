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
	uint16_t num;
	std::string sendDate;
	std::string retDate;
	std::string country;
	std::string city;
	std::string extraStuff;
	std::string price;
	std::string amount;
};