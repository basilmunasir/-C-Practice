#include<stdio.h>
void sort();
int main()
{
	sort();
	return 0;
}

void sort()
{
	int size,i,j,temp=0;
	printf("Enter the limit : ");
	scanf("%d",&size);
	int a[size];
	printf("Enter the elements : ");
	for(i=0;i<size;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<size-1;i++)
	{
		for(j=i+1;j<size;j++)
		{
			if(a[i]>a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	for(i=0;i<size;i++)
	{
		printf("%d\t",a[i]);
	}
}
