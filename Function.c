#include<stdio.h>

int Addition(int iValue1, int iValue2)  //Dukan(shop)
{
    int iOutput = 0;

    iOutput = iValue1 + iValue2;

    return iOutput;
}


int main()  //Ghar(home)
{
    int iNum1 = 10;

    int iNum2 = 10;

    int iAns = 0;

    iAns = Addition(iNum1, iNum2);

    printf("Addition is : %d\n",iAns);


    return 0;
}