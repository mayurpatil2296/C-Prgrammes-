#include<stdio.h>
#include<stdlib.h>
#define Maxsize 6
#define TRUE 1
#define FALSE 0 

struct Node
{
	int Arr[Maxsize];
	int Top;


}s;


void Push()
{
	int Num=0;
	if(s.Top==(Maxsize-1))
	{
		printf("Stack Is Full\n");
	}
	else
	{
		printf("Enter The Element To Push In Stack\n");
		scanf("%d",&Num);
		s.Top++;
		s.Arr[s.Top]=Num;
	}
}

void Pop()
{
	if(s.Top==-1)
	{
		printf("Stack Is Empty\n");

	}
	else
	{
		int Num=s.Arr[s. Top];
		printf("Pop Element Is:-%d\n",s.Arr[s.Top]);
		s.Top--;
		printf("Element Deleted Succesfully From Stack\n");
		
	
	}
}

void Display()
{

	if(s.Top==-1)
	{
		printf("Stack Is Empty");	

	}

	else
	{

		for(int i=s.Top;i>=0;i--)
		{
			printf("%d\t",s.Arr[i]);
		}

	}
}

int main()
{
	int Choice=0;
	int Running=TRUE;
	s.Top=-1;
	printf("Stack Operations:-\n");
	while(Running)
	{
		
	printf("\n--------------------------------\n");
	printf("  1   ----> Push    \n");
	printf("  2   ----> Pop    \n");
	printf("  3   ----> Display    \n");
	printf("  0   ----> Exit   \n");
	printf("--------------------------------\n");

		printf("Enter Choice:-\n");
		scanf("%d",&Choice);
	
		switch(Choice)
		{
		case 1:
		Push();
		printf("Element Inserted Succesfully In Stack\n");
		break;

		case 2:
		Pop();
		break;
		
		case 3:
		Display();
		break;

		case 0:
		Running=FALSE;
		break;

		default:	
		printf("Wrong Choice\n");
		break;

		}	
	}


}
