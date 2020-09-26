#include <string.h>
#include "restaurant.h"


using namespace std;


void Food::FoodChoice()//상호작용을 출력할 함수
{
    cout << "원하는 장소를 고르세요" << endl;
    cout << "1.식당" << endl;
    cout << "2.매점" << endl;
    cout << "3.카페" << endl;
    cin >> choice;
    switch (choice)
            case 1:
    {
        cout << "원하는 상품의 번호 입력하세요" << endl;
        cout << "1.곤드레돌솥비빔밥(15,000원)" << endl;
        cout << "2.돈까스(13500원)" << endl;
        cout << "3.크리스피치킨(22000원)" << endl;
        cin >> choice;
        if (choice == 1)
        {
            price = 15000;
            Food::Paycheck(Cus,price);
        }
        else if (choice == 2)
        {
            price = 13500;
            Food::Paycheck(Cus, price);
        }
        else if (choice == 3)
        {
            price = 22000;
            Food::Paycheck(Cus, price);
        }
        break;

            case 2:
            {
                cout << "원하는 상품의 번호 입력하세요" << endl;
                cout << "1.라면세트(10000원)" << endl;
                cout << "2.구운계란(3000원)" << endl;
                cout << "3.떡갈비 소세지(4000원)" << endl;
                cout << "4.탄산음료(2500원)" << endl;
                cin >> choice;
                if (choice == 1)
                {
                    price = 10000;
                    Food::Paycheck(Cus, price);
                }
                else if (choice == 2)
                {
                    price = 3000;
                    Food::Paycheck(Cus, price);
                }
                else if (choice == 3)
                {
                    price = 4000;
                    Food::Paycheck(Cus, price);
                }
                else if (choice == 4)
                {
                    price = 2500;
                    Food::Paycheck(Cus, price);
                }
                break;
            }

            case 3:
            {
                cout << "원하는 상품의 번호을 입력하세요" << endl;
                cout << "1.커피(4000원)" << endl;
                cout << "2.식혜(2500원)" << endl;
                cout << "3.아이스티(3000원)" << endl;
                cin >> choice;
                if (choice == 1)
                {
                    price = 4000;
                    Food::Paycheck(Cus, price);
                }
                else if (choice == 2)
                {
                    price = 2500;
                    Food::Paycheck(Cus, price);
                }
                else if (choice == 3)
                {
                    price = 3000;
                    Food::Paycheck(Cus, price);
                }
                break;
            }
    }
}
void Food::Paycheck(Customer & Cus,int price)
{
    Cus.Money(price);  
}