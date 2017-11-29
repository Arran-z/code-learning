#include<stdio.h>
#include<string.h>
main()
{
		struct student
		{
			int ID;
			char name[20];
			float score;
		}; /*never ignore the semicolon*/
		struct student stu1;
		stu1.ID=17;
		strcpy(stu1.name,"arran");
		stu1.score=3.7;
		printf("%d\n%s\n%f",stu1.ID,stu1.name,stu1.score);

}
