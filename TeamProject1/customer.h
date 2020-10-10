#ifndef __CUS_
#define __CUS_

class Customer
{
private:
	int MyHeight;
	int MyWeight;
	int Pay;
	int Num;
	bool MyTube, Free;
public:
	void Basic(int height, int weight);
	void Ticket(int num);
	void CustomerState();
	void Money(int money);
	void Exit();
};
#endif