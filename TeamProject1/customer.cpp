#include <iostream>
#include "Customer.h"

using namespace std;

void Customer::Basic(int height, int weight)
{
	MyHeight = height;
	MyWeight = weight;
	Pay = 0;
}
void Customer::Money(int money)
{
	Pay += money;
}
void Customer::Ticket(int num)
{
	Num = num;
}
void Customer::CustomerState()
{
	cout << "³»¾ßÇÒ µ· : " << Pay << endl;
	cout << "³îÀÌ±â±¸ ÀÌ¿ë È½¼ö" << Num << endl << endl;
}
void Customer::Exit()
{
	cout << "°áÁ¦ ±Ý¾× : " << Pay << endl;
	cout << "ÅðÀå ÇÏ¼Ì½À´Ï´Ù." << endl;

}