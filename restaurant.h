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
    void FoodChoice();//상호작용출력+메뉴선택+결제시스템함수를포함한 함수
    void Paycheck(Customer& Cus,int price);
};

#endif