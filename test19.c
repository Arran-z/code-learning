#include<stdio.h>
void swap(int *pa,int *pb)
{
    int t;
    t=*pa;
    *pa=*pb;
    *pb=t;
}
main()
{
    int a,b;
    a=10;
    b=20;
    swap(&a,&b);
    printf("%d,%d\n",a,b);
}
