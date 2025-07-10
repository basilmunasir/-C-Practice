#include<stdio.h>
int main()
{
    int size,i=0,key,temp=0;
	printf("Enter the limit : ");
	scanf("%d",&size);
	int a[size],flag[size];
	printf("Enter %d elements : ",size);
	for(int i=0;i<size;i++)
	{
		scanf("%d",&a[i]);
	}
    printf("Enter the search value : ");
    scanf("%d",&key);
    while (i<=size)
    {
        if(key==a[i])
        {
            flag[i]=1;
            temp=1;
        }
        i++;
    }
    if(temp==0)
	printf("Search is Unsuccessful");
	else
	{
		printf("Search is Successful\n");
		for(int i=0;i<size;i++)
		{
			if(flag[i]==1)
			printf("%d is found in position : %d\n",key,i+1);
		}
	}
	return 0;
}

