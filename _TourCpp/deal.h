#pragma once
#include <iostream>
#include "ticket.h"

class Deal {
public:
	Employee * employee;
	Client * client;
	Ticket * ticket;
	std::string sellDate;
};