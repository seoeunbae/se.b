#include <iostream>
#include "TicketOffice.h"
#include "Customer.h"
using namespace std;

void TicketOffice::Ticketlist(void)
{
	cout << "1. �����̿��" << "[35,000��]" << endl;
	cout << "2. ���̱ⱸ 3ȸ �̿��" << "[30,000��]" << endl;
	cout << "3. ���̱ⱸ 2ȸ �̿��" << "[27,500��]" << endl;
	cout << "4. ���̱ⱸ 1ȸ �̿��" << "[25,000��]" << endl;
	cout << "5. ������ �̿��" << "[20,000��]" << "<���̱ⱸ �̿�Ұ�>" << endl;
	cout << "������ Ƽ���� ��ȣ�� �Է��Ͻʽÿ�." << endl << endl;
}

int TicketOffice::TicketingPrice(int num)
{
	int ticketnum = num;
	switch (ticketnum)
	{
	case 1:
	{
		price = 35000;
		return price;
		break;
	}

	case 2:
	{
		price = 30000;
		return price;
		break;
	}

	case 3:
	{
		price = 27500;
		return price;
		break;
	}

	case 4:
	{
		price = 25000;
		return price;
		break;
	}

	case 5:
	{
		price = 20000;
		return price;
		break;
	}

	default: {}

	}

}

int TicketOffice::TicketingCount(int num)
{
	int ticketnum = num;
	switch (ticketnum)
	{
	case 1:
	{
		count = 9999999;
		break;
	}
	case 2:
	{
		count = 3;
		break;
	}

	case 3:
	{
		count = 2;
		break;
	}

	case 4:
	{
		count = 1;
		break;
	}

	case 5:
	{
		count = 0;
		break;
	}

	default: {}

	}
	return count;
}