#include<stdio.h>
#include<stdbool.h>

bool CheckEven(int iNum)
{
   if((iNum % 2) == 0)
   {
      return true;
   }
   else
   {
     return false;
   }

}

int main()
{

int iValue = 0;
bool bRet = false;

printf("Enter Your Number:\n");
scanf("%d", &iValue);

bRet = CheckEven(iValue);
if (bRet == true)
{
  printf("It is Even Number.\n");
}
else
{
  printf("It is Odd Number.\n");
}
printf("Size of bool is:\n", sizeof(bRet));

  return 0;
}
