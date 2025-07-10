#include<stdio.h>
#include<string.h>
int main()
{
	int size,i,j;
	printf("Enter the number of users : ");
	scanf("%d",&size);
	char name[size][15],temp[15];
	printf("Enter the names : ");
	for(i=0;i<=size;i++)
	{
		gets(name[i]);
	}
	for(i=0;i<=size;i++)
	{
		for(j=i+1;j<=size;j++)
		{
			if(strcmpi(name[i],name[j])>0)
			{
				strcpy(temp,name[i]);
				strcpy(name[i],name[j]);
				strcpy(name[j],temp);
			}
		}
	}
	for(i=0;i<=size;i++)
	{
		puts(name[i]);
	}
	return 0;
}
