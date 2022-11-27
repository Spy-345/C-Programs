#include<stdio.h>

static int D = 40; // Static Global: This variable can only be used in this file First.c can't access this variable.

int E = 50;  //Global : This can be accessible by any file.

void Demo()
{

int B  = 20;
int C = 30;
printf("value of B From Second.c :%d\n",B);
printf("value of C From Second.c :%d\n",C);

}
