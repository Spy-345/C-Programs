#include<stdio.h>

int main()
{
    
    int no = 10;
    int X = 0;

    X = no++; // X = No + 1 : Post increment
    X = ++no; // X = No + 1 : pre Increment
    X = no--; // X = no - 1 :post decrement
    X = --no; // X = no - 1 : pre decrement

    return 0;
}