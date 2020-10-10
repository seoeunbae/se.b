#ifndef Pool_hpp
#define Pool_hpp
#include <iostream>

#include <stdio.h>
using namespace std;

class Pool
{
private:
    int choice;
    int numRestRiding;
    int cusHeight;
    int cusWeight;


public:
    int PoolChoice(int num);
    int NumChange(int num);
    void Basic(int a, int b);


};


#endif 