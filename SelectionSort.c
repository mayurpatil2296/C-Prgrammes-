#include<stdio.h>
#include<stdlib.h>

void SelectionSort(int*arr,int n)
{
	int index_of_min = 0;
		
	for(int i=0; i<n; i++)
	{
	      index_of_min = i;
	       for(int j=i; j<n; j++)
		 {
		     if(arr[index_of_min]>arr[j])
		      {
		        index_of_min = j;
		     
		       }
		 }
	    	int temp = arr[i];
		arr[i] = arr[index_of_min];
		arr[index_of_min] = temp;
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
	
	SelectionSort(Arr,No);
	printf("After SelectionSort Function Call\n");
	
	for(int i=0;i<No;i++)
	{
		printf("%d\n",Arr[i]);

	}
	
}
