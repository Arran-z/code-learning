#include<stdio.h>                           /*ÅĞ¶ÏÒ»¸öËØÊı*/
main()
{
    int a,i,m;
    i = 2;
    printf("please input a number a =? to detect if it is a primer number\n");
    printf("a = ");
    scanf("%d",&a);
    if (a==1)
         printf("yes");
    else
    {
        while (i<=a)
        {
            m=a%i;
            if (m==0)
            {
                break;
            }
            else
                ++i;
        }
    }
    if (i==a)
        printf("yes");
    else
        printf("no");
}
