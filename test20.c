#include<stdio.h>
main()
{
    int n,k,s,t;
    scanf("%d %d",&n,&k);
    if (n>=k)
    {
        if (n%k==0)
        printf("%d",2*n/k);
    else
    {
        t=2*(n/k-1);
        s=n%k;
        if (2*s<=k)
            t=t+3;
        else
            t=t+4;
            printf("%d",t);
    }
    }
    else
        printf("2");

}
