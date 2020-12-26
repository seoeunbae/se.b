#include <iostream>
using namespace std;
/*
int& RefRetFuncOne(int& ref)
{
	ref++;
	return ref;//계산 결과를 변수인 num1에 다시넣는다.->num1=2
}

int main(void)
{
	int num1 = 1;
	int& num2 = RefRetFuncOne(num1);//num2=num1

	num1++;//num1=2
	num2++;// =RefRetFuncOne(num1)++ num2=num1=3(함수안에서3으로출력)++;
	cout << "num1: " << num1 << endl;
	cout << "num2: " << num2 << endl;
	return 0;
}


int& RefRetFuncOne(int& ref)
{
	ref++;
	return ref;
}

int main(void)
{
	int num1 = 1;
	int num2 = RefRetFuncOne(num1);

	num1 +=1; //num1=2
	num2 +=100;//num1=3,num2=3+100
	cout << "num1: " << num1 << endl;
	cout << "num2: " << num2 << endl;
	return 0;

}

문제2-2
int main(void)
{
	const int num = 12;
	const int & ref = num;
	cout << "num: " << ref << endl;
	return 0;
}


#include <string.h>
#include <stdlib.h>

char* MakeStrAdr(int len)
{
	char* str = (char*)malloc(sizeof(char) * len);
	return str;
}

int main(void)
{
	char* str = MakeStrAdr(20);
	strcpy(str, "I am so happy~"); 
	cout << str << endl;
	free(str);
	return 0;
}


char* MakeStrAdr(int len)
{
	// char* str = (char*)malloc(sizeof(char) * len);
	char* str = new char[len];
	return str;
}

int main(void)
{
	char * str = MakeStrAdr(20);
	strcpy(str, "I am so happy~");//[동일오류]
	cout << str << endl;
	//free(str);
	delete []str;
	return 0;
}


class simple
{
public:
	simple()
	{
		cout << "I'm simple contructor!" << endl;
	}
};

int main(void)
{
	cout << "case 1: ";
	simple* sp1 = new simple;

	cout << "case2: ";
	simple* sp2 = (simple*)malloc(sizeof(simple) * 1);

	cout << endl << "end of main" << endl;
	delete sp1;
	free(sp2);
	return 0;
}

문제 02 - 3  //c언어끝까지 안배워서 모르겠음.(typedef,xpos,point...etc.)
int Point & PntAdder(const Point & p1, const Point & p2);

typedef struct __Point
{
	int xpos;
	int ypos;
}Point;

int main(void)
{
	Point* pptr1 = new Point;
	pptr1->xpos = 3;
	pptr1->ypos = 30;

	Point* pptr2 = new Point;
	pptr2->xpos = 30;
	pptr2->ypos = 7;

	Point& pref = PntAdder(*pptr1, *pptr2);
	cout << "[" << pref.xpos << ", " << pref.ypos << "]" << endl;
	delete pptr1;
	delete pptr2;
	delete& pref;

	return 0;
}

Point & PntAdder(const Point& p1, const Point& p2)
{
	Point * pptr = new Point;
	pptr->xpos = p1.xpos + p2.xpos;
	pptr->ypos = p1.ypos + p2.ypos;
	return *pptr;
}

#include <cmath>
#include <cstdio>
#include <cstring>

using namespace std;

int main(void)
{
	char str1[]="Result";
	char str2[30];

	strcpy(str2, str1);
	printf("%s: %f \n", str1, sin(0.14));
	printf("%s: %f \n", str2, abs(-1.25));
	return 0;
}

문제 2-4-1)
//이해감
#include <cstring>

int main(void)
{
	const char* str1 = "ABC 123 ";
	const char* str2 = "DEF 456 ";
	char str3[50];
	cout << strlen(str1) << endl;
	strcpy_s(str3, str1);
	strcat_s(str3, str2);
	cout << str3 << endl;

	if (strcmp(str1, str2) == 0)
		cout << "문자열이같다." << endl;
	else
		cout << "문자열이 다르다." << endl;
	return 0;
}

문제 2-4-2)


#include <ctime>
#include <cstdlib>

int main(void)
{
	srand(time(NULL));  //seedrandom time(null)은 1970/01/01부터지금까지의 초... time(null)을 통해서 컴파일할때마다 새로운 랜덤이 가능함.(없으면, 매번동일한 숫자출력됨)
	for (int i = 0; i < 5; i++)
		printf("Random number #%d: %d\n", i, rand() % 100);
	return 0;
}
*/

