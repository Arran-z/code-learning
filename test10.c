#include<stdio.h>
main()
{
    int i,j,a[5][5];
    printf("experiment\n");
    for (i=0;i<=4;i++)                          /*ѭ��Ƕ���У��Ӵ�ѭ�����ж���ʼ��һ·�������𽥽���Сѭ������Ϊ����ѭ���ж�����ѭ���ж���Сѭ��ѭ��������������ѭ������ѭ�����������ش�ѭ������ѭ������������*/
        {for (j=0;j<=4;j++)
        {
            a[i][j]=3*j+1+2^i;
            printf("a[i][j]= %d\n",a[i][j]);
        }
        }
}