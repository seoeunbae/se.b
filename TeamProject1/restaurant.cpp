#include <string.h>
#include "restaurant.h"


using namespace std;


void Food::Foodplacelist(void)
{
    cout << "���ϴ� ��Ҹ� ������" << endl;
    cout << "1.�Ĵ�" << endl;
    cout << "2.����" << endl;
    cout << "3.ī��" << endl << endl;
}

int Food::FoodChoice(int num)//��ȣ�ۿ��� ����� �Լ�
{
    choice = num;
    switch (choice)
    {
    case 1:
    {
        cout << "���ϴ� ��ǰ�� ��ȣ �Է��ϼ���" << endl;
        cout << "1.��巹���ܺ����(15,000��)" << endl;
        cout << "2.���(13500��)" << endl;
        cout << "3.ũ������ġŲ(22000��)" << endl << endl;
        cin >> choice;

        if (choice == 1)
        {
            price = 15000;
            return price;
        }
        else if (choice == 2)
        {
            price = 13500;
            return price;
        }
        else if (choice == 3)
        {
            price = 22000;
            return price;
        }
        break;
    }
    case 2:
    {
        cout << "���ϴ� ��ǰ�� ��ȣ �Է��ϼ���" << endl;
        cout << "1.��鼼Ʈ(10000��)" << endl;
        cout << "2.������(3000��)" << endl;
        cout << "3.������ �Ҽ���(4000��)" << endl;
        cout << "4.ź������(2500��)" << endl << endl;
        cin >> choice;
        if (choice == 1)
        {
            price = 10000;
            return price;
        }
        else if (choice == 2)
        {
            price = 3000;
            return price;
        }
        else if (choice == 3)
        {
            price = 4000;
            return price;
        }
        else if (choice == 4)
        {
            price = 2500;
            return price;
        }
        break;
    }

    case 3:
    {
        cout << "���ϴ� ��ǰ�� ��ȣ�� �Է��ϼ���" << endl;
        cout << "1.Ŀ��(4000��)" << endl;
        cout << "2.����(2500��)" << endl;
        cout << "3.���̽�Ƽ(3000��)" << endl << endl;
        cin >> choice;
        if (choice == 1)
        {
            price = 4000;
            return price;
        }
        else if (choice == 2)
        {
            price = 2500;
            return price;
        }
        else if (choice == 3)
        {
            price = 3000;
            return price;
        }
        break;
    }
    }
}