#include<stdio.h>
#include<stdlib.h>

struct Node
{
	struct Node*Next;	
	int Data;
	struct Node*Prev;
};


typedef struct Node NODE;
typedef struct Node* PNODE;
typedef struct Node** PPNODE;


/*////////////////////////////////
/DoublyLinear Link-List
/Function:-InsertFirst();
////////////////////////////////*/

void InsertFirst(int Value,PPNODE Head)
{
	PNODE Newn=NULL;
	Newn=(PNODE)malloc(sizeof(NODE));
	Newn->Next=NULL;
	Newn->Data=Value;
	Newn->Prev=NULL;

		if(*Head==NULL)
		{
			*Head=Newn;
		}
		else
		{
			Newn->Next=*Head;
			(*Head)->Prev=Newn;
			*Head=Newn;
		}
}

/*////////////////////////////////
/DoublyLinear Link-List
/Function:-InsertLast();
////////////////////////////////*/

void InsertLast(int Value,PPNODE Head)
{
	PNODE Temp=*Head;
	PNODE Newn=NULL;
	Newn=(PNODE)malloc(sizeof(NODE));
	Newn->Next=NULL;
	Newn->Data=Value;
	Newn->Prev=NULL;

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
			Newn->Prev=Temp;	
					
		}
}

/*////////////////////////////////
/DoublyLinear Link-List
/Function:-DeleteFirst();
////////////////////////////////*/

void DeleteFirst(PPNODE Head)
{
	PNODE Temp=*Head;
	if(*Head==NULL)
	{
		printf("There Is No Elements Is The Link-List");
	}
	else if((*Head)->Next==NULL)
		{
			free(*Head);	
			(*Head)=NULL;		
		}
	else
	{
		(*Head)=(*Head)->Next;
		free(Temp);
		(*Head)->Prev=NULL;
	}
	
}


/*////////////////////////////////
/DoublyLinear Link-List
/Function:-DeleteLast();
////////////////////////////////*/

void DeleteLast(PPNODE Head)
{
	PNODE Temp=*Head;
	if(*Head==NULL)
	{
		printf("There Is No Elements Is The Link-List");
	}
	else if((*Head)->Next==NULL)
	{
		free(*Head);
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

/*////////////////////////////////
/DoublyLinear Link-List
/Function:-InsertAtPos();
////////////////////////////////*/

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
		PNODE Newn;
		Newn=(PNODE)malloc(sizeof(NODE));
		Newn->Next=NULL;
		Newn->Data=Value;
		Newn->Prev=NULL;

		for(int i=1;i<Pos-2;i++)
		{
			Temp=Temp->Next;
		
		}
			Newn->Next=Temp->Next;
			Temp->Next=Newn;
			Newn->Next->Prev=Newn;
			Newn->Prev=Temp;			
		}
}

/*////////////////////////////////
/DoublyLinear Link-List
/Function:-DeleteAtPos();
////////////////////////////////*/

void DeleteAtPos(PPNODE Head,int Pos)
{
	PNODE Temp=*Head;	
	int Size=Count(*Head);	

	if((Pos<1)||(Pos>Size))
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
		for(int i=1;i<=Pos-2;i++)
		{
			Temp=Temp->Next;
		}			
		
			Temp->Next=Temp->Next->Next;
			free(Temp->Next->Prev);
			Temp->Next->Prev=Temp;
	}
}




int Count(PNODE Head)
{
 	PNODE Temp=Head;
	int count=0;	
	while(Temp!=NULL)
	{
		count++;
		Temp=Temp->Next;
	}
	return count;
}


void ForwDisplay(PNODE Head)
{
 	PNODE Temp=Head;
		
	while(Temp!=NULL)
	{
		printf("%d\t",Temp->Data);
		Temp=Temp->Next;
	}
}

void BackDisplay(PNODE Head)
{
 	PNODE Temp=Head;
	while(Temp->Next!=NULL)
	{
		Temp=Temp->Next;
	}	
	while(Temp!=NULL)
	{
		printf("%d\t",Temp->Data);
		Temp=Temp->Prev;
	}
}
int main()
{
	PNODE First;
	
		printf("InsertFirst:-\n");
		InsertFirst(101,&First);
		InsertFirst(201,&First);
		InsertFirst(301,&First);
		InsertFirst(401,&First);
		InsertFirst(501,&First);
		printf("Element in Forword Direction:-\n");
		ForwDisplay(First);	
		printf("\n\n");	
		printf("Element in Backword Direction:-\n");
		BackDisplay(First);	
		printf("\n\n");
		
		printf("InsertLast:-\n");
		InsertLast(770,&First);
		ForwDisplay(First);	
		printf("\n\n");
		
		printf("DeleteFirst:-\n");
		DeleteFirst(&First);
		ForwDisplay(First);
		printf("\n\n");
		
		printf("DeleteLast:-\n");
		DeleteLast(&First);
		ForwDisplay(First);
		printf("\n\n");
	
		printf("InsertAtPos:-\n");
		InsertAtPos(100,&First,3);
		ForwDisplay(First);
		printf("\n\n");	

		printf("DeleteAtPos:-\n");
		DeleteAtPos(&First,3);
		ForwDisplay(First);
		printf("\n\n");	
}
