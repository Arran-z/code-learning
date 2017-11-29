#include<stdio.h>
#include<math.h>
main()
{
    double x1,x2,y1,y2,z1,z2;
    double l;
    scanf("%lf,%lf,%lf",&x1,&y1,&z1);
    scanf("%lf,%lf,%lf",&x2,&y2,&z2);
    l=(x1-x2)*(x1-x2)+(y1-y2)*(y1-y2)+(z1-z2)*(z1-z2);
    printf("%.2lf",(sqrt(l)));
}
