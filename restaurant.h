#ifndef __RESTAURANT_H__
#define __RESTAURANT_H__
#include <iostream>
#include "Customer.h"

class Food
{
private:
    int choice;
    int price;
    Customer Cus;

public:
    void FoodChoice();//��ȣ�ۿ����+�޴�����+�����ý����Լ��������� �Լ�
    void Paycheck(Customer& Cus,int price);
};

#endif