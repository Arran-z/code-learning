/*#include<stdio.h>
main()
{
    int i,a[10];
    for (i=0;i<=9;i++)
        a[i]=i;
    for (i=0;i<=9;i++)
        printf("a(i)=%d\t",a[i]);
}
*/
#include<stdio.h>/*����Ǳ��0��ʼ*/
main()
{
    int i,a[10];
    for (i=0;i<=9;)
        a[i++]=i;
    for (i=9;i>=0;i--)
        printf("a(i)= %d\t",a[i]);
}
