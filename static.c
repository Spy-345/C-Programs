#include<stdio.h>

void demo()
{
    auto int A = 10;
    A++; //Increment of value of variable by 1.
    printf("value of A is: %d\n",A);
}

void Hello()
{
    static int B = 11;
    B++;
    printf("value of B is: %d\n",B);
}

int main()
{
    demo();
    demo();
    demo();
    Hello();
    Hello();
    Hello();

    return 0;

}