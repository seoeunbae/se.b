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
	cout << "������ �� : " << Pay << endl;
	cout << "���̱ⱸ �̿� Ƚ��" << Num << endl << endl;
}
void Customer::Exit()
{
	cout << "���� �ݾ� : " << Pay << endl;
	cout << "���� �ϼ̽��ϴ�." << endl;

}