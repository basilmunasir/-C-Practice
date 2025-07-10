#include<stdio.h>
int main()
{
    int size,i=0,insert,pos;
	printf("Enter the limit : ");
	scanf("%d",&size);
	int a[size+1];
	printf("Enter %d elements : ",size);
	for(int i=0;i<size;i++)
	{
		scanf("%d",&a[i]);
	}
    printf("Enter the insertion value : ");
    scanf("%d",&insert);
    printf("Enter the insertion position : ");
    scanf("%d",&pos);
    for(i=size;i>0;i--)
    {
		
		if(a[pos]==a[pos-1])
		break;
		a[i]=a[i-1];
	}
	a[pos-1]=insert;
	for(int i=0;i<=size;i++)
	{
		printf("%d\t",a[i]);
	}
	return 0;
}
