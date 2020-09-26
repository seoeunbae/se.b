#include<iostream>
#include "Customer.h"
#include "restaurant.h"
#include "Ticketoffice.h"
#include "Pool.h"

using namespace std;


int main(void)
{
    int choice, height, weight;
    bool tube;
    enum
    {
        TICKETOFFICE = 1, POOL, RESTAURANT, STATE
    };
    cout << "키 : ";
    cin >> height;
    cout << "몸무게 : ";
    cin >> weight;
    Customer Cus;
    Cus.Basic(height, weight);
    Food food;
    TicketOffice ticketoffice;
    Pool pool;

    while (1)
    {
        cout << "다음 장소를 고르세요.(단,퇴장하시려면 매표소로 가십시오)" << endl;
        cout << "1.매표소" << endl;
        cout << "2.수영장" << endl;
        cout << "3.식당" << endl;
        cout << "4.상태" << endl;
        cin >> choice;
        switch (choice)
        {
        case TICKETOFFICE:
            ticketoffice.list();//상호작용출력하는함수(1.대여소,2.퇴장,3.매표소)
            //1.매표소->티켓안내->선택->가격정산
            //2.대여소->튜브,구명조끼안내->선택->가격정산
            //3.퇴장->가격정산출력->종료
            //break;
        case POOL:
            cout << "구명조끼소지여부를 0(없다),1(있다)로 입력해주세요" << endl;
            cin >> choice;
            pool.LifeGuard(choice);
            pool.HightWeight(height, weight);
            pool.PoolChoice();
            //ShowRidingResult();
            break;
        case RESTAURANT:
            food.FoodChoice();
            break;
        case STATE:
            Cus.CustomerState();
            break;
        }
        return 0;

    }
}