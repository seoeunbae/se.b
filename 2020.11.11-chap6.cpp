// 2020.11.11-chap6.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
using namespace std;
/*
class SoSimple
{
private:
    int num;
public:
    SoSimple(int n) : num(n)
    { }
    SoSimple& AddNum(int n)
    {
        num += n;
        return*this;
    }
    void ShowData() const
    {
        cout << "num: " << num << endl;
    }
};

int main(void)
{
    const SoSimple obj(7);
    //obj.AddNum(20);
    obj.ShowData();
    return 0;
}

class SoSimple
{
private:
    int num;
public:
    SoSimple(int n) : num(n)
    {
    }

    SoSimple& AddNum(int n)
    {
        num += n;
        return *this;
    }
    void SimpleFunc()
    {
        cout << "SimpleFunc: " << num << endl;
    }
    void SimpleFunc() const
    {
        cout << "const SimpleFunc: " << num << endl;
    }
};

void YourFunc(const SoSimple& obj)
{
    obj.SimpleFunc();
}
int main(void)
{
    SoSimple obj1(2);
    const SoSimple obj2(7);

    obj1.SimpleFunc();
    obj2.SimpleFunc();

    YourFunc(obj1);
    YourFunc(obj2);
    return 0;
}
*/
#include <cstring>


class Girl;

class Boy
{
private:
    int height;
    friend class Girl;
public:
    Boy(int len) : height(len)
    { }
    void ShowYourFriendInfo(Girl& frn);
};

class Girl
{
private:
    char phNum[20];
public:
    Girl(char* num)
    {
        strcpy(phNum, num);
    }
    void ShowYourFriendInfo(Boy& frn);
    friend class Boy;
};

void Boy::ShowYourFriendInfo(Girl& frn)
{
    cout << "Her phone number: " << frn.phNum << endl;
}

void Girl::ShowYourFriendInfo(Boy& frn)
{
    cout << "His height: " << frn.height << endl;
}
int main(void)
{
    Boy boy(170);
    Girl girl("010-1234-5678");
    boy.ShowYourFriendInfo(girl);
    girl.ShowYourFriendInfo(boy);
    return 0;

}

class Point;

class PointOP
{
private:
    int opcnt;
public:
    PointOP() :opcnt(0)
    { }

    Point PointAdd(const Point&, const Point&);
    Point PointSub(const Point&, const Point&);
    ~PointOP()
    {
        cout << "Operation times" << opcnt << endl;
    }
};

class Point
{
private:
    int x;
    int y;
public:
    Point(const int &xpos, onst int &ypos) : x(xpos), y(ypos)
    { }
    friend Point PointOP::PointAdd(const Point&, const Point&);
    friend Point PointOP::PointSub(const Point&, const Point&);
    friend void ShowPointPos(const Point&);
};

Point PointOP::PointAdd(const Point& pnt1, const Point& pnt2)
{
    opcnt++;
    return Point(pnt1.x + pnt2.x, pnt1.y + pnt2.y);
}
Point PointOP::PointSub(const Point& pnt1, const Point& pnt2)
{
    opcnt++;
    return Point(pnt1.x - pnt2.x, pnt1.y - pnt2.y);
}

int main(void)
{
    Point pos1(1, 2);
    Point pos2(2, 4);
    PointOP op;

    ShowPointPos(op.PointAdd(pos1, pos2));
    ShowPointPos(op.PointSub(pos2, pos1));
    return 0;
}

void ShowPointPos(const Point& pos)
{
    cout << "x: " << pos.x << ",";
    cout << "y: " << pos.y << endl;
}

void Counter()
{
    static int cnt;
    cnt++;
    cout << "Current cnt" << cnt << endl;

}

int main(void)
{
    for (int i = 0; i < 10; i++)
        Counter();
    return 0;
}

int simObjCnt = 0;
int cmxObjCnt = 0;

class SoSimple
{
public:
    SoSimple()
    {
        simObjCnt++;
        cout << simObjCnt << "번째 SoSimple 객체" < endl;
    }
};

class SoComplex
{
public:
    SoComplex()
    {
        cmxObjCnt++;
        cout << cmxObjCnt << "번쨰 SoCOmplex객체" << endl;
    }
    SoComplex(SoCOmplex& copy)
    {
        cmxObjCnt++;
        cout << cmxObjCnt << "번쨰 SoComplex객체" << endl;
    }
};

int main(void)
{
    SoSimple sim1;
    SoSimple sim2;

    SoComplex com1;
    SoComplex com2 = com1;
    SoComplex();
    return 0;
}

class SoSimple
{
private:
    static int simOBjCnt;
public:
    SoSimple()
    {
        simObjCnt++;
        cout << simObjCnt << "번쨰 SoSimple객체" << endl;
    }
};
int SoSimple::simOBjCnt = 0;

class SoComplex
{
private:
    static int cmxObjXnt;
public:
    SoComplex()
    {
        cmxObjCnt++;
        cout << cmxObjCnt << "번째 SoComplex객체" << endl;
    }
    SoComplex(SoComplex& copy)
    {
        cmxObjCnt++;
        cout << cmxObjCnt << "번째 쏘컴플렉스객체" << endl;

    }
};
int SoComplex::cmxObjCnt = 0;

int m