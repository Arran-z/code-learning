#include<stdio.h>
#include<stdlib.h>
main()
{
	int n;
	scanf("%d",&n);
	int t[n],r[n];
	int i,j,c,k;
	double s;
	for (i=0;i<n;i++)
	{
	    scanf("%d",&t[i]);
	    r[i]=0;
	}
	for (i=0;i<n;i++)
	{
		for (j=i,k=t[i],r[i]=i+1;j<n;j++)
		{
			if (k>=t[j])
			{
			    r[j]=i+1;
				c=k;
				k=t[j];
				t[j]=c;
			}
			else
                r[j]=i+1;
		}

	}
	for (i=0,s=0;i<n;i++)
	{
		s=s+t[i];
	}
	s=s/n;
	for (i=0;i<n;i++)
	printf("%d\n",r[i]);
	printf("%.2f",s);
}
