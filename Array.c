#include<stdio.h>

int main()
{
  int Arr[5] = {10, 20, 30, 40, 50};
  printf("Base Address of the Arr: %d\n",Arr);
  printf("Base Address of the Arr: %p\n",&Arr);
  printf("Size of array is: %d\n",sizeof(Arr));
  printf("Element add is:%d\n",&Arr[3]);

  return 0;
}
