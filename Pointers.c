#include<stdio.h>


int main()
{
    int no = 11;
//
    int *p = &no; //*p = 11  and p = address of  no.

    int **q = &p; //**q = 11 and *q = address of no and q = address of p.

    int ***r = &q; //***r = 11 and **r = address of no and *r = address of p and r = address of q.

    int ****s = &r; // s = address of r, *s = address of q, **s = address of p, ***s = address of no, ****s = 11.
    printf("%d\n", s);printf("%d\n", &r);
    printf("%d\n", *s);printf("%d\n", &q);
    printf("%d\n", **s);printf("%d\n", &p);
    printf("%d\n", ***s);printf("%d\n", &no);
    printf("%d\n", ****s);printf("%d\n", no);

    return 0;
}