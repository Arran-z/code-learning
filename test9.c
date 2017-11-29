#include<stdio.h>
main()
{
    int i,a[3][5];
    float x1,x2,x3,x11,x22,x33;
    printf("please input math score\n");
    for (i=0;i<=4;i++)
        scanf("%d",&a[1][i]);
    printf("please input chinese score\n");
    for (i=0;i<=4;i++)
        scanf("%d",&a[2][i]);
    printf("please input english score\n");
    for (i=0;i<=4;i++)
        scanf("%d",&a[3][i]);
    for (i=0,x11=0;i<=4;i++)
        x11=x11+a[1][i];
    for (i=0,x22=0;i<=4;i++)
        x22=x22+a[2][i];
    for (i=0,x33=0;i<=4;i++)
        x33=x33+a[3][i];
    x1=x11/5;x2=x22/5;x3=x33/5;
    printf("the average math score is %f\nthe average chinese score is %f\nthe average of english score is %f",x1,x2,x3);
}
