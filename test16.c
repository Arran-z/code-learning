#include<string.h>
#include<stdio.h>
#include<math.h>
#define pi 3.1415926535
main()
{
    int N,R,i;
    int x[100],y[100];
    double k,s,length;
    s=0;
    printf("please input N = ,R = \nN = ");
    scanf("%d",&N);
    printf("R = ");
    scanf("%d",&R);
    printf("please input the coordinates of each column \n");
    for (i=0;i<=N-1;i++)
    {
        scanf("%d %d",&x[i],&y[i]);
    }
    for (i=0;i<=N-2;i++)
    {
        k=sqrt((x[i+1]-x[i])*(x[i+1]-x[i])+(y[i+1]-y[i])*(y[i+1]-y[i]));
        s=s+k;
    }
    s=s+sqrt((x[N-1]-x[0])*(x[N-1]-x[0])+(y[N-1]-y[0])*(y[N-1]-y[0]));
    length = s+2*pi;
    printf("the length of the string is %.2lf",length);
}
