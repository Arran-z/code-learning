# include<string.h>
main()
{
    char st1[20]="hello ",st2[20];
    printf("what is your name \n");
    gets (st2);
    strcat(st1,st2);
    puts (st1);
}
