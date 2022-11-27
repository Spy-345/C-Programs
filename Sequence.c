#include<stdio.h>
int Addition(int iNo1, int iNo2) //Defination of the function, Which is user defined.
{
   int iAns = 0;
   iAns = iNo1 + iNo2;
   return iAns;
}

int main()     //Defination of the function, Which is User Defined
{
    int iValue1 = 0;
    int iValue2 = 0;
    int iRet = 0;

    printf("Enter First Number:\n");
    scanf("%d", &iValue1);

    printf("Enter Second Number:\n");
    scanf("%d", &iValue2);

    iRet = Addition(iValue1, iValue2);
    printf("Addition of Numbers is :%d\n", iRet);

    return 0;
}
