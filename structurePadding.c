#include<stdio.h>
#pragma pack(1)  // () - we can put = 1 2 4 8 or 16(which is in power of 2) 
//Instruction to the preproccesor for instructing the compiler to allocate the memory in sets of 1 byte instead of 4 byte which is by default by the compiler.

struct demo
{
    int i;     //4 bytes
    float f;   // 4 
    char ch;   // 1
    float ff; //4
    // Expected 13 bytes Getting 16 bytes extra is padding to avoid we used pragma pack(1).
    //By using this statement compiler allocate the memory in sets of 1 byte.
};

int main()
{

   struct demo obj;

   printf("size of object :%d\n", sizeof(obj));

   return 0;

}