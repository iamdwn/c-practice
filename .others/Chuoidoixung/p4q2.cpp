#include <stdio.h>
#include <stdlib.h>

int checksym(int a[100],int i,int j,int n);


main()
{
	int n,j,d,a[100];
	printf("Enter do dai day so = ");
	scanf("%d",&d);
	printf("Enter day so n = \n\n");	
	for (int i=0;i<d;i++)
	{
	printf("a[%d] = ",i);
	scanf("%d",&a[i]);
	}
	printf("\n\nEnter do dai chuoi doi xung muon tim = \n");
	scanf("%d",&n);
	for (int i=0;i<=(d-n);i++)
	{
		j=i+n-1;
		if (checksym(a,i,j,n)==1)
		{
			for (int k=i;k<=j;k++)
			printf("%d",a[k]);
			printf("\n");
		} else if ((checksym(a,i,j,n)==0) && (i==(d-n))) 
		printf("\n\nCannot Found !!\n\n");
		
	}
		
}

int checksym(int a[100],int i,int j,int n)
{
int k;
for (k=i;k<=((i+j)/2);k++)
	if (a[k]!=a[j-(k-i)]) return 0;
	return 1;
}
