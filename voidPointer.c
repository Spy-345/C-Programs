#include<stdio.h>


int main()
{

    char ch = 'A';
    int i = 21;
    float F = 21.1;
    double D = 21.234;

    char *chp = &ch;
    int *ip = &i;
    float *Fp = &F;
    double *Dp = &D;

    void *vp = &ch;
    

    printf("Value of ch :%c\n", ch);
    printf("Adress of ch :%p\n", &ch);
    printf("Value inside chp :%p\n", chp);
    printf("Data refer by chp :%c\n", *chp);
    printf("Size of ch :%d\n", sizeof(ch));
    printf("Size of chp :%d\n", sizeof(chp));

    printf("Data refer by vp :%c\n", *(char *)vp);
    void *vp = &i;
    printf("Data refer by vp :%d\n", *(int *)vp);

    

    
        return 0;
}