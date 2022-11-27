#include<stdio.h>

int main()
{
    int Arr[4] = {11, 21, 51, 101};
    printf("%d\n", sizeof(Arr));     //16
    printf("%d\n", sizeof(Arr[2]));  //4
    printf("%d\n", Arr[2]);          //51
    printf("%d\n", Arr);            // 100
    printf("%d\n", &Arr);           //100(address of whole array)

    printf("%d\n", Arr+1);         //104 (base add of Arr + sizeof(element)*1)
    printf("%d\n", (&Arr)+1);      //116 (whole add of Arr + sizeof(Arr)*1)

    printf("%d\n", Arr[2]);         //51
    printf("%d\n", *(Arr+2));       //51
    printf("%d\n", *(2 + Arr));     //51        
    printf("%d\n", 2[Arr]);         //51   


    return 0;
}