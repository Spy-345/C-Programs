#include<stdio.h>

int main()
{
  char ch = 'A';
  int i = 11;
  float f = 3.14;
  double d = 9.124;

  printf("Values from variables are:\n");
  printf("%d\n",i);
  printf("%c\n",ch);
  printf("%f\n",f);
  printf("%lf\n",d);

  printf("Sizes of Variables are:\n");
  printf("Size of character is: %d\n",sizeof(ch));
  printf("Size of integer is: %d\n",sizeof(i));
  printf("Size of float is: %d\n",sizeof(f));
  printf("Size of double is: %d\n",sizeof(d));

  printf("Address of variables\n");
  printf("Address of ch %p\n",&ch);
  printf("Address of i %p\n",&i);
  printf("Address of f %p\n",&f);
  printf("Address of d %p\n",&d);
  return 0;
}
