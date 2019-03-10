#include<stdio.h>
#include<stdlib.h>


struct Node
{
	int Data;
	struct Node*RChild;
	struct Node*LChild;
};


typedef struct Node NODE;
typedef struct Node* PNODE;
typedef struct Node** PPNODE;

		
PNODE Insert(int Value,PPNODE Head)
{
	if(*Head==NULL)
	{
		PNODE Newn=NULL;
		Newn=(PNODE)malloc(sizeof(NODE));		
		Newn->Data=Value;
		Newn->RChild=NULL;
		Newn->LChild=NULL;
		(*Head)=Newn;	
	}
	else
	{
		if((*Head)->Data<Value)
		{
			(*Head)->RChild=Insert(Value,&(*Head)->RChild);
		}
		else if((*Head)->Data>Value)
		{
			(*Head)->LChild=Insert(Value,&(*Head)->LChild);
			
		}

	}
	
}

void Display(PNODE Head)
{
	PNODE Temp=Head;
		
		while(Temp!=NULL)
		{
			printf("%d\t",Temp->Data);
			Temp=Temp->RChild;
		}		

}
int main()
{
	PNODE First;
	
	Insert(11,&First);
	Insert(3,&First);
	Insert(23,&First);
		
	//Insert(11,&First);
	
	//First=Insert(3,&First);


	Display(First);

}


