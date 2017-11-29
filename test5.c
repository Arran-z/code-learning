#include<stdio.h>
main()
{
    int a;
    printf("please input a number to stand for a weekday\n");
    scanf("%d",&a);
    switch (a)
    {
        case 1:printf("\t%d is Monday\n",a) ;break; /*if didn't input break,the program will continue to carry out the follow codes until the code default*/
        case 2:printf("\t%d is Tuesday\n",a) ;break;
        case 3:printf("\t%d is Wednesday\n",a); break;
        case 4:printf("\t%d is Thursday\n",a) ;break;
        case 5:printf("\t%d is Friday\n",a) ;break;
        case 6:printf("\t%d is Saturday\n",a); break;
        case 7:printf("\t%d is Sunday\n",a) ;break;
        default :printf("error\n");/*if there are no answer that could match with the cases upper,the program will carry out the statement after the code default*/
    }

}
