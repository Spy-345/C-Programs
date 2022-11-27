#include<stdio.h>

struct Demo
{
    int no;
    float f;
};

int main()
{

    struct Demo Arr[3];

    Arr[0].no = 11;
    Arr[0].f = 10.5;

    Arr[1].no = 21;
    Arr[1].f  = 21.5;

    Arr[2].no = 51;
    Arr[2].f  = 51.5;

    printf("size of the whole array:%d\n", sizeof(Arr));
    printf("size of the Sruct Demo :%d\n", sizeof(struct Demo));
    printf("value of first structure element in array :%d\n", Arr[0].no);


    return 0;

}