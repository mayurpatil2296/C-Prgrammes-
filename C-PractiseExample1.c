#include<stdio.h>
//#define TRUE
//#define FALSE
//typedef int BOOL;

void fun(int num1)
{
	int i=0;
	for(i=1;i<=num1;i++)
	{
		printf("*\t");
	}


}
void fun2(int num1)
{
	int i=0;
	for(i=1;i<=num1;i++)
	{
		printf("%d\t",i);
	}


}
int fun3(int num1,int num2)
{
	int num3=0;
	num3=num1/num2;
	return num3;

}

int fun4(int num1)
{
	if(num1%5==0)
	{
	
		return 1;
	}
	else
	{
	
		return 0;
	}

}
void fun5(int num1)
{
	int i=num1;
	while(i>=1)
	{
	
		printf("*\t");
		i--;
	}

}

void fun6(char ch)
{
	printf("%c",ch);

}

int fun7(int num1)
{
	return num1-5;
}

void fun8(int num1)
{
	if(num1>10)
	{
		printf("Hello\n");
	}
	else
	{
	
		printf("Demo\n");
	}

}
void fun9(int num1)
{

	if(num1<=0)
	{
	
		num1=-num1;
	
	}

		int i=0;
		for(i=1;i<=num1;i++)
		{
			if(i%2==0)
			{
				printf("%d\t",i);
			
			}
		
		}

}

void fun10(int num1)
{
	if(num1<0)
	{
	
		num1=-num1;
	
	}
	int i=0;

	for(i=1;i<num1;i++)
	{
		if(num1%i==0)
		{
			printf("%d\t",i);
		
		}
	
	}

}

void fun11(int num1,int num2)
{
	if(num1<0)
	{
		num1=-num1;

	}
	if(num2<0)
	{
		num2=-num2;
	}

	int i=1;

	while((i<=num1/2)&&(i<=num2/2))
	{
		if((num1%i==0)&&(num2%i==0))
		{
		
			printf("%d\t",i);
			i++;
		}

	}
}
int main()
{

int ret=0;
int no=0;

printf("Inside Main:-\n");
printf("\nEnter The Number For Some-Functions:-\n");
scanf("%d",&no);


printf("Accept One Number Display Number of Time '*' on Screen\n");
fun1(no);
printf("\n");

printf("\nAccept One Number Display Numbers on Screen\n");
fun2(no);
printf("\n");

printf("\nAccept Two Numbers Display Simple Division\n");
ret=fun3(10,no);
printf("Division is:-%d",ret);
printf("\n");

printf("\nAccept One Number From user And Checek that Number is Divisible by 5 or Not.\n");
ret=fun4(21);

	if(ret==1)
	{	
		printf("\nGiven Number iS Divisible By 5\n");	
	
	}
	else
	{
		printf("\nGiven Number iS Not Divisible By 5\n");	
	
	}
printf("\n");

printf("Accept one Number From User And Display '*' that Number of Times On Screen\n");
fun5(no);
printf("\n");

printf("Accept one Character From User And Display That Charcater On Screen\n");
fun6('M');
printf("\n");

printf("Accept one Number Display That Number With Substracting with 5\n");
ret=fun7(12);
printf("%d",ret);
printf("\n");

printf("\nAccept One Number And According to That Number Display Hello/Demo\n");
fun8(5);
fun8(11);
printf("\n");

printf("\nAccept One Number And Even numbers Of that numbers\n");
fun9(11);
printf("\n");

printf("\nAccept One Number And and Display Factors Of that numbers\n");
fun10(16);
printf("\n");

printf("\nAccept Two Number And and Display Common Factors Of that numbers\n");
fun11(12,18);
printf("\n");

return 0;
}