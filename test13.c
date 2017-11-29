/*
#include <stdio.h>
#include <string.h>
main()
{
    int a[100],b[100],c[100],N;
    char st[2000],s[100],p[100],o;
    int i,k,j;
    int a1[100],a2[100],a3[100],a4[100],a5[100];
    i = 0;
    k = 0;
    printf ("please input the number of students\n");
    printf ("N = ");
    scanf  ("%d",&N);
    printf("please input the details of every student\npress esc to over input");
    do
    {
        k=20*i;
        scanf("%s",st);
        scanf("%d %d %s %s %d ",&a[i],&b[i],s,p,&c);
        i++;
        scanf("%c",&o);
    }
    while (o==13);
    for (i=0,j=0;i<=N;i++)
    {
        if (a[i]>80&&c>1)
            {i=a1[j++];
            printf("8000 %s",st[20*i]);}
        else
            continue;
    }
    for (i=0,j=0;i<=N;i++)
    {
        if (a[i]>85&&b[i]>80)
            {i=a2[j++];
            printf("4000 %s",st[20*i]);}
        else
            continue;
    }
    for (i=0,j=0;i<=N;i++)
    {
        if (a[i]>90)
            {i=a3[j++];
            printf("2000 %s",st[20*i]);}
        else
            continue;
    }
    for (i=0,j=0;i<=N;i++)
    {
        if (a[i]>85&&p=='Y')
            {i=a4[j++];
            printf("1000 %s",st[20*i]);}
        else
            continue;
    }
    for (i=0,j=0;i<=N;i++)
    {
        if (b[i]>80&&s[i]=='Y')
        {i=a5[j++];
        printf("850 %s",st[20*i]);}
                else
            continue;
    }
}
*/
# include <string.h>
main()
{
    char st[100][20];
    int i,n;
    printf("please input the name list\n n = ");
    scanf("%d",&n);
    for (i=0;i<=(n-1);i++)
    {
        scanf("%s",&st[i]);
    }
    for (i=0;i<=(n-1);i++)
    {
        puts(st[i]);
    }
}

