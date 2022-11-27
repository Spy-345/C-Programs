#include<stdio.h>
#include<stdlib.h>
struct Demo
{
    int i;
    float f;

};

int main()
{
    int size = 0;
    int *Arr = NULL;
    
    struct Demo obj;   //(local Variable)Static memory allocation

    struct Demo *ptr = NULL;
    ptr = (struct Demo *)malloc(sizeof(struct Demo));   //Dynamic memory allocation

    obj.i = 11;
    obj.f = 9.8;

    ptr->i = 11;
    ptr->f = 4.5;

    printf("%d\n", ptr->i);
    printf("%d\n", obj.i);

    printf("Enter size of Array:\n");
    scanf("%d", &size);
    printf("%d\n", sizeof(int));
    Arr = (int *)malloc(sizeof(int) * size); //sizeof(Arr) - 8, Arr - 23245345(any adddress on RAM) //Arr - Holds address of memory allocated by malloc at any perticular location. //Dynamic Memory allocation
    printf("%d\n", Arr);
    //Use the memory

    free(Arr); //free - Arr
    free(ptr); //free - ptr

    return 0;
}