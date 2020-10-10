#pragma once
#ifndef __TicketOffice__
#define __TicketOffice__
#include <iostream>
#include "Customer.h"


class TicketOffice
{
private:
	int price;
	int ticketnum;
	int rent;
	bool right;
	int count;
	bool tube;

public:
	void Ticketlist(void);
	int TicketingPrice(int num);
	int TicketingCount(int num);
};

#endif