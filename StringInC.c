#include<stdio.h>
#include<string.h>

int main()
{
    char Arr[5] = {'a', 'b', 'c', 'd','\0'};

    char Brr[5] = "abcd"; //Here '\0' gets added by compiler implicitly

    char Crr[] = "abcd";

    printf("%s\n", Arr);
    printf("%s\n", Brr);
    printf("%s\n", Crr);

    printf("Size of Arr : %d\n", sizeof(Arr)); //5
    printf("Size of Brr : %d\n", sizeof(Brr)); //5
    printf("Size of Crr : %d\n", sizeof(Crr)); //5 Number of elements in array including \0.

    printf("Length of Arr : %d\n", strlen(Arr)); //4
    printf("Length of Brr : %d\n", strlen(Brr)); //4
    printf("Length of Crr : %d\n", strlen(Crr)); //4 Number of elements in array except \0.


    return 0;
}