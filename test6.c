# include<stdio.h>
main()
{
    char c;
    while (c!=13)/*����Ϊ�س�ʱ����ѭ��*/
    {
        c = getchar();
        if (c=0X1B)
            continue;
        printf("%c\n",c);
    }
}
