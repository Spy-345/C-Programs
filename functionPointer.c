#include<stdio.h>

void function()    //function defination.
{

 printf("Inside fun\n");

}

int Add(int no1, int no2)
{
    int Addition = no1 + no2;

    return Addition;
}



int main()
{

  function();    //function call.

  void (*funptr)(); //Declaration of pointer //Statement reading : funptr is a pointer which holds address of function which accepts nothing and returns nothing.

  funptr = function; //initialisation of pointer.

  funptr();    // function call

  int (*Addptr)(int,int) = Add; // declaration and initialisation of pointer. //Statement Reading: Addptr is a pointer which holds address of function which accepts two
                          //Parameters of type integer and returns integer.
    

  int Addition = Addptr(10,20);
  printf("Addition from Addptr call is :%d\n", Addition);

  int  Addition2 = Add(30,20);
  printf("Addition in From Add call:%d\n", Addition2);


    return 0;
}