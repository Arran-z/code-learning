#include<stdio.h>
main()
{
    int k[10]={1,2,5,6,-3,8,0,1,2,5};
    int i,a,b;
    int max(x,y);
    int min(x,y);
    for (i=0,a=k[0],b=k[0];i<=9;i++)
    {
        a=max(a,k[i]);
        b=min(b,k[i]);
    }
    printf("max=%d\tmin=%d",a,b);
}
int max (x,y)
{
    if (x>=y)
        return x;
    else
        return y;
}
int min (x,y)
{
    if (x<=y)
        return x;
    else
        return y;
}
