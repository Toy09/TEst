#include <stdlib.h>
#include <stdio.h>
#include <iostream>
#include <string>
using namespace std;

int g1 = 1;
int g2 = 2;

class BasicA{
    public:
    int i1;
    int *ai;
    double *ad;
};

class BasicB{
    public:
        double d1; 
};

class Second{
    public:
    int i2;
    BasicA a2;
    BasicB * bp2;
    public:
        double q2;
    void secondFunc(BasicA basicA, BasicB * basicPB){
        int i =0;
    }
};

class Third{
    public:
        Second second3;
        int i3;
        double* dp3;
        int thirdFunc1(int i3){
            return i3;
        }
};
