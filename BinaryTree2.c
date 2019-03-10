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



PNODE Insert(int Value,PNODE t)
{
	if(t==NULL)
	{
		t=(PNODE)malloc(sizeof(NODE));
		t->Data=Value;
		t->RChild=NULL;
		t->LChild=NULL;
	}

	else
	{
		if(Value < t->Data)
		{
			t->LChild=Insert(Value,t->LChild);
	
		}
		else if(Value > t->Data)
		{
			t->RChild=Insert(Value,t->RChild);
	
		}

	}

return t;

}

void Display(PNODE Head)
{
	PNODE Temp=Head;
	if(Temp)
	{
		Display(Temp->RChild);
		printf("%d\n",Temp->Data);
		Display(Temp->LChild);
		
	}
	
}
int main()
{
	
	PNODE First=NULL;
	
	First=Insert(11,First);
	First=Insert(21,First);
	First=Insert(5,First);
	First=Insert(41,First);
	First=Insert(2,First);
	First=Insert(110,First);
	First=Insert(171,First);
	First=Insert(9,First);
	First=Insert(89,First);
	First=Insert(3,First);
	First=Insert(23,First);
	
	Display(First);

	
}
