#include<stdio.h>

struct Demo
{
    int i;    //4
    float f;  //4
    double d; //8
    // Total memory allocation =   16

};

union Hello
{
    int i;     //4
    float f;   //4
    double d;  //8
    // Total Memory aloocation = 8 bytes

};

int main()
{
   struct Demo obj1;
   union Hello obj2;
   printf("size of structure :%d\n", sizeof(obj1));
   printf("size of union :%d\n", sizeof(obj2));

   return 0;
}