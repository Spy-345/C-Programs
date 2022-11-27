#include<stdio.h>

int main()
{
   int iArr[5] = {11, 21, 51, 71, 81};\
   printf("ELEMENTS OF ARRAY are:\n");

   // printf("%d\n", iArr[0]);
   // printf("%d\n", iArr[1]);
   // printf("%d\n", iArr[2]);
   // printf("%d\n", iArr[3]);
   // printf("%d\n", iArr[4]);
  int iCnt = 0; //Counter
//     0=initialisation  1=condition    2=displacement
  for( iCnt = 0;           iCnt <= 4;       iCnt++)
  {
    printf("%d\n", iArr[iCnt]); // 4=loop body
  }

  return 0;
}
