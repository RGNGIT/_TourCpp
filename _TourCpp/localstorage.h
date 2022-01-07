#include "vector"
#include "client.h"
#include "ticket.h"
#include "deal.h"

uint16_t ticketNum = 0;

std::vector<Deal*> deals;
std::vector<Client*> clients;
std::vector<Ticket*> tickets;
std::vector<Employee*> employees;