#include "Pool.h"
#include <iostream>
#include "Customer.h"
using namespace std;



int Pool::NumChange(int num)
{
    numRestRiding = num;

    return numRestRiding;
}

void Pool::Basic(int a, int b)
{
    cusWeight = b;
    cusHeight = a;
}


int Pool::PoolChoice(int num)
{
    numRestRiding = num;
    cout << "����ϴ� ���̱ⱸ�� �������ּ���." << endl;
    cout << "1.���ͺ����" << endl;
    cout << "2.�θ޶���" << endl;
    cout << "3.��������̵�" << endl << endl;
    cin >> choice;

    switch (choice) {
    case 1:

        if (numRestRiding <= 0)
        {
            cout << "�̿���� �����Ǿ����ϴ�." << endl;
            return numRestRiding;

            break;
        }

        cout << "���ͺ���͸� �����ϼ̽��ϴ�." << endl;
        if (cusHeight < 130 || cusWeight>100) {
            cout << "Ű�� 130�̸��̽ñ⳪ �����԰� 100kg �̻��̽� ���� ž���� �Ұ��մϴ�. " << endl;
            return numRestRiding;
            break;
        }
        else
        {
            numRestRiding--;

            for (int i = 0; i < 4; i++) {
                cout << "���ͺ���͸� Ÿ�����Դϴ�." << endl;
            };
            cout << "���ͺ���͸� ��̰� �����ϴ�." << endl << endl;
        }
        return numRestRiding;
        break;

    case 2:

        if (numRestRiding == 0)
        {
            cout << "�̿���� �����Ǿ����ϴ�." << endl;
            return numRestRiding;
            break;
        }

        cout << "�θŶ��� �����ϼ̽��ϴ�." << endl;
        if (cusHeight < 130 || cusWeight>100) {
            cout << "Ű�� 130�̸��̽ñ⳪ �����԰� 100kg �̻��̽� ���� ž���� �Ұ��մϴ�. " << endl;
            return numRestRiding;
            break;
        }
        else
        {
            numRestRiding--;

            for (int i = 0; i < 4; i++) {
                cout << "�θ޶��� Ÿ�����Դϴ�." << endl;
            };
            cout << "�θ޶��� ��̰� �����ϴ�." << endl << endl;
        }
        return numRestRiding;
        break;

    case 3:

        if (numRestRiding == 0)
        {
            cout << "�̿���� �����Ǿ����ϴ�." << endl;
            return numRestRiding;
            break;
        }

        cout << "���� ����̵��� �����ϼ̽��ϴ�." << endl;
        if (cusHeight < 130 || cusWeight>100) {
            cout << "Ű�� 130�̸��̽ñ⳪ �����԰� 100kg �̻��̽� ���� ž���� �Ұ��մϴ�. " << endl;
            return numRestRiding;
            break;
        }
        else
        {
            numRestRiding--;

            for (int i = 0; i < 4; i++) {
                cout << "���� ����̵��� Ÿ�����Դϴ�." << endl;
            };
            cout << "���� ����̵��� ��̰� �����ϴ�." << endl << endl;
        }
        return numRestRiding;
        break;
    }

    return 0;

};