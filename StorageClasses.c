//Storage Classes In C 

#include<stdio.h>

void demo()
{
    auto int A = 10;
    register int B = 10;
    static int C = 10;

    A++;
    B++;
    C++;

    printf("value of auto A:%d\n", A);
    printf("%p\n", &A);
    printf("value of register B:%d\n", B);
    printf("value of ststic C :%d\n", C);
    printf("%p\n", &C);

}

int main()
{
    printf("First call\n");
    demo();
    printf("second call\n");
    demo();
    printf("Third call\n");
    demo();

    return 0;
}



