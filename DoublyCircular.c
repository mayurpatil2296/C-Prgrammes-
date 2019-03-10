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

void InsertFirst(int,PPNODE,PPNODE);
void InsertLast(int,PPNODE,PPNODE);
void InsertAtPos(int,int,PPNODE,PPNODE);
void DeleteFirst(PPNODE,PPNODE);
void DeleteLast(int,PPNODE,PPNODE);
void DeleteAtPos(int,PPNODE,PPNODE);
int Count(PNODE,PNODE);
void Display(PNODE,PNODE);

/*//////////////////////////
/DoublyCircular Link-List
/Function:-InsertFirst();
//////////////////////////*/

void InsertFirst(int Value,PPNODE Head,PPNODE Tail)
{
	PNODE Newn=NULL;
	Newn=(PNODE)malloc(sizeof(NODE));
	Newn->Next=NULL;
	Newn->Data=Value;
	Newn->Prev=NULL;

	if(((*Head)==NULL)&&((*Tail)==NULL))
	{
		(*Head)=Newn;
		(*Tail)=Newn;	
	}
	else
	{
		Newn->Next=(*Head);
		(*Head)->Prev=Newn;		
		(*Head)=Newn;
			
	}
		(*Head)->Prev=(*Tail);
		(*Tail)->Next=(*Head);
	

}

/*//////////////////////////
/DoublyCircular Link-List
/Function:-InsertLast();
//////////////////////////*/

void InsertLast(int Value,PPNODE Head,PPNODE Tail)
{
	PNODE Newn=NULL;
	Newn=(PNODE)malloc(sizeof(NODE));
	Newn->Next=NULL;
	Newn->Data=Value;
	Newn->Prev=NULL;

	if(((*Head)==NULL)&&((*Tail)==NULL))
	{
		(*Head)=Newn;
		(*Tail)=Newn;	
	}
	else
	{
		(*Tail)->Next=Newn;
		Newn->Prev=(*Tail);
		(*Tail)=Newn;		
		
	
	}
		(*Head)->Prev=(*Tail);
		(*Tail)->Next=(*Head);
}


/*//////////////////////////
/DoublyCircular Link-List
/Function:-InsertAtPos();
//////////////////////////*/

void InsertAtPos(int Value,int Pos,PPNODE Head,PPNODE Tail)
{

	int Size=Count((*Head),(*Tail));
	
	if((Pos<1)||(Pos>Size+1) )
	{
		printf("\nEnter Valid Position to Insert Elemtent\n");
	}

	if(Pos==1)
	{
		InsertFirst(Value,Head,Tail);

	}	
	else if(Pos==Size+1)
	{

		InsertLast(Value,Head,Tail);
	}
	else
	{

		PNODE Newn=NULL;
		Newn=(PNODE)malloc(sizeof(NODE));
		Newn->Next=NULL;
		Newn->Prev=NULL;
		Newn->Data=Value;
		
		PNODE Temp=(*Head);

		for(int i=1;i<=Pos-2;i++)
		{
			Temp=Temp->Next;
		}
	
			Newn->Next=Temp->Next;
			Temp->Next->Prev=Newn;
			Temp->Next=Newn;
			Newn->Prev=Temp;		
	}

}


/*//////////////////////////
/DoublyCircular Link-List
/Function:-DeleteFirst();
//////////////////////////*/

void DeleteFirst(PPNODE Head,PPNODE Tail)
{
	if((*Head==NULL)&&(*Tail==NULL))
	{
		printf("\nThere Is No Elements In Link-List\n");
	}
	if((*Head)==(*Tail))
	{
		free(*Head);
		(*Head)=NULL;
		(*Tail)=NULL;	
	}
	else
	{
			(*Head)=(*Head)->Next;
			free((*Tail)->Next);
			(*Head)->Prev=(*Tail);
			(*Tail)->Next=(*Head);
	}	

}


/*//////////////////////////
/DoublyCircular Link-List
/Function:-DeleteLast();
//////////////////////////*/

void DeleteLast(PPNODE Head,PPNODE Tail)
{
	if(((*Head) ==NULL)&& ((*Tail) == NULL))
	{
		printf("\nThere Is No Elements In Link-List\n");
	}
	if((*Head)==(*Tail))
	{
		free(*Head);
		(*Head)=NULL;
		(*Tail)=NULL;	
	}
	else
	{
		(*Tail)=(*Tail)->Prev;
		free((*Head) -> Prev);
		(*Tail)->Next=(*Head);
		(*Head)->Prev=(*Tail);		
	}	

}


/*//////////////////////////
/DoublyCircular Link-List
/Function:-DeleteAtPos();
//////////////////////////*/

void DeleteAtPos(int Pos,PPNODE Head,PPNODE Tail)
{
	int Size=Count((*Head),(*Tail));
	
	if((Pos<1)||(Pos>Size))
	{
		printf("Enter Valid Position To Delete The Element");
	}
	
	if(((*Head)==NULL)||((*Tail)==NULL))
	{
		printf("There Is No Element In The Link-List");
	}
	if(Pos==1)
	{
		DeleteFirst(Head,Tail);
	}
	else if(Pos==Size)
	{
		DeleteLast(Head,Tail);
	}
	else
	{
		PNODE Temp=(*Head);
	
		for(int i=1;i<=Pos-2;i++)
		{
			Temp=Temp->Next;					
		}

		Temp->Next=Temp->Next->Next;
		free(Temp->Next->Prev);
		Temp->Next->Prev=Temp;

	}

}

/*//////////////////////////
/DoublyCircular Link-List
/Function:-Display();
//////////////////////////*/
void Display(PNODE Head,PNODE Tail)
{
	
	do
	{
		printf("%d\t",Head->Data);
		Head=Head->Next;

	}while(Tail->Next!=Head);



}

/*//////////////////////////
/DoublyCircular Link-List
/Function:-Count();
//////////////////////////*/
int Count(PNODE Head,PNODE Tail)
{
	int cnt=0;
	do
	{
		cnt++;
		Head=Head->Next;

	}while(Tail->Next!=Head);


	return cnt;
}

int main()
{
	PNODE First=NULL;
	PNODE Last=NULL;
	printf("InsertFirst:--\n");
	InsertFirst(11,&First,&Last);	
	InsertFirst(21,&First,&Last);	
	InsertFirst(31,&First,&Last);	
	InsertFirst(41,&First,&Last);	
	InsertFirst(51,&First,&Last);	
	Display(First,Last);
	printf("\n\n");
	
	printf("InsertLast:--\n");
	InsertLast(770,&First,&Last);
	Display(First,Last);	
	printf("\n\n");
	
	printf("InsertAtPos:--\n");
	InsertAtPos(100,3,&First,&Last);
	Display(First,Last);	
	printf("\n\n");
	
	printf("DeleteFirst:--\n");
	DeleteFirst(&First,&Last);
	Display(First,Last);
	printf("\n\n");
	
	printf("DeleteLast:--\n");
	DeleteLast(&First,&Last);
	Display(First,Last);	
	printf("\n\n");	

	printf("DeleteAtPos:--\n");
	DeleteAtPos(2,&First,&Last);
	DeleteAtPos(1,&First,&Last);
	Display(First,Last);	
	printf("\n\n");	
	
	int Ret=Count(First,Last);
	printf("NumberOfElements:-%d\n",Ret);



}
