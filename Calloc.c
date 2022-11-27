#include<stdio.h>
#include<stdlib.h>

int main()
{
    int *p = NULL;
    int size = 0;

    printf("enter the Size\n");
    scanf("%d", &size);

    p = (int *)malloc(sizeof(int) * size);  //single parameter.
    printf("%d\n", p);
    p = (int *)calloc(sizeof(int) , size);  //two parameters.
    printf("%d\n", p);

    free(p);

    printf("%d\n", p);

    
    return 0;
}
