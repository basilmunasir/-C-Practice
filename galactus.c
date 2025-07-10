#include<stdio.h>
int main()
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
			if(a[i]==a[j])
			{
				temp=i;
				while(temp<size-1)
				{
					a[temp]=a[temp+1];
					temp++;
				}
				size--;		
				i=-1;
			}
		}
	}
	for(i=0;i<size;i++)
	{
		printf("%d\t",a[i]);
	}
	return 0;
}
