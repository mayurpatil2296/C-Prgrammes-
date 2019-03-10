#include<stdio.h>
#include<stdlib.h>

void InsertionSort(int*Arr,int n)
{
	int i, key, j;
	for (i = 1; i < n; i++)
	{
		key = Arr[i];
		j = i-1;
		while((j>=0)&&(Arr[j]>key))
		{  
		Arr[j+1]=Arr[j];
		j=j-1;
		}
		Arr[j+1]=key;
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
	
	InsertionSort(Arr,No);
	printf("After InsertionSort Function Call\n");
	
	for(int i=0;i<No;i++)
	{
		printf("%d\n",Arr[i]);

	}
	
}
