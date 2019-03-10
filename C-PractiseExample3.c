#include<stdio.h>
#define TRUE 1
#define FALSE 0
#define PI 3.14
typedef int BOOL;
int fun42(int,int);
int fun43(int);
int fun44(int);
void fun45(int);
void fun46(char);
int fun47(int);
void fun48(int,int);
int fun49(int,int,float);
float fun50(float);

void main()
{
	printf("Accept Two Numbers From User calcualte its Power");
	int n1=0,n2=0;
	printf("\nEnter Two Number:-");
	scanf("%d%d",&n1,&n2);
	int Power=fun42(n1,n2);
	printf("PowerOf:-%d",Power);
	printf("\n");

	printf("\nAccept One Number From User And check That Number IS Strong Number Or Not");
	int n3=0;
	printf("\nEnter Number To Check Strong Or Not:-");
	scanf("%d",&n3);
	int Check1=fun43(n3);
	if(Check1==TRUE)
	{
		printf("Given Number iS Strong-Number");
	}
	else
	{
		printf("Given Number iS Not Strong-Number");
	}
	printf("\n");

	printf("\nAccept One Number From User Check That Number Is Armstrong Number or Not");
	int Arm=0;
	printf("\nEnter Number To Check ArmStrong Or Not:-");
	scanf("%d",&Arm);
	int Check2=fun44(Arm);
	if(Check2==TRUE)
	{
		printf("Given Number Is ArmStrong Number");
		
	}
	else
	{
		printf("Given Number Is Not ArmStrong Number");
		
	}
	printf("\n");

	printf("Pattern3:-");
	int no=0;
	printf("\nEnter Number");
	scanf("%d",&no);
	fun45(no);
	printf("\n");

	printf("\nAccept One Character From User And Display That Character Type");
	char ch;
	fflush(stdin);
	printf("\nEnter Character:-");
	scanf("%c",&ch);
	fun46(ch);
	printf("\n");

	printf("\nAccept A Number From User And Display its Generic Root");
	int Gen=0;
	printf("\nEnter A Number To Calculate the Generic Root:-");
	scanf("%d",&Gen);
	int GenRoot=fun47(Gen);
	printf("GenericRoot:-%d",GenRoot);
	printf("\n");

	printf("\nAccept Range From User And Display All Prime Number Between That Range");
	int num1,num2;
	printf("\nEnter The Number For Range:-");
	scanf("%d%d",&num1,&num2);
	fun48(num1,num2);
	printf("\n");
		
	printf("\nAccept Amount,Time,Rate Of Interest From user And Calculate Simple Interest");
	int Amount=0;
	float Rate=0;
	int Time=0;
	printf("\nEnter Amount,Time,RateOf Interest:-");
	scanf("%d",&Amount);
	printf("Amount:-%d\n",Amount);

	scanf("%d",&Time);
	printf("Time:-%d\n",Time);
	
	scanf("%f",&Rate);
	printf("RateOf-Interest:-%f\n",Rate);

	float SI=fun49(Amount,Time,Rate);
	printf("Simple-Interest:-%f",SI);
	printf("\n");

	printf("\nAccept Radius From User Calculate the Area");
	float Radius=0.0;
	printf("\nEnter Radius To Calculate Area:-");
	scanf("%f",&Radius);
	float Area=fun50(Radius);
	printf("Area:-%f",Area);
	printf("\n");
	
}

int fun42(int n1,int n2)
{	 int i=0;
	int Power=1;
	for(i=1;i<=n2;i++)
	{
		Power=Power*n1;
	}

	return Power;
}

BOOL fun43(int n3)
{
	int Temp=n3;
	int Digit=0;
	int Fact=1;
	int i=0,Sum=0;
		if(n3<0)
		{
			n3=-n3;
		}
		while(n3!=0)
		{
			Digit=n3%10;
			for(i=Digit;i>=1;i--)
			{
				Fact=Fact*i;
			
			}
		
			Sum=Sum+Fact;
			Fact=1;
			n3=n3/10;
		}
		if(Sum==Temp)
		{
			return TRUE;
			
		}
		else
		{
			return FALSE;
		
		}
}

BOOL fun44(int Arm)
{
	if(Arm<0)
	{
		Arm=-Arm;
	}

	int Temp1=Arm;
	int Temp2=Arm;
	int Digit=0;
	int Count=0;
	int ArmSum1=0;
	int Sum=0;
	while(Temp1!=0)
	{
		Count++;
		Temp1=Temp1/10;
	}
	
	while(Arm!=0)
	{
		Digit=Arm%10;
		ArmSum1=fun42(Digit,Count);
		Sum=Sum+ArmSum1;
		Arm=Arm/10;
	}

	if(Sum==Temp2)
	{
		return TRUE;
	
	}
	else
	{
		return FALSE;
	}

}

void fun45(int Num)
{
	int i=0;
	int j=0;
	if(Num<0)
	{
		Num=-Num;
	
	}
	for(i=Num;i>=1;i--)
	{
		printf("%d #\t",i);

		for(j=1;j<i;j++)
		{
			printf("#\t");
		}
	}

}

void fun46(char ch)
{
	if((ch>='a')&&(ch<='z'))
	{
		printf("Character Is LowerCase");
	}
	else if((ch>='A')&&(ch<='Z'))
	{
		printf("Character Is UpperCase");
	}
	else if((ch>'0')&&(ch<'9'))
	{
		printf("Character is Digit");
	
	}
}

int fun47(int Gen)
{
	if(Gen<0)
	{
		Gen=-Gen;
	
	}
	int Digit1,Digit2=0;
	int Sum1=0;
	int Sum2=0;

	while(Gen!=0)
	{
		Digit1=Gen%10;
		Sum1=Sum1+Digit1;
		Gen=Gen/10;
	}

	while(Sum1!=0)
	{
		Digit2=Sum1%10;
		Sum2=Sum2+Digit2;
		Sum1=Sum1/10;
	}
	return Sum2;
}

void fun48(int num1,int num2)
{
	int flag=0;
	if(num1<0)
	{
		num1=-num1;
	}
	if(num2<0)
	{
		num2=-num2;
	}
	int i=0;
	for(i=num1;i<=num2;i++)
	{		
			flag=0;
		for(int j=2;j<=i/2;j++)
		{
			if(i%j==0)
			{
				flag=1;
				break;
			}
		}

		if(flag==0)
		{
			printf("%d\t",i);
		
		}
	
	}

}

int fun49(int Amount,int Time,float Rate)
{
	float Ans=Amount*Time*Rate;
	return Ans/100;

}

float fun50(float Radius)
{
	return PI*Radius*Radius;

}