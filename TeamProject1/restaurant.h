#ifndef __RESTAURANT_H__
#define __RESTAURANT_H__
#include <iostream>
#include "Customer.h"

class Food
{
private:
    int choice;
    int price;
    

public:
    int FoodChoice(int num);//��ȣ�ۿ����+�޴�����+�����ý����Լ��������� �Լ�
    void Foodplacelist(void);

};

#endif