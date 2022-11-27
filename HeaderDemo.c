#include "Marvellous.h"

int main()
{
    struct Demo obj;
    float Radius = 30.6f;
    float Area = PI *Radius*Radius;
    int no = 10;
    
    IPTR ptr = &no;

    printf("Area is : %f\n", Area);

    printf("Value of no is : %d\n", *ptr);

    return 0;
    
}