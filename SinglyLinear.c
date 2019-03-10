//1.SinglyLinear Link-List

#include<stdio.h>
#include<stdlib.h>
struct Node
{
	int Data;
	struct Node*Next;

};

typedef struct Node NODE;
typedef struct Node* PNODE;
typedef struct Node** PPNODE;

void InsertFirst(int,PPNODE);
void InsertLast(int,PPNODE);
void InsertAtPos(int,PPNODE,int);
void DeleteFirst(PPNODE);
void DeleteLast(PPNODE);
void DeleteAtPos(PPNODE,int);
void Display(PNODE);
int Count(PNODE);

/*/////////////////////////////////
/SinglyLinearLink list:-
/Function:-InsertFirst();	
//////////////////////////////////*/

void InsertFirst(int Value,PPNODE Head)
{
	
	PNODE Newn=NULL;
	Newn=(PNODE)malloc(sizeof(NODE));
	Newn->Data=Value;
	Newn->Next=NULL;

	if(*Head==NULL)
	{
		*Head=Newn;

	}
	else
	{
		Newn->Next=*Head;
		*Head=Newn;
	}	

}

/*/////////////////////////////////
/SinglyLinearLink list:-
/Function:-InsertLast();	
//////////////////////////////////*/

void InsertLast(int Value,PPNODE Head)
{
	PNODE Newn=NULL;
	Newn=(PNODE)malloc(sizeof(NODE));
	PNODE Temp=*Head;
	Newn->Data=Value;
	Newn->Next=NULL;
	
	if(*Head==NULL)
	{
		*Head=Newn;

	}		
	else
	{
		while(Temp->Next!=NULL)
		{
			Temp=Temp->Next;

		}
			Temp->Next=Newn;

	}
		
}


/*/////////////////////////////////
/SinglyLinearLink list:-
/Function:-InsertAtPos();	
//////////////////////////////////*/

void InsertAtPos(int Value,PPNODE Head,int Pos)
{
	PNODE Temp=*Head;	
	
	int Size=Count(*Head);
		
	if((Pos<1)||(Pos>Size+1))
	{
		return;
	}


	if(Pos==1)
	{
		InsertFirst(Value,Head);					
	}
	else if(Pos==Size+1)	
	{
		InsertLast(Value,Head);
	}
	else
	{
		PNODE Newn=NULL;
		Newn=(PNODE)malloc(sizeof(NODE));
		Newn->Data=Value;
		Newn->Next=NULL;
		int i=0;
			
		for(i=1;i<Pos-2;i++)
		{
			Temp=Temp->Next;
		}
		
		Newn->Next=Temp->Next;
		Temp->Next=Newn;
		
			
	}
	
}



void Display(PNODE Head)
{
	
	PNODE Temp=Head;
	
	while(Temp!=NULL)
	{
		printf("%d\t",Temp->Data);
		Temp=Temp->Next;
	}
}


int Count(PNODE Head)
{
	
	PNODE Temp=Head;
	int Count=0;
	while(Temp!=NULL)
	{
	Count++;			
	Temp=Temp->Next;
	}
	return Count;
}

/*/////////////////////////////////
/SinglyLinearLink list:-
/Function:-DeleteFirst();	
//////////////////////////////////*/

void DeleteFirst(PPNODE Head)
{
	PNODE Temp=*Head;	
	if(*Head==NULL)
	{
		printf("There Is No Elements In Link-List");
	}
	else
	{
		(*Head)=(*Head)->Next;
		free(Temp);
	}
	
}

/*/////////////////////////////////
/SinglyLinearLink list:-
/Function:-DeleteLast();	
//////////////////////////////////*/

void DeleteLast(PPNODE Head)
{
	PNODE Temp=*Head;	
	if(*Head==NULL)
	{
		printf("There Is No Elements In Link-List");
	}
	else if((*Head)->Next==NULL)
	{
		free(Temp);
		(*Head)=NULL;

	}
	else
	{
		while(Temp->Next->Next!=NULL)
		{
			Temp=Temp->Next;
	
		}	
			free(Temp->Next);
			Temp->Next=NULL;
	}
	
}


/*/////////////////////////////////
/SinglyLinearLink list:-
/Function:-DeleteAtPos();	
//////////////////////////////////*/

void DeleteAtPos(PPNODE Head,int Pos)
{
	PNODE Temp1=*Head;	
	PNODE Temp2=*Head;

	int Size=Count(*Head);
		
	if((Pos<1)||(Pos>Size+1))
	{
		return;
	}
	
	if(Pos==1)
	{
		DeleteFirst(Head);					
	
	}
	else if(Pos==Size)	
	{
		DeleteLast(Head);
		
	}
	else
	{
		for(int i=1;i<Pos-2;i++)
		{
			Temp1=Temp1->Next;
			Temp2=Temp2->Next;			
		}
		
			Temp1=Temp1->Next;
			Temp2->Next=Temp2->Next->Next;
			free(Temp1);
		}
	
}

     int main()
{
		PNODE First=NULL;
		printf("InsertFirst Elements:-\n");		
		InsertFirst(11,&First);
		InsertFirst(21,&First);
		InsertFirst(31,&First);
		InsertFirst(41,&First);
		InsertFirst(51,&First);
		Display(First);
		printf("\n\n");
		
		int Ret=Count(First);
		printf("Count-Elements:-%d",Ret);
		printf("\n\n");
		
		printf("InsertLast Elements:-\n");
		InsertLast(770,&First);
		Display(First);
		printf("\n\n");
		
		printf("InsertAtPos Elements:-\n");
		InsertAtPos(100,&First,4);
		Display(First);
		printf("\n\n");
		
		printf("DeleteFirst Element:-\n");	
		DeleteFirst(&First);
		Display(First);
		printf("\n\n");	
		
		printf("DeleteLast Element:-\n");	
		DeleteLast(&First);
		Display(First);
		printf("\n\n");	
				
		printf("DeleteAtPos Element:-\n");	
		DeleteAtPos(&First,5);
		Display(First);
		printf("\n\n");	
				

		return 0;
}

	


