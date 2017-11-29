# include <stdio.h>
#include<math.h>
main()
{
    int a[8],b[8],c[8],d[8],e[8],f[8],g[8];
    int n,k,i;
    float p,P;
    int score,s,digt,am;
    scanf("%d",&n);
    k=log(n)/log(2);
    for (i=0,P=1;i<=k-1;i++)
    {
        scanf("%d %d %d",&a[i],&b[i],&c[i]);
        p=(float)(a[i]*b[i]*c[i])/1000000;
        P=P*p;
    }
    for (i=0,s=0;i<=k-1;i++)
    {
        scanf("%d %d %d %d",&d[i],&e[i],&f[i],&g[i]);
        score=(int)(d[i]*e[i]*f[i])*g[i]/1000000+g[i];
        s=s+score;
    }
    scanf("%d",&digt);
    scanf("%d",&am);

    printf ("the final result is %.2f\n",P);
    printf("the sum of the score is %d",s+am);
}
