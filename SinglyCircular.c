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

void InsertFirst(int,PPNODE,PPNODE);
void InsertLast(int,PPNODE,PPNODE);
void InsertAtPos(int,int,PPNODE,PPNODE);
void DeleteFirst(PPNODE,PPNODE);
void DeleteLast(PPNODE,PPNODE);
void DeleteAtPos(int,PPNODE,PPNODE);
int Count(PNODE,PNODE);
void Display(PNODE,PNODE);

/*///////////////////////////
/SinglyCircular Link-List
/Function:-InsertFirst();
///////////////////////////*/

void InsertFirst(int Value,PPNODE Head,PPNODE Tail)
{
	PNODE Newn=NULL;
	Newn=(PNODE)malloc(sizeof(NODE));

	Newn->Data=Value;
	Newn->Next=NULL;
		
	if((*Head==NULL)&&(*Tail==NULL))
	{
		(*Head)=Newn;
		(*Tail)=Newn;
		(*Tail)->Next=(*Head);	
	}
	else
	{
		Newn->Next=(*Head);
		(*Head)=Newn;
		(*Tail)->Next=(*Head);	
			
	}
}

/*///////////////////////////
/SinglyCircular Link-List
/Function:-InsertLast();
///////////////////////////*/

void InsertLast(int Value,PPNODE Head,PPNODE Tail)
{
	PNODE Newn=NULL;
	Newn=(PNODE)malloc(sizeof(NODE));
	Newn->Data=Value;
	Newn->Next=NULL;

	if((*Head==NULL)&&(*Tail==NULL))
	{
		(*Head)=Newn;
		(*Tail)=Newn;
		(*Tail)->Next=(*Head);
	}
	else
	{
		
		(*Tail)->Next=Newn;
		(*Tail)=Newn;
		(*Tail)->Next=(*Head);	
	}

}

/*///////////////////////////
/SinglyCircular Link-List
/Function:-InsertAtPos();
///////////////////////////*/

void InsertAtPos(int Value,int Pos,PPNODE Head,PPNODE Tail)
{
	int Size=Count(*Head,*Tail);
	PNODE Temp=*Head;
	
	if((Pos<1)||(Pos>Size+1))
	{
		return;
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
		Newn->Data=Value;
		Newn->Next=NULL;
		
		for(int i=1;i<Pos-2;i++)
		{
			Temp=Temp->Next;
		}		
		
		Newn->Next=Temp->Next;
		Temp->Next=Newn;
	}


}

/*///////////////////////////
/SinglyCircular Link-List
/Function:-DeleteFirst();
///////////////////////////*/

void DeleteFirst(PPNODE Head,PPNODE Tail)
{
	if((*Head==NULL)&&(*Tail==NULL))
	{
	printf("There Is No Elements In Link-List");	
	}
	
	if((*Tail)==(*Head))
	{
		free(*Head);
		*(Head)=NULL;
		*(Tail)=NULL;
	}
	else
	{
		*(Head)=(*Head)->Next;
		free((*Tail)->Next);
		(*Tail)->Next=(*Head);	
	}	


}


/*///////////////////////////
/SinglyCircular Link-List
/Function:-DeleteLast();
///////////////////////////*/

void DeleteLast(PPNODE Head,PPNODE Tail)
{
	PNODE Temp=*Head;	
	if((*Head==NULL)&&(*Tail==NULL))
	{
	printf("There Is No Elements In Link-List");	
	}
	
	if((*Tail)==(*Head))
	{
		free(*Head);
		*(Head)=NULL;
		*(Tail)=NULL;
	}
	else
	{
		while(Temp->Next->Next!=(*Head))
		{
			Temp=Temp->Next;
		}
		
		free(Temp->Next);
		(*Tail)=Temp;
		Temp->Next=(*Tail);
		(*Tail)->Next=(*Head);	
	}	
}

/*///////////////////////////
/SinglyCircular Link-List
/Function:-DeleteAtPos();
///////////////////////////*/

void DeleteAtPos(int Pos,PPNODE Head,PPNODE Tail)
{
	int Size=Count((*Head),(*Tail));

	PNODE Temp1=(*Head);
	PNODE Temp2=(*Head);
	
	if((Pos<1)||(Pos>Size))
	{	
		return;
	}
	
	if(Pos==1)
	{
		DeleteFirst(Head,Tail);
	}
	else if(Pos==Size)
	{
		DeleteLast(Head,Tail);
	}
	else if((*Tail)==(*Head))
	{
		free(*Head);
		*(Head)=NULL;
		*(Tail)=NULL;
	}
	else
	{
		for(int i=1;i<=Pos-2;i++)
		{
			Temp1=Temp1->Next;
			Temp2=Temp2->Next;
		}
		
		Temp1->Next=Temp1->Next->Next;
		//free(Temp2->Next);
		
	}
	

}

void Display(PNODE Head,PNODE Tail)
{
	PNODE Temp=Head;
	
	if((Head==NULL)&&(Tail==NULL))
	{
		return;

	}
	
	do
	{
		printf("%d\t",Head->Data);
		Head=Head->Next;
	}
	while(Head!=Tail->Next);

}

int Count(PNODE Head,PNODE Tail)
{
	PNODE Temp=Head;
	int cnt=0;
	if((Head==NULL)&&(Tail==NULL))
	{
		printf("There is No Elements In Link-List");
	}
	
	do
	{
		cnt++;		
		Head=Head->Next;
	}
	while(Head!=Tail->Next);
	
	return cnt;

}



int main()
{
	PNODE First=NULL;
	PNODE Last=NULL;
	printf("InsertFirst:-\n");
	InsertFirst(101,&First,&Last);
	InsertFirst(201,&First,&Last);
	InsertFirst(301,&First,&Last);
	InsertFirst(401,&First,&Last);
	InsertFirst(501,&First,&Last);
	Display(First,Last);
	printf("\n\n");

	printf("InsertLast:-\n");
	InsertLast(770,&First,&Last);
	Display(First,Last);
	printf("\n\n");
		
	printf("InsertAtPos:-\n");
	InsertAtPos(100,4,&First,&Last);
	Display(First,Last);
	printf("\n\n");
	
	printf("DeleteFirst:-\n");
	DeleteFirst(&First,&Last);
	Display(First,Last);	
	printf("\n\n");	

	printf("DeleteLast:-\n");
	DeleteLast(&First,&Last);
	Display(First,Last);	
	printf("\n\n");	
	
	printf("DeleteAtPos:-\n");
	DeleteAtPos(3,&First,&Last);
	Display(First,Last);	
	printf("\n\n");	

	int Ret=Count(First,Last);
	printf("NumberOfElements:-%d",Ret);
	printf("\n");
	return 0;

}
