#include<stdio.h>
main()
{
    int x,y,z;
    printf("input the date\n");
    scanf("%d-%d-%d",&x,&y,&z);
    while (x<=2001&&y<=12)
    {
        if (y==1||3||5||7||8||10||12)
    {
        if (z!=31)
            z=z+1;
        else if (y==12&&z==31)
        {
            z=1;
            x=x+1;
            y=1;
        }
            else
            {
                z=1;
                y=y+1;
            }
    }
    else
        if (y==2)
        {
            if ((x%400==0)||((x%4==0)&&(x%100!=0)))
            {
                if (z!=29)
                    z=z+1;
                else
                {
                    z=1;
                    y=y+1;
                }
            }
            else
            {
                if (z!=28)
                    z=z+1;
                else
                {
                    z=0;
                    y=y+1;
                }
            }
        }
        else
        {
            if (z!=30)
                z=z+1;
            else
            {
                z=0;
                y=y+1;
            }

        }
        if (x==2001&&y==11&&z==4) break;
        if (y!=12)
        y=y+1;
    else
    {
        x=x+1;
        y=1;
    }
    }
    if(x==2001&&y==11&&z==4)
        printf("adam");
    else
        printf("eve");
}
