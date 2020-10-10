#include<iostream>
#include "Customer.h"
#include "restaurant.h"
#include "Ticketoffice.h"
#include "Pool.h"

using namespace std;
//1.키,몸무게 정보입력2.티켓팅3.티켓정보저장4.선택지

int main(void)
{
    int price, num, choice, height, weight;

    enum
    {
        POOL = 1, RESTAURANT, STATE, EXIT
    };
    price = 0;
    cout << "신장을 입력해주세요 : ";
    cin >> height;
    cout << "몸무게를 입력해주세요 : ";
    cin >> weight;
    Customer Cus;
    Pool pool;
    Cus.Basic(height, weight);                     //각 손님, 수영장함수에 손님정보입력
    pool.Basic(height, weight);
    Food food;
    TicketOffice ticketoffice;
    ticketoffice.Ticketlist();                     //티켓팅을 위한 선택지출력
    cin >> choice;
    price = ticketoffice.TicketingPrice(choice);   //티켓팅
    Cus.Money(price);                            //티켓가격정보손님에 입력
    num = ticketoffice.TicketingCount(choice);   //위에 선택한 걸로
    Cus.Ticket(num);                             //기구이용횟수손님에 입력
    while (1)
    {
        cout << "다음 장소를 고르세요.(단,퇴장하시려면 매표소로 가십시오)" << endl;
        cout << "1.수영장" << endl;
        cout << "2.식당" << endl;
        cout << "3.상태" << endl;
        cout << "4.퇴장" << endl << endl;
        cin >> choice;
        switch (choice)
        {
        case POOL:
        {
            num = pool.PoolChoice(num);       //놀이기구선택
            Cus.Ticket(num);                  //남은횟수차감
            break;
        }
        case RESTAURANT:
        {
            food.Foodplacelist();             //식당,매점,카페중에 선택
            cin >> choice;
            price = food.FoodChoice(choice);  //음식선택
            Cus.Money(price);                 //손님 함수
            break;
        }
        case STATE:
        {
            Cus.CustomerState();   //현재금액과남은이용횟수출력
            break;
        }
        case EXIT:
        {
            Cus.Exit();   //결제+퇴장
            break;
        }

        default: {}
        }

    }
    return 0;
}