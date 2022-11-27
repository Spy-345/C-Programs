#include<stdio.h>

int main()
{

    int Arr[4] = {10,20,30,40,50};
     
    int *pointer1 = &(Arr[2]);  // 10;

    int *pointer2 = &(Arr[4]);  // 40;


    // Example of Ptr(address) - Ptr(address) :
    printf("%d\n", pointer1 - 2); //
    printf("%d\n",pointer2 - pointer1); // No of Data Points i.e. Integers between the addresses
                                        // of two pointers
            
    //Example of Ptr(value at memory) - Ptr(Value at memory) :
    printf("%d\n", &Arr[4]);
    printf("%d\n", &Arr[0]);
    printf("%d\n",*pointer2 - *pointer1); // It gives the diffrence between the values at that location where the pointers point.

    
    printf("%d\n", Arr); //Base address of array
    printf("%d\n", &Arr[0]);
    return 0;
}