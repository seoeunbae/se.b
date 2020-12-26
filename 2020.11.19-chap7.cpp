#include <iostream>
#include <cstring>

using namespace std;
/*
class Person
{
private:
	int age;
	char name[50];
public:
	Person(int myage, char* myname) : age(myage)
	{
		strcpy(name, myname);
	}
	void WhatYourName() const
	{
		cout << "My name is " << name << endl;
	}
	void HowOldAreYou() const
	{
		cout << "I'm" << age << "years old" << endl;
	}
};

class UnivStudent : public Person
{
private:
	char major[50];
public:
	UnivStudent(char * myname, int myage, char* mymajor) 
		: Person(myage, myname)
	{
		strcpy(major, mymajor);
	}
	void WhoAreYou() const
	{
		WhatYourName();
		HowOldAreYou();
		cout << "My major is " << major << endl << endl;
	}
};

int main(void)
{
	UnivStudent ustd1("Lee", 22, "Computer eng.");
	ustd1.WhoAreYou();

	UnivStudent ustd2("Yoon", 21, "Electronic eng.");
	ustd2.WhoAreYou();
	return 0;
}

class SoBase
{
private:
	int baseNum;
public:
	SoBase() :baseNum(20)
	{
		cout < "SoBase()" << endl;
	}
	SoBase(int n) : baseNum(n)
	{
		cout << "SoBase(int n)" << endl;
	}
	void ShowBaseData()
	{
		cout << baseNum << endl;
	}
};

class SoDerived : public SoBase
{
private:
	int derivNum;
public:
	SoDerived() :derivNum(30)
	{
		cout << "SoDerived()" << endl;
	}
	SoDerived(int n) : derivNum(n)
	{
		cout << "SoDerived(int n)" << endl;
	}
	SoDerived(int n1, int n2) : SoBase(n1), derivNum(n2)
	{
		cout << "SoDerived(int n1, int n2)" << endl;
	}
	void ShowDerivData()
	{
		ShowBaseData();
		cout << derivNum << endl;
	}
};

int main(void)
{
	cout << "case1....." << endl;
	SoDerived dr1;
	dr1.ShowDerivData();
	cout << "----------------------" << endl;
	cout << "case2....." << endl;
	SoDerived dr2(12);
	dr2.ShowDerivData();
	cout << "-------------------------" << endl;
	SoDerived dr3(23, 24);
	dr3.ShowDerivData();
	return 0;

}

class SoBase;
{
private:
	int baseNum;
public:
	SoBase(int n) : baseNum(n)
	{
		cout << "SOBase(): " << baseNum << endl;
	}
	~SoBase()
	{
		cout << "~SoBase(): " << baseNum << endl;
	}

};

class SoDerived : public SoBase
{
private:
	int drivNum;
public:
	SoDerived(int n) : SoBase (n), derivNum(n}


class Rectangle
{
private:
	int wid;
	int hei;
public:
	Rectangle(int width, int heighth):wid(width), hei(heighth)
	{ }
	void ShowAreaInfo()
	{
		cout << "면적: " << wid * hei << endl;
	}
};

class Square : public Rectangle
{
private:
public:
	Square(int length) : Rectangle(length, length)
	{
		cout << "길이: " << length << endl;
	
	}

};

int main(void)
{
	Rectangle rec(4, 3);
	rec.ShowAreaInfo();

	Square sqr(7);
	sqr.ShowAreaInfo();
	return 0;
}


class Book
{
private:
	char* title;
	char* isbn;
	int price;
public:
	Book(char* name,char *number,int price):price(price)
	{
		this->title = new char[strlen(title) + 1];
		this->isbn = new char[strlen(isbn) + 1];
		strcpy(this->title, title);
		strcpy(this->isbn, isbn);
	}
	void ShowBookInfo()
	{
		cout << "제목: " << title << endl;
		cout << "ISBN: " << isbn  << endl;
		cout << "가격: " << price << endl;
	}
	~Book()
	{
		delete []title;
		delete[]isbn;
	}
};

class Ebook :public Book
{

private:
	char* DRMKey;
public:
	Ebook(char* name, char* number, int price,char * key) : Book(name, number, price)
	{
		DRMKey = key;
	}
	void ShowEbookInfo()
	{
		ShowBookInfo();
		cout << "인증키: " << DRMKey << endl;
	}
	~Ebook()
	{
		delete[]DRMKey;
	}
};

int main(void)
{
	Book book("좋은 C++", "555-12345-890-0", 20000);
	book.ShowBookInfo();
	cout << endl;
	Ebook ebook("좋은 C++ ebook", "555-12345-890-1", 10000, "fdx9w0i8kiw");
	ebook.ShowEbookInfo();
	return 0;
}
*/
class Car
{
private:
	int gasolineGauge;
public:
	Car(int gasolineGauge):gasolineGauge(gasolineGauge)
	{
		cout << "연료: " << gasolineGauge << endl;
	}
	int GetGasGauge()
	{
		return gasolineGauge;
	}
};
class HybridCar : public Car
{
private:
	int electricGauge;
public:
	HybridCar(int electricGauge) : Car(electricGauge)
	{
		cout << "연료: " << electricGauge << endl;
	}
	int GetElecGauge()
	{
		return electricGauge;
	}
};

class HybridWaterCar : public HybridCar
{
private:
	int WaterGauge;
public:
	HybridWaterCar(int WaterGuage) :HybridCar(WaterGauge)
	{
		cout << "연료: " << WaterGuage << endl;
	}
	void ShowCurrentGauge()
	{
		cout << "잔여 가솔린: " << GetGasGauge() << endl;
		cout << "잔여 전기량: " << GetElecGauge() << endl;
		cout << "잔여 워터량: " << WaterGauge << endl;
	}
};

int main(void)
{
	Car car1(100);
	HybridCar car2(85);
	HybridWaterCar car3(73);
	car3.ShowCurrentGauge();
}