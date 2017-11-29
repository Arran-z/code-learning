#include<stdio.h>
main()
{
    int i,j,a[5][5];
    printf("experiment\n");
    for (i=0;i<=4;i++)                          /*循环嵌套中，从大循环的判定开始，一路下来，逐渐进行小循环。既为：大循环判定，中循环判定，小循环循环操作，返回中循环，中循环操作，返回大循环，大循环操作，结束*/
        {for (j=0;j<=4;j++)
        {
            a[i][j]=3*j+1+2^i;
            printf("a[i][j]= %d\n",a[i][j]);
        }
        }
}
