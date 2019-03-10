#include<stdio.h>
#define TRUE 1
#define FALSE 0
#define Maxsize 6

struct Node
{
	int Front;
	int Rear;
	int Arr[Maxsize];

};

struct Node q;

void Insert()
{
	int Num=0;
		
	if(q.Rear==Maxsize-1)
	{
		printf("Queue is Full\n");
	}
	else
	{
		q.Front=0;
		printf("Enter Element To Inserted In Queue\n");
		scanf("%d",&Num);
		q.Rear++;
		q.Arr[q.Rear]=Num;
	}
	
}
void Delete()
{
	if((q.Front==-1)||(q.Front>q.Rear))
	{
		printf("Queue Is Empty");
	}

	else
	{
		printf("Deleted Element From Queue Is:-%d",q.Arr[q.Front]);
		q.Front++;

	}
}


void Display()
{
	
	if(q.Front==-1)
	{
		printf("Queue Is Empty");		
	}	
	else
	{
		for(int i=q.Front;i<=q.Rear;i++)
		{
			printf("%d\t",q.Arr[i]);
		
		}
	
	}

}

int main()
{		
	
	q.Rear=-1;
	q.Front=-1;
	int Choice=0;
	int Running=TRUE;
	
	while(Running)
	{
		printf("\n----------------------------------\n");
		printf("    1  ---->  Insert   \n");	
		printf("    2  ---->  Delete   \n");	
		printf("    3  ---->  Display  \n");	
		printf("    0  ---->  Exit   \n");	
		printf("----------------------------------\n");
		
		printf("Enter The Choice\n");
		scanf("%d",&Choice);
		
		switch(Choice)
		{
	
		case 1:
		Insert();
		printf("Element Is Successfully Inserted In Queue\n");
		break;

		case 2:
		Delete();
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
