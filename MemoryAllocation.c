#include<stdio.h>
#include<stdlib.h>

int main()
{

    int Arr[5];     //Static Memory allocation.

    int *p = NULL;    //Null pointer
    p = (int *)malloc(sizeof(int) * 5);  //(int *) -> typecasting for dividing the memory

    //Use of memory 

    free(p);

    //code


    return 0; //memory of Arr get's deallocated at this point.
}