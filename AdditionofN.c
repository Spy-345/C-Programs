//How to write a program Industrial Approach

/*

    Steps to Develop the application
    Steps1: Understand the problem statement
    Steps2: Write the algorithm
    Steps3: Decide the programming language
    Steps4: Write the program
    Steps5: Test the program
*/

//Accept the N numers from user and perform addition

//Input
//value of N = 5
//values : 10 20 30 40 50

//Expected Output
//Addition is :150

//Algorithm
/*
    START
        Accept the number of elements from user
        Allocate the memory to store that number
        Accept the numbers from user
        Perform Addition of all numbers
        Display the Addition
    END
*/


#include<stdio.h>  //for printf and scanf
#include<stdlib.h> //for malloc and free

////////////////////////////////////
//
// Application Name : Addtion of N numbers
// Input : N numbers
// Output : Addition
// Author : Shivam Yewle
// Date : 18 September 2022
//
/////////////////////////////////////

int main()
{
    int *Arr = NULL;  //Pointer to hold the address of array
    int iSize = 0;    //Variable to hold size of array
    register int i = 0;        //Loop Counter
    int iSum = 0;     //To hold the addition
    printf("Please enter how many elements you want?\n");
    scanf("%d", &iSize);

    //Allocate the memory
    Arr = (int *)malloc(iSize * sizeof(int));

    printf("Memmory Allocation is Successful.\n");

    printf("Please enter the elements.\n");

    for(i = 0; i < iSize; i++)
    {
        scanf("%d", &Arr[i]);
    }

    //Perform Addition
    for(i = 0; i < iSize; i++)
    {
        iSum = iSum + Arr[i];
    }

    printf("Addition is:%d\n", iSum);

    free(Arr);

    printf("Memory Gets deallocated.\n");

    return 0;
}