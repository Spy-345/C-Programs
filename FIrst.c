#include<stdio.h>

int A = 10;
extern int E;  //Global variable from Second.c

extern int C;  //local Variable from Second.c Not Accessible.

extern int D;  //Static Global variable from Second.c //Not accessible

extern int B;  // This is local variable  Defined in function Demo() in Second.c. We can't access Local Variables from another file.

extern void Demo(); // external function declaration : Access Demo.c from Second.c.

int main()
{
    printf("Value of A From First.c :%d\n",A);
    Demo();
    // printf("Value of B From Second File :%d\n",B); //Not accessible
    // printf("Value of B From Second File :%d\n",C); //Not accessible
    // printf("Value of B From Second File :%d\n",D);

    return 0;
}