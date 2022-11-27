#include<stdio.h>
#include<stdlib.h>

int main()
{
    int *p = NULL;

    p = (int *)malloc(10 * sizeof(int));

    //Use of memory

    p = (int *)realloc(p, 15 * sizeof(int));
    printf("%d\n", p);

    //Use of memory

    free(p);


    return 0;
}