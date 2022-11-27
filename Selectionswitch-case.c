#include<stdio.h>

// 1   Room No.01 is Allocated to you.Thank You!
// 2   Room No.02 is Allocated to you.Thank You!
// 3   Room No.03 is Allocated to you.Thank You!
// 4   Room No.04 is Allocated to you.Thank You!

int main()
{
    int iToken = 0;

    printf("Enter your Token ID Here :\n");
    scanf("%d",&iToken);

    switch(iToken)
    {
        case 1:
            printf("Room No.01 is Allocated to you.Thank You!\n");
            break;
        case 2:
            printf("Room No.02 is Allocated to you.Thank You!\n");
            break;
        case 3:
            printf("Room No.03 is Allocated to you.Thank You!\n");
            break;
        case 4:
            printf("Room No.04 is Allocated to you.Thank You!\n");
            break;   
        default:
            printf("Sorry Your Token ID is not registered with us or Invalid Token ID. \n");
            break;                                 
    }

    return 0;
}