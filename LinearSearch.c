#include<stdio.h>
#include<stdlib.h>
#define TRUE 1
#define FALSE 0

void LinearSearch1(int Arr1[],int Num1,int Search1)
{
	int i=0;
	if((Arr1==NULL)||(Num1<0))
	{
		return;
	}

	for(i=0;i<Num1;i++)
	{
		if(Arr1[i]==Search1)
		{
			break;
		}		
	}

		if(i==Num1)
		{
			printf("Given Search Number Is Not Present in Array\n");
		}		
		else
		{
			printf("Given Search Number Is Occured At Position:-%d",i);
		}			
}


void LinearSearch2(int*Arr2,int Num2,int Search2)
{
	if((Arr2==NULL)||(Num2<0))
	{
		return;
	}
	int Start=0;
	int End=Num2-1;
		
		while(Start<End)
		{
			if((Arr2[Start]==Search2)||(Arr2[End]==Search2))
			{
				break;
			}
			Start++;
			End--;	
		}

		if((Start>=End)&&(Arr2[Start]!=Search2)||(Arr2[End]!=Search2))
		{
			printf("given Search Element Is Not Present In the Array\n");
		}
	
	 	 else if(Arr2[Start]==Search2)
		{
			printf("Given Search Element Is occured At Pos:-%d\n",Start);
		
		}
		else 
		{
			printf("Given Search Element Is occured At Pos:-%d\n",End);
		
		}
	



}
int main()
{

	int Num=0;
	int*Arr=NULL;
	int Search=0;
	printf("Enter Number Of Element For Array\n");
	scanf("%d",&Num);
	Arr=(int*)calloc(Num,sizeof(int));
	printf("Enter Elements For Array\n");
	for(int i=0;i<Num;i++)
	{
		scanf("%d",&Arr[i]);
	}
	
	printf("Enter Number For Searching In Array:-\n");
	scanf("%d",&Search);
	printf("Linear Search using Single Direction\n");	
	LinearSearch1(Arr,Num,Search);	
	printf("\n\n");
	printf("Linear Search using Bi-Direction\n");
	LinearSearch2(Arr,Num,Search);	


}
