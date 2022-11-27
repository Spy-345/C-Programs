# include<stdio.h>


// Structure Declaration i.e. there is no memory allocation
struct Demo
{

    int i;
    float f;
    int j;
    double d;
};

int main()
{
    //Structure Object / Variable Creation
    //Memory gets allocated at this point
    //This are the 3 different objects of same structure

   struct Demo obj1;
   struct Demo obj2;
   struct Demo obj3;

    //Memeber Initialisation
   obj1.d = 11.0;
   obj2.i = 21;
   obj3.j = 51;

   printf("Size of The obj1 :%d\n", sizeof(obj1)); // 24 Bytes (extra 4 bytes are called as padding)
   printf("Size of the obj2 :%d\n", sizeof(obj2)); // 24 Bytes
   printf(" i of the obj2 :%d\n", obj2.i);  //21


    return 0;
}

/*
// Syntax Not allowed

struct Demo
{
    // int i = 11;     //Not Aloowed
    // char ch = 'A';  //Not Allowed
};
*/

//Pointer in Structure
