#include<stdio.h>
#include<stdlib.h>

void BubbleSort(int*arr, int n)
{
	int i, j, temp;

	for(i=0;i<n;i++)
	{
		for(j=0; j<n-i-1;j++)
		{
			if(arr[j]>arr[j+1])
			{
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
}


int main()
{
	
	int*Arr=NULL;
	int No=0;

	printf("Enter Number:-\n");
	scanf("%d",&No);

	Arr=(int*)calloc(No,sizeof(int));
	printf("Enter The Elements For Array\n");	
	for(int i=0;i<No;i++)
	{
		scanf("%d",&Arr[i]);

	}
	
	BubbleSort(Arr,No);
	printf("After BubbleSort Function Call\n");
	
	for(int i=0;i<No;i++)
	{
		printf("%d\n",Arr[i]);

	}
	
}
