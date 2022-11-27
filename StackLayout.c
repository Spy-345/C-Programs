#include<stdio.h>

int Addition(int No1, int iNo2)
{
    int Ans = 0;
    printf("Inside Addition.\n");

    Ans = No1 + No2;

    return Ans;
}

int main()
{
    int A = 10, B = 11, Ret = 0;

    printf("Inside main.\n");

    Ret = Addition(A, B);

    printf("Addition is : %d\n",Ret);
    return 0;
}