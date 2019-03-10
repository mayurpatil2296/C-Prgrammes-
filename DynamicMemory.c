#include<stdio.h>
#include<stdlib.h>
void onedimension()
{

	int*ptr=NULL;
	int no;
	scanf("%d",&no);
	printf("Number:%d\n",no);
	ptr=(int*)malloc(no*sizeof(int));
	for(int i=0;i<no;i++)
	{
		scanf("%d",&ptr[i]);

	}	


	for(int i=0;i<no;i++)
	{
		printf("%d\n",ptr[i]);


	}

	free(ptr);
}


void twodimension
{
	int row;
	int col;
	int**ptr=NULL;
	scanf("%d%d",&row,&col);
	printf("row:%d\n,col:%d\n",row,col);
	ptr=(int**)malloc(row*sizeof(int));
		

		for(int i=0;i<row;i++)
		{
			
			ptr[i]=(int*)malloc(col*sizeof(int));

		}
		printf("enter the element for arrays");
		for(int i=0; i<row;i++)
			{

				for(int j=0;i<col;j++)

				{

					scanf("%d",&ptr[i][j]);
				}
			}


	for(int i=0; i<row;i++)
		{				
			for(int j=0;i<col;j++)

				{

					printf("%d",ptr[i][j]);
				}			

			printf("\n");
		}



	printf("free the allocated memeory");
	for(int i=0;i<row;i++)
		{
			
		free(ptr[i]);			
		}

		free(ptr);
}


void threedimension()
{
	int first,second,third;
	int i,j,k;
	int***ptr=NULL;
	printf("enter the first,second,and third number");
	scanf("%d%d%d",&first,&second,&third);
	p=(int***)malloc(first*sizeof(int));
	
		for(i=0;i<first;i++)
		{
			
		ptr[i]=(int**)malloc(second*sizeof(int*));
			{

				for(j=0;j<second;j++)
				{
				ptr[i][j]=(int*)malloc(third*sizeof(int));
				}


			}

		}


	printf("enter the element for arrays");
		
	for(i=0;i<first;i++)
	   {
		for(j=0;j<second;j++)
		{
			for(k=0;k<third;k++)
			{
				scanf("%d",&ptr[i][j][k]);

			}
		}


	   }

	for(i=0;i<first;i++)
	   {
		for(j=0;j<second;j++)
		{
			for(k=0;k<third;k++)
			{
				printf("%d",ptr[i][j][k]);

			}
		}


	   }

	printf("free memory\n");

	for(i=0;i<first;i++)
	{
		for(j=0;j<second;j++)
		{
			
		free(ptr[i][j]);
		}
		
		free(ptr[i]);
	}

	free(ptr);
}


int main()
{

	int choice;
	printf("enter your choice:");
	scanf("%d",&choice);
	printf("1:onedimension\n2:twodimension\n3:threedimension\n")

	swith(ch)
	{
	case 1:
		onedimesinon();
	break;

	case 2:
		twodimesinon();
	break;
	case 3:
		threedimesinon();
	break;

	default:
		printf("No choice:");

	}
	return 0;
}



