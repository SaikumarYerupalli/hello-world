#include<stdio.h>
void bubblesort(int *arr,int size)
{
	int i,j,temp,flag=0;
	printf("%d %d %d %d %d",*arr,*(arr++),*(arr++),*(arr++),*(arr++));
	for(i=0;i<size;i++)
	{
		for(j=i+1;j<size;j++)
		{
			if(arr[j]<arr[i])
			{
				flag=1;
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}
}
int main()
{
	int a[10],i,size;
	printf("Enter size of array \n");
	scanf("%d",&size);
	printf("Enter array\n");
	for(i=0;i<size;i++)
	scanf("%d",&a[i]);
	bubblesort(a,size);
	printf("Enter sorting");
	for(i=0;i<size;i++)
	printf("%d\n",a[i]);
	return 0;
}

# This is added
