#include<stdio.h>
void fun12(char,char);
void fun13();
void fun14();
void fun15(char);
void fun16(char);
void fun17(int);
int fun18(int);
int fun19(int,int,int);
void fun20(int);
void fun21(int,int);
void fun22(int,int);
void fun23(int,int);
void fun24(int,int);
int fun25(int);
int fun26(int);
int fun27(int);
int fun28(int);
int fun29(int);
int fun30(int);
int fun31(int);
int fun32(int);
int fun33(int);
void fun34(int);
void fun35(int);
float fun36(float);
void fun37(int);
void fun38(int);
void fun39(int,char);
int fun40(int);
int fun41(int Hour);

void main()
{
		char ch1=0;
		char ch2=0;
		
		printf("Enter First Character:-");
		scanf("%c",&ch1);
		fflush(stdin);
		printf("Enter Second Character:-");
		scanf("%c",&ch2);
		
		fun12(ch1,ch2);
		printf("\n");

		printf("Swapping With Temparary variable");
		fun13();
		printf("\n");

		printf("Swapping Without Using Temparary variable");
		fun14();
		printf("\n");

		printf("Accept One charcater From User and convert that Character Case.");
		char ch3=0;
		printf("\nEnter The Character:-");
		fflush(stdin);
		scanf("%c",&ch3);
		fun15(ch3);
		printf("\n");

		printf("Accept One Charcater From User And Check Whether That Character Is Vowel or Not");
		char ch4=0;
		printf("\nEnter The Character:-");
		fflush(stdin);
		scanf("%c",&ch4);
		fun16(ch4);
		printf("\n");

		printf("\nAccept A Number From User Return The Fibbonacci Series of That Number");
		int num1=0;
		printf("\nEnter Number For Fibbonacci Series:-");
		fflush(stdin);
		scanf("%d",&num1);
		fun17(num1);
		printf("\n");

		printf("\nAccept One Number From User And Factorials of that Number");
		int num2=0;
		printf("\nEnter Number For Factorial:-");
		fflush(stdin);
		scanf("%d",&num2);
		int Ans=fun18(num2);
		printf("Factorials is:-%d",Ans);
		printf("\n");

		printf("\nAccept Three number From User And calculate the Average of That Number\n");
		int n1=0.0;
		int n2=0.0;
		int n3=0.0;
		printf("Enter Three Number:-");
		scanf("%d%d%d",&n1,&n2,&n3);
		printf("\nThree Number:-First Number:-%d\nSecond Number:-%d\nThird Number:-%d\n",n1,n2,n3);
		float Ans2=fun19(n1,n2,n3);
		printf("Averge:-%f",Ans2);
		printf("\n");

		printf("\nAccept A Number In Decimal Format And Convert Into Decimal Format\n");
		int Dec=0;
		printf("Enter Number:-");
		scanf("%d",&Dec);
		fun20(Dec);
		printf("\n");

		printf("\nAccept Range From User And Display Elements Bewteen That Range");
		int value1;
		int value2;
		printf("\nEnter the Element:-");
		scanf("%d%d",&value1,&value2);
		fun21(value1,value2);
		printf("\n");
		
		printf("\nAccept Range From User And Display Even Elements Bewteen That Range\n");
		fun22(value1,value2);
		printf("\n");

		printf("\nAccept Range From User And Display The Element in Reverse Order\n");
		fun23(value1,value2);
		printf("\n");

		printf("\nAccept Range From User And Calculate the Addition of All Elements Bewteen That Rang");
		fun24(value1,value2);
		printf("\n");
		
		printf("\nAccept A Number From User And Calcualte the Multiplication Of Digit Of that number\n");
		int number=0;
		printf("Enter Number To Calculate Multiplication Of Digit\n");
		scanf("%d",&number);
		int Ret2=fun25(number);
		printf("Multiplication Of Digit:-%d",Ret2);
		printf("\n");

		printf("\nAccept A Number From User And Calculate the Addition of Even Digit From Number\n");
		int Ret3=fun26(number);
		printf("Additon Of EvenDigit:-%d",Ret3);
		printf("\n");

		printf("\nAccept A Number From User And Calculate The Occurances of 5 from Number\n");
		int Ret4=fun27(number);
		printf("Occurance Of 5:-%d",Ret4);
		printf("\n");

		printf("\nAccept A Number From User And Revrese The Number\n");
		int Ret5=fun28(number);
		printf("Reverse:-%d",Ret5);
		printf("\n");

		printf("\nAccept A number From User And Count the Digit Which Is Greater than 7 From Number\n");
		int Ret6=fun29(number);
		printf("CountOfDigit>7:-%d",Ret6);
		printf("\n");

		printf("\nAccept A Number From User And Calculate the Addition of Odd Digit From Number\n");
		int Ret7=fun30(number);
		printf("Additon Of OddDigit:-%d",Ret7);
		printf("\n");

		printf("\nAccept A Number From User And Return the Difference Between the Even And Odd Digit From Number");
		int Ret8=fun31(number);
		printf("Difference Of EvenAndOdd:-%d",Ret8);
		printf("\n");

		printf("Accept A Number From User And Return The Largest Digit From That Number");
		int Number2=0;
		fflush(stdout);
		printf("\nEnter The Number To Find Maximum Digit From that Number");
		scanf("%d",&Number2);
		int Ret9=fun32(Number2);
		printf("Maximum Digit:-%d",Ret9);
		printf("\n");

		printf("\nAccept A Number From User And Return The Minimum Digit From That Number");
		int Ret10=fun33(Number2);
		printf("Minimum Digit:-%d",Ret10);
		printf("\n");

		printf("\nPattern1:-");
		int Num1=0;
		printf("\nEnter the Number:-\n");
		scanf("%d",&Num1);
		fun34(Num1);
		printf("\n");

		printf("\nPattern2:-");
		fun35(Num1);
		printf("\n");

		printf("\nAccept Length Of Side From User Calculate Area of Square");
		float side=0.0;
		printf("\nEnter Length of Side");
		scanf("%f",&side);
		float Square=fun36(side);
		printf("\nAreaOfSquare:-%f",Square);

		printf("\nWord Problem");
		int KM=0;
		printf("\nEnter KiloMeters To Calculate Charges:-");
		scanf("%d",&KM);
		fun37(KM);
		printf("\n");

		printf("Accept The Number From User and Display One Character");
		int No;
		printf("\nEnter The Number:-");
		scanf("%d",&No);
		fun38(No);
		printf("\n");

		printf("\nAccept The Number As Well One Character From User and Display that Character");
		char ch;
		printf("Enter Character:-");
		scanf("%c",&ch);
		fun39(No,ch);
		printf("\n");

		printf("\nAccept One Number From User And Calculate Sum of Factorials of Each Digit");
		int OneNumber=0;
		printf("\nEnter Number:-");
		scanf("%d",&OneNumber);
		int FactSum=fun40(OneNumber);
		printf("SumOfFactorial:-%d",FactSum);
		printf("\n");

		printf("\nAccept Number Of Hours From User Calculate Number OF Minutes");
		int Hour=0;
		printf("\nEnter Number Of Hours:-");
		scanf("%d",&Hour);
		int Minutes=fun41(Hour);
		printf("\nMinutes:-%d",Minutes);
		printf("\n");
}	

void fun12(char n1,char n2)
{
	printf("Before Swapping");
	printf("\nFirst Character:-%c\n",n1);	
	printf("Second Character:-%c\n",n2);	
	char Temp=0;
	Temp=n1;
	n1=n2;
	n2=Temp;

	printf("After Swapping");
	printf("\nFirst Character:-%c\n",n1);	
	printf("Second Character:-%c\n",n2);	
	
}
void fun13()
{
	int num1=0;
	int num2=0;
	int num3=0;
	printf("Enter First Number:-\n");
	scanf("%d",&num1);

	printf("Enter Second Number:-\n");
	scanf("%d",&num2);
	
	printf("Before Swapping");
	printf("\nFirst Character:-%d\n",num1);	
	printf("Second Character:-%d\n",num2);	
	
	num3=num1;
	num1=num2;
	num2=num3;

	printf("After Swapping");
	printf("\nFirst Character:-%d\n",num1);	
	printf("Second Character:-%d\n",num2);	
	
}

void fun14()
{
	int num1=0;
	int num2=0;

	printf("Enter First Number:-\n");
	scanf("%d",&num1);

	printf("Enter Second Number:-\n");
	scanf("%d",&num2);
	
	printf("Before Swapping");
	printf("\nFirst Character:-%d\n",num1);	
	printf("Second Character:-%d\n",num2);	
	
	num2=num2+num1;
	num1=num2-num1;
	num2=num2-num1;
	
	printf("After Swapping");
	printf("\nFirst Character:-%d\n",num1);	
	printf("Second Character:-%d\n",num2);	
	
}


void fun15(char ch3)
{
		
		if((ch3>='a')&&(ch3<='z'))
		{
		
			ch3=ch3-32;
		}
		else
		{
		
			ch3=ch3+32;
		}

		printf("ConvertCase:-%c\n",ch3);
}

void fun16(char ch3)
{
		if((ch3=='a')||(ch3=='e')||(ch3=='i')||(ch3=='o')||(ch3=='u')
			||(ch3=='A')||(ch3=='E')||(ch3=='I')||(ch3=='O')||(ch3=='U'))
		{
		
			printf("Given Chacatcer is Vowel");
		
		}
		else
		{
		
			printf("Given Character is Not Vowel");
		}

}

void fun17(int num1)
{
	if(num1<0)
	{
		num1=-num1;
	
	}
	int sum1=1;
	int sum2=1;
	int sum3=0;
	int i=0;
	for(i=1;i<=num1;i++)
	{
			printf("%d\t",sum1);
			sum3=sum1+sum2;
			sum1=sum2;
			sum2=sum3;
	}
		
	
}

int fun18(int num2)
{

	int fact=1;
	for(int i=1;i<=num2;i++)
	{
		fact=fact*i;
	}

	return fact;
}

int fun19(int n1,int n2,int n3)
{
	float Ans=n1*n2*n3;
	return Ans/3;

}

void fun20(int number)
{
	int Digit=0;
	while(number!=0)
	{
		Digit=number%2;
		printf("%d\t",Digit);
		number=number/2;
	}
}

void fun21(int n1,int n2)
{
	int i,j;
	if(n1>n2)
	{
		printf("Wrong Choice");
	
	}
	if(n1<0)
	{
		n1=-n1;
	
	}
	if(n2<0)
	{
		n2=-n2;
	}
	for(i=n1;i<=n2;i++)
	{
		printf("%d\t",i);
	}

}

void fun22(int n3,int n4)
{
	int i,j;
	if(n3>n4)
	{
		printf("Wrong Choice");
	
	}
	if(n3<0)
	{
		n3=-n3;
	
	}
	if(n4<0)
	{
		n4=-n4;
	}
	for(i=n3;i<=n4;i++)
	{
		if(i%2==0)
		{
		printf("%d\t",i);
	
		}
	}
}


void fun23(int n3,int n4)
{
	int i,j;
	if(n3>n4)
	{
		printf("Wrong Choice");
	
	}
	if(n3<0)
	{
		n3=-n3;
	
	}
	if(n4<0)
	{
		n4=-n4;
	}
	for(i=n4;i>=n3;i--)
	{
		printf("%d\t",i);
	}
}

void fun24(int n3,int n4)
{
	if(n3>n4)
	{
		printf("Wrong Choice");
	
	}
	if(n3<0)
	{
		n3=-n3;
	
	}
	if(n4<0)
	{
		n4=-n4;
	}
	int i,j;
	int sum1=0;
	for(i=n3;i<=n4;i++)
	{
		sum1=sum1+i;
	}

	printf("\nSumOfRange:-%d",sum1);
}

int fun25(int number)
{
	if(number<0)
	{
		number=-number;
	}
	int Digit=0;
	int Mult=1;

	while(number!=0)
	{
		Digit=number%10;
		if(Digit==0)
		{
			Digit=1;
			
		}
		Mult=Mult*Digit;
		number=number/10;
	}
	return Mult;
}

int fun26(int number)
{
	if(number<0)
	{
		number=-number;
	}
	int Digit=0;
	int Sum=0;

	while(number!=0)
	{
		Digit=number%10;
		if(Digit%2==0)
		{
			Sum=Sum+Digit;
		}
		number=number/10;
	}
	return Sum;
}

int fun27(int number)
{
	if(number<0)
	{
		number=-number;
	}
	int Digit=0;	
	int count=0;
	
	while(number!=0)
	{
		Digit=number%10;
		if(Digit==5)
		{
			count++;	
		}
		number=number/10;
	}
	return count;
}

int fun28(int number)
{
	if(number<0)
	{
		number=-number;
	}
	int Digit=0;
	int Rev=0;

		while(number!=0)
		{
			Digit=number%10;
			Rev=Rev*10+Digit;
			number=number/10;
		}

		return Rev;
}

int fun29(int number)
{
	if(number<0)
	{
		number=-number;
	}
	int Digit=0;
	int Count=0;

		while(number!=0)
		{
			Digit=number%10;
			if(Digit>7)
			{
				Count++;
				
			}
		number=number/10;
		}

		return Count;
}

int fun30(int number)
{
	if(number<0)
	{
		number=-number;
	}
	int Digit=0;
	int Sum=0;

	while(number!=0)
	{
		Digit=number%10;
		if(Digit%2==1)
		{
			Sum=Sum+Digit;
		}
		number=number/10;
	}
	return Sum;
}

int fun31(int number)
{
	if(number<0)
	{
		number=-number;
	}
	int EvenSum=0;
	int OddSum=0;
	int Digit=0;

	while(number!=0)
	{
			Digit=number%10;
			if(Digit%2==0)
			{
				EvenSum=EvenSum+Digit;
			}
			else
			{
				OddSum=OddSum+Digit;
			}

			number=number/10;
	}

	return EvenSum-OddSum;
}


int fun32(int number)
{
	if(number<0)
	{
		number=-number;
	}
	int Max=number%10;
	int Digit=0;

	while(number!=0)
	{
			Digit=number%10;
			if(Digit>Max)
			{
				Max=Digit;
			
			}
			number=number/10;
		
	}

	return Max;
}


int fun33(int number)
{
	if(number<0)
	{
		number=-number;
	}
	int Min=number%10;
	int Digit=0;

	while(number!=0)
	{
			Digit=number%10;
			if(Digit<Min)
			{
				Min=Digit;
			
			}
		number=number/10;
	}
return Min;
}

void fun34(int Num1)
{
	for(int i=1;i<=Num1;i++)
	{
		printf("*\t");
	}
	for(int i=1;i<=Num1;i++)
	{
		printf("$\t");
	}
}

void fun35(int Num1)
{
	for(int i=1;i<=Num1;i++)
	{
		printf("* $\t");
	}

}

float fun36(float flength)
{
	
	return flength*flength;

}

void fun37(int KiloMeter)
{
	
	int RCar=15;
	int Discount=0;
	int Charges=0;
	int Ans1=0;
	int Ans2=0;
	if(KiloMeter<120)
	{
		Charges=KiloMeter*RCar;
		printf("\nTotal KiloMeter Charges are:-%d",Charges);
		
	}
	else
	{ 
		Discount=KiloMeter-120;
		Ans1=Discount*10;
		Ans2=Ans1+RCar*120;
		printf("\nTotal KiloMeter Charges are:-%d",Ans2);

	}

}

void fun38(int Num2)
{
	int i=0;
	if(Num2<0)
	{
		Num2=-Num2;
	}
	for(i=1;i<=Num2;i++)
	{
		printf("M\t");
	}
}

void fun39(int Num2,char ch)
{
	int i=0;
	if(Num2<0)
	{
		Num2=-Num2;
	}
	for(i=1;i<=Num2;i++)
	{
		printf("%c\t",ch);
	}
}

int fun40(int OneNumber)
{
	int Digit,DigitFact=1;
	int Fact=0;
	int SumFact=0;

	while(OneNumber!=0)
	{
		Digit=OneNumber%10;
		
		for(int i=Digit;i>=1;i--)
		{
			DigitFact=DigitFact*i;
			
		}

		SumFact=SumFact+DigitFact;
		DigitFact=1;
		OneNumber=OneNumber/10;
	}

	return SumFact;
}

int fun41(int Hour)
{
	int Min=60;
	printf("\nHours:-%d",Hour);
	return Hour*Min;
}













