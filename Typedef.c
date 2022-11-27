#include<stdio.h>
//typedef   Juna_Naav   Navin_Naav
typedef int INTEGER;
typedef unsigned long int ULONG;

struct Demo
{
    int A;
    int B;
}

typedef struct Demo DEMO;
typedef struct Demo * PDEMO;
int main()
{
    INTEGER I = 10;   //int i = 10;

    ULONG J = 21;    //unsigned long int j = 21;

    DEMO obj;      //struct Demo obj;

    PDEMO ptr = &obj;   //struct Demo * ptr = &obj;
}