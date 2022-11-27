#include<stdio.h>
#pragma pack(1)

struct Demo
{
    int no;
    struct Demo *ptr;
};

int main()
{
    struct Demo obj1;
    struct Demo obj2;
    struct Demo obj3;

    obj1.no = 11;
    obj2.no = 21;
    obj3.no = 31;

    obj1.ptr = &obj2;
    obj2.ptr = &obj3;
    obj3.ptr = &obj1;
    printf("size eof object:%d\n",sizeof(obj1));
    printf("Value of no in obj1 :%d\n",obj1.no);
    printf("Value of ptr in obj1 :%d\n",obj1.ptr);
    printf("Value of no in obj2 :%d\n",obj2.no);
    printf("Value of ptr in obj2 :%d\n",obj2.ptr);
    printf("Value of no in obj3 :%d\n",obj3.no);
    printf("Value of ptr in obj3 :%d\n",obj3.ptr);

    return 0;
}