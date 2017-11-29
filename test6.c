# include<stdio.h>
main()
{
    char c;
    while (c!=13)/*输入为回车时结束循环*/
    {
        c = getchar();
        if (c=0X1B)
            continue;
        printf("%c\n",c);
    }
}
