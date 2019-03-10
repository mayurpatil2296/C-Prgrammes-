#include<stdio.h>
#include<stdlib.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;
int fun51(int*,int);
int fun52(int*,int);
int fun53(int*,int);
void fun54(float*,int);
void fun55(int*,int);
void fun56(int*,int);
void fun57(int*,int);
int fun58(int*,int);
int fun59(int*,int);
int fun60(int[],int);
int fun61(int[],int);
int fun62(int[],int);
int fun63(int[],int,int);
void fun64(int[],int);
BOOL fun65(int[],int[],int,int);
BOOL fun66(int[],int);
void fun67(int[],int[],int,int);
int fun68(int[],int[],int,int);
BOOL fun69(int[],int);
void fun70(int[],int);
void main()
{
		//Function51 Call
		printf("\nAccept One Array From User And Display Even Number Of That Array");
		int Num1=0;
		int*Arr1=NULL;
		printf("\nEnter Number Of Elements For Array:-");
		scanf("%d",&Num1);

		Arr1=(int*)calloc(Num1,sizeof(int));
	
		printf("\nEnter Array Elements:-");
		for(int i=0;i<Num1;i++)
		{
			scanf("%d",&Arr1[i]);
	
		}
		printf("\nEven Elements Are:-");
		fun51(Arr1,Num1);
		printf("\n");

		//Function52 Call
		printf("\nAccept One Array From User And Display Element In Reverse Order");
		int Num2=0;
		int*Arr2=NULL;
		printf("\nEnter Number Of Elements For Array:-");
		scanf("%d",&Num2);
		
		Arr2=(int*)calloc(Num2,sizeof(int));
		
		printf("\nEnter Array Elements:-");
		for(int i=0;i<Num2;i++)
		{
			scanf("%d",&Arr2[i]);
	
		}
		printf("\nReverse Order:-");
		fun52(Arr2,Num2);
		printf("\n");

		//Function53 Call
		printf("\nAccept One Array From User Calculate The Addition of All Even Elements of Array");
		int Num3=0;
		int*Arr3=NULL;
		printf("\nEnter Number Of Elements For Array:--");
		scanf("%d",&Num3);

		Arr3=(int*)calloc(Num3,sizeof(int));
		
		printf("\nEnter Array Elements:--");
		for(int i=0;i<Num3;i++)
		{
			scanf("%d",&Arr3[i]);
	
		}
		
		int Add1=fun53(Arr3,Num3);
		if(Add1==FALSE)
		{
			printf("In Array There is No ELments");
		
		}
		printf("Addition Of Even Elements:--%d",Add1);
		printf("\n");

		//Function54 Call
		printf("\nAccept Some-Elements in Array And Display Element Which iS Greater Than 8.9");
		int Num4=0;
		float*Arr4=NULL;
		printf("\nEnter Number Of Element For Array:--");
		scanf("%d",&Num4);

		Arr4=(float*)calloc(Num4,sizeof(float));

		printf("\nEnter Elements For Array:--");
		for(int i=0;i<Num4;i++)
		{
			scanf("%f",&Arr4[i]);
		
		}
		printf("\nElements Which Is greater Than 8.9:--");
		fun54(Arr4,Num4);
		printf("\n");

		//Function55 Call
		printf("\nAccept Some-Elements in Array And Display Prime Elements in That Array");
		int Num5=0;
		int*Arr5=NULL;
		printf("\nEnter Number Of Element For Array:--");
		scanf("%d",&Num5);

		Arr5=(int*)calloc(Num5,sizeof(int));

		printf("\nEnter Elements For Array:--");
		for(int i=0;i<Num5;i++)
		{
			scanf("%d",&Arr5[i]);
		
		}
		printf("\nPrime Elements In Array:--");
		fun55(Arr5,Num5);
		printf("\n");

		//function56 Call
		printf("\nAccept A Array From User Display The Count Of Each Number In Array");
		int*Arr6=NULL;
		int Num6=0;
		printf("\nEnter Number For Array:-");
		scanf("%d",&Num6);
		Arr6=(int*)calloc(Num6,sizeof(int));

		printf("\nEnter Elements For Array:-");
		for(int i=0;i<Num6;i++)
		{
		
			scanf("%d",&Arr6[i]);
		
		}
		printf("\nNumber Of Count Of Each Number:-");
		fun56(Arr6,Num6);
		printf("\n");

		//Function57 Call
		printf("\nAccept A Array From User Display The Sum Of Each Number In Array");
		int*Arr7=NULL;
		int Num7=0;
		printf("\nEnter Number For Array:-");
		scanf("%d",&Num7);
		Arr7=(int*)calloc(Num7,sizeof(int));

		printf("\nEnter Elements For Array:-");
		for(int i=0;i<Num7;i++)
		{
		
			scanf("%d",&Arr7[i]);
		
		}
		printf("\nSum Of Each Number In Array:-");
		fun57(Arr7,Num7);
		printf("\n");

		//Function58 Call
		printf("\nAccept A Array From User Display Maximum Element Array");
		int*Arr8=NULL;
		int Num8=0;
		printf("\nEnter Number For Array:-");
		scanf("%d",&Num8);
		Arr8=(int*)calloc(Num8,sizeof(int));

		printf("\nEnter Elements For Array:-");
		for(int i=0;i<Num8;i++)
		{
		
			scanf("%d",&Arr8[i]);
		
		}
		int Max=fun58(Arr8,Num8);
		printf("\nMaximum Element is:-%d",Max);
		printf("\n");

		//Function59 Call
		printf("\nAccept A Array From User Display The Minimum Element In Array");
		int*Arr9=NULL;
		int Num9=0;
		printf("\nEnter Number For Array:-");
		scanf("%d",&Num9);
		Arr9=(int*)calloc(Num9,sizeof(int));

		printf("\nEnter Elements For Array:-");
		for(int i=0;i<Num9;i++)
		{
		
			scanf("%d",&Arr9[i]);
		
		}
		int Min=fun59(Arr9,Num9);
		printf("Minimum Element Is:-%d",Min);
		printf("\n");

		//Function60 Call
		printf("\nAccept A Array From User And Perform The Operation");
		int*Arr10=NULL;
		int Num10=0;
		printf("\nEnter Number For Array:-");
		scanf("%d",&Num10);
		Arr10=(int*)calloc(Num10,sizeof(int));

		printf("\nEnter Elements For Array:-");
		for(int i=0;i<Num10;i++)
		{
		
			scanf("%d",&Arr10[i]);
		
		}
		fun60(Arr10,Num10);
		printf("\n");

		//Function61 Call
		printf("\nAccept A Array From User And Replace Each Even Number With 1 And Odd With 0");
		int*Arr11=NULL;
		int Num11=0;
		printf("\nEnter Number For Array:-");
		scanf("%d",&Num11);
		Arr11=(int*)calloc(Num11,sizeof(int));

		printf("\nEnter Elements For Array:-");
		for(int i=0;i<Num11;i++)
		{
		
			scanf("%d",&Arr11[i]);
		
		}
		fun61(Arr11,Num11);
		printf("\n");

		//Function62 Call
		printf("\nAccept A Array From User And Display Difference Of Even And Odd Number");
		int*Arr12=NULL;
		int Num12=0;
		printf("\nEnter Number For Array:-");
		scanf("%d",&Num12);
		Arr12=(int*)calloc(Num12,sizeof(int));

		printf("\nEnter Elements For Array:-");
		for(int i=0;i<Num12;i++)
		{
		
			scanf("%d",&Arr12[i]);
		
		}
		int Diff=fun62(Arr12,Num12);
		printf("Difference Of Even And Odd:--%d",Diff);
		printf("\n");

		//Function63 Call
		printf("\nAccept A Array From User And One Number Display All Number Which Is Divisible By That Number");
		int*Arr13=NULL;
		int Num13=0;
		printf("\nEnter Number For Array:-");
		scanf("%d",&Num13);
		Arr13=(int*)calloc(Num13,sizeof(int));
		
		printf("\nEnter Elements For Array:-");
		for(int i=0;i<Num13;i++)
		{
		
			scanf("%d",&Arr13[i]);
		
		}
		int OneNumber=0;
		printf("\nEnter OneNumber To Check The Divisible:-");
		scanf("%d",&OneNumber);
		fun63(Arr13,Num13,OneNumber);
		printf("\n");

		//Function64 Call
		printf("\nAccept A Array From User And Reverse The Element Of That Array");
		int*Arr14=NULL;
		int Num14=0;
		printf("\nEnter Number For Array:-");
		scanf("%d",&Num14);
		Arr14=(int*)calloc(Num14,sizeof(int));
		
		printf("\nEnter Elements For Array:-");
		for(int i=0;i<Num14;i++)
		{
		
			scanf("%d",&Arr14[i]);
		
		}
		printf("\nReverse Order Of Elements:-");
		fun64(Arr14,Num14);
		printf("\n");

		//Function65 Call
		printf("\nAccept Two Array From User And Check Both Array Are Equal Or Not");
		int*Arr15=NULL;
		int*Arr16=NULL;
		int Num15=0;
		int Num16=0;
		printf("\nEnter Number Of Element For FirstArray:-");
		scanf("%d",&Num15);
		Arr15=(int*)calloc(Num15,sizeof(int));
		printf("\nEnter Elements For FirstArray:-");
		for(int i=0;i<Num15;i++)
		{
		
			scanf("%d",&Arr15[i]);
		
		}
		printf("\nEnter Number Of Element For SecondArray:-");
		scanf("%d",&Num16);
		Arr16=(int*)calloc(Num15,sizeof(int));
		printf("\nEnter Elements For SecondArray:-");
		for(int i=0;i<Num16;i++)
		{
		
			scanf("%d",&Arr16[i]);
		
		}
		int Check=fun65(Arr15,Arr16,Num15,Num16);
		if(Check==TRUE)
		{
			printf("Both Array Are Equal");
		
		}
	else if(Check==-1)
		{
			printf("Number OF Elements In Both Array Should Be Same");
		}
	else
		{
			printf("Both Array Are Not Equal");
	
		}
		printf("\n");
	
		//Function66 Call
		printf("\nAccept Array From User And Check That Array Is In Sorted Form Or Not");
		int Num17=0;
		int*Arr17=NULL;
		printf("\nEnter Number Of Elements For Array:--");
		scanf("%d",&Num17);

		Arr17=(int*)calloc(Num17,sizeof(int));
		
		printf("\nEnter Array Elements:--");
		for(int i=0;i<Num17;i++)
		{
			scanf("%d",&Arr17[i]);
	
		}
		
		int Check2=fun66(Arr17,Num17);
		if(Check2==TRUE)
		{
			printf("Array Is In Sorted-Form");
		
		}
		else
		{
			printf("Array Is Not In Sorted Form");
		}
		printf("\n");

		//Function67 Call
		printf("\nAccept Two Array From User And Concat Second Array Into First Array");
		int*Arr18=NULL;
		int*Arr19=NULL;
		int Num18=0;
		int Num19=0;
		printf("\nEnter Number Of Element For FirstArray:-");
		scanf("%d",&Num18);
		Arr18=(int*)calloc(Num18,sizeof(int));
		printf("\nEnter Elements For FirstArray:-");
		for(int i=0;i<Num18;i++)
		{
		
			scanf("%d",&Arr18[i]);
		
		}
		printf("\nEnter Number Of Element For SecondArray:-");
		scanf("%d",&Num19);
		Arr19=(int*)calloc(Num19,sizeof(int));
		printf("\nEnter Elements For SecondArray:-");
		for(int i=0;i<Num19;i++)
		{
		
			scanf("%d",&Arr19[i]);
		
		}
		fun67(Arr18,Arr19,Num18,Num19);
		printf("\n");
	

		//Function68 Call
		printf("\nAccept Two Array From User And Display The Difference Between Both Array");
		int*Arr20=NULL;
		int*Arr21=NULL;
		int Num20=0;
		int Num21=0;
		printf("\nEnter Number Of Element For FirstArray:-");
		scanf("%d",&Num20);
		Arr20=(int*)calloc(Num20,sizeof(int));
		printf("\nEnter Elements For FirstArray:-");
		for(int i=0;i<Num20;i++)
		{
		
			scanf("%d",&Arr20[i]);
		
		}
		printf("\nEnter Number Of Element For SecondArray:-");
		scanf("%d",&Num21);
		Arr21=(int*)calloc(Num21,sizeof(int));
		printf("\nEnter Elements For SecondArray:-");
		for(int i=0;i<Num21;i++)
		{
		
			scanf("%d",&Arr21[i]);
		
		}
		int Difference=fun68(Arr20,Arr21,Num20,Num21);
		printf("Difference Between Both Array:-%d",Difference);
		printf("\n");
	
		//Function69 Call
		printf("\nAccept A Array From User Check That Array Is Palindrome Or Not");
		int*Arr22=NULL;
		int Num22=0;
		printf("\nEnter Number For Array:-");
		scanf("%d",&Num22);
		Arr22=(int*)calloc(Num22,sizeof(int));

		printf("\nEnter Elements For Array:-");
		for(int i=0;i<Num22;i++)
		{
		
			scanf("%d",&Arr22[i]);
		
		}
		
		int Check3=fun69(Arr22,Num22);
		if(Check3==TRUE)
		{
			printf("Given Array Is Palindrome");
		}
		else
		{
			printf("Given Array Is Not-Palindrome");
		}
		printf("\n");

		//Function79 Call
		printf("\nAccept A Array From Replace The Element With There Sum At Their Place");
		int*Arr23=NULL;
		int Num23=0;
		printf("\nEnter Number For Array:-");
		scanf("%d",&Num23);
		Arr23=(int*)calloc(Num23,sizeof(int));

		printf("\nEnter Elements For Array:-");
		for(int i=0;i<Num23;i++)
		{
		
			scanf("%d",&Arr23[i]);
		
		}
		
			fun70(Arr23,Num23);
			printf("\n");
}


int fun51(int*Arr1,int Num1)
{
		
	if((Arr1==NULL)||(Num1<0))
	{
		printf("In Array There is No ELments");
		return FALSE;
		
	}
	for(int j=0;j<Num1;j++)
	{
		if(Arr1[j]%2==0)
		{
		
			printf("%d\t",Arr1[j]);
		}
	
	}

}


int fun52(int*Arr2,int Num2)
{
		
	if((Arr2==NULL)||(Num2<0))
	{
		printf("In Array There is No ELments");
		return FALSE;
		
	}	
	for(int j=Num2-1;j>=0;j--)
	{
		
			printf("%d\t",Arr2[j]);
		
	}

}


int fun53(int*Arr3,int Num3)
{
	int Sum1=0;		
	if((Arr3==NULL)||(Num3<0))
	{
		return FALSE;
	
	}
	for(int j=0;j<Num3;j++)
	{
		if(Arr3[j]%2==0)
		{
		
			Sum1=Sum1+Arr3[j];

		}
	
	}
	return Sum1;
}

void fun54(float*Arr4,int Num4)
{
		
	if((Arr4==NULL)||(Num4<0))
	{
		printf("In Array There is No ELments");
		
	}	
	for(int j=0;j<Num4;j++)
	{
		if(Arr4[j]>8.9)
		{
			printf("%f\t",Arr4[j]);
			
		}
			
	}

}

void fun55(int*Arr5,int Num5)
{
	int Flag=0;
	if((Arr5==NULL)||(Num5<0))
	{
		printf("In Array There is No Elements");
		
	}	
	for(int i=0;i<Num5;i++)
	{
		for(int j=2;j<=Arr5[i]/2;j++)
		{
			if((Arr5[i]%j)==0)
			{
			
				Flag=1;
				break;
			}

		}	
		if(Flag==0)
		{
			printf("%d\t",Arr5[i]);
		}
		Flag=0;
	}

}

void fun56(int*Arr6,int Num6)
{

	if((Arr6==NULL)||(Num6<0))
	{
		printf("There Is No Elements in Array");
	
	}

	int i=0;
	int Count=0;
	for(i=0;i<Num6;i++)
	{
		printf("\nCount Of %d",Arr6[i]);
		while(Arr6[i]!=0)
		{
			Count++;
			Arr6[i]=Arr6[i]/10;
		}
		printf(" Is:-%d\n",Count);
		Count=0;
	}
	
}

void fun57(int*Arr7,int Num7)
{

	if((Arr7==NULL)||(Num7<0))
	{
		printf("There Is No Elements in Array");
	
	}

	int i=0;
	int Sum1=0;
	int Digit=0;
	for(i=0;i<Num7;i++)
	{
		printf("\nSum Of %d",Arr7[i]);
		while(Arr7[i]!=0)
		{
			Digit=Arr7[i]%10;
			Sum1=Sum1+Digit;
			Arr7[i]=Arr7[i]/10;
		}
		printf(" Is:--%d\n",Sum1);
		Sum1=0;
	}
	
}

int fun58(int*Arr8,int Num8)
{

	if((Arr8==NULL)||(Num8<0))
	{
		printf("There Is No Elements in Array");
	
	}
	int i=0;
	int Max=Arr8[0];
	for(i=0;i<Num8;i++)
	{
		if(Arr8[i]>Max)
		{
			Max=Arr8[i];
		}	
	
	}
	return Max;
}

int fun59(int*Arr9,int Num9)
{

	if((Arr9==NULL)||(Num9<0))
	{
		printf("There Is No Elements in Array");
	
	}
	int i=0;
	int Min=Arr9[0];
	for(i=0;i<Num9;i++)
	{
		if(Arr9[i]<Min)
		{
			Min=Arr9[i];
		}
	}
	return Min;
	
}

int fun60(int Arr10[],int Num10)
{

	if((Arr10==NULL)||(Num10<0))
	{
		return -1;
	
	}
	int i=0;
	for(i=0;i<Num10;i++)
	{
		if((Arr10[i]%3==0)&&(Arr10[i]%5==0))
		{
			Arr10[i]=Arr10[i]+2;
			
		}
	else if(Arr10[i]%3==0)
		{
			Arr10[i]=Arr10[i]+1;	
		
		}
	}
	
	printf("\nAfter Performing Operation:-");
	for(int i=0;i<Num10;i++)
	{
		printf("%d\t",Arr10[i]);
	
	}
}


int fun61(int Arr11[],int Num11)
{

	if((Arr11==NULL)||(Num11<0))
	{
		return -1;
	
	}
	int i=0;
	for(i=0;i<Num11;i++)
	{
		if(Arr11[i]%2==0)
		{
			Arr11[i]=1;
			
		}
	else if(Arr11[i]%2==1)
		{
			Arr11[i]=0;	
		
		}
	}
	
	printf("\nAfter Replacing Elements:-");
	for(int i=0;i<Num11;i++)
	{
		printf("%d\t",Arr11[i]);
	
	}
}


int fun62(int Arr12[],int Num12)
{
	int EvenSum=0;
	int OddSum=0;
	if((Arr12==NULL)||(Num12<0))
	{
		return -1;
	
	}
	int i=0;
	for(i=0;i<Num12;i++)
	{
		if(Arr12[i]%2==0)
		{
			EvenSum=EvenSum+Arr12[i];
		}
	else 
		{
			OddSum=OddSum+Arr12[i];
		
		}
	}
	
	return EvenSum-OddSum;
}

int fun63(int Arr13[],int Num13,int OneNumber)
{
	
	if((Arr13==NULL)||(Num13<0))
	{
		return -1;
	
	}
	int i=0;
	for(i=0;i<Num13;i++)
	{
		if(Arr13[i]%OneNumber==0)
		{
			printf("%d\t",Arr13[i]);
		}
	}
}

void fun64(int Arr14[],int Num14)
{
	if((Arr14==NULL)||(Num14<0))
	{
		printf("There Is No Element in The Array");
	}
	int Digit=0;
	int i=0;
	int Rev=0;
	for(i=0;i<Num14;i++)
	{
		while(Arr14[i]!=0)
		{
			Digit=Arr14[i]%10;
			Rev=Rev*10+Digit;
			Arr14[i]=Arr14[i]/10;
		}

		printf("%d\t",Rev);
		Rev=0;
	}

}
BOOL fun65(int Arr15[],int Arr16[],int Num15,int Num16)
{
	if((Arr15==NULL)||(Arr16==NULL)||(Num15<0)||(Num16<0))
	{
		printf("There Is No Element in The Array");
	}
	if(Num15!=Num16)
	{
		return -1;
	}
	int i=0;
		for(i=0;i<Num15;i++)
		{
			if(Arr15[i]!=Arr16[i])
			{
				break;
			}
		}
		if(i>=Num15)
		{
			return TRUE;	
		}
		else
		{
		
			return FALSE;
		}

}

BOOL fun66(int Arr17[],int Num17)
{
	if((Arr17==NULL)||(Num17<0))
	{
		printf("There Is No Element is The Array");
	}
	int i=0;
	for(i=0;i<Num17;i++)
	{
		if(Arr17[i]>Arr17[i]+1)
		{
			break;
		}
	
	}
	if(i>=Num17)
	{
		return TRUE;
	}
	else
	{
		return FALSE;
	}

}

void fun67(int Arr18[],int Arr19[],int Num18,int Num19)
{
		if((Arr18==NULL)||(Arr19==NULL)||(Num18<0)||(Num19<0))
		{
			printf("There Is No Element In The Array");
		}

			int i=0;
			int j=0;
			for(i=0;i<Num18;i++)
			{
			
			}

			for(j=0;j<Num19;j++)
			{
				Arr18[i]=Arr19[j];
				i++;
			}

			printf("\nAfter Concating Second Array into First Array\n");
			for(i=0;i<Num18+Num19;i++)
			{
				printf("%d\t",Arr18[i]);
			}
}

int fun68(int Arr20[],int Arr21[],int Num20,int Num21)
{
		if((Arr20==NULL)||(Arr21==NULL)||(Num20<0)||(Num21<0))
		{
			printf("There Is No Element In The Array");
		}
			int i=0;
			int j=0;
			int FirstSum=0;
			int SecondSum=0;
			for(i=0;i<Num20;i++)
			{
				FirstSum=FirstSum+Arr20[i];
			
			}
			for(j=0;j<Num21;j++)
			{
				SecondSum=SecondSum+Arr21[j];
			
			}

			return FirstSum-SecondSum;
	
}

BOOL fun69(int Arr22[],int Num22)
{
		if((Arr22==NULL)||(Num22<0))
		{
			printf("There Is No Element In The Array");
		}
			int i=0;
			int j=Num22-1;

			while(i<=Num22)
			{
				if(Arr22[i]!=Arr22[j])
				{
					break;
				}
			
				i++;
				j--;
			}
			if(i>j)
			{
				return TRUE; 
			}
			else
			{
				return FALSE;
			
			}
}
void fun70(int Arr23[],int Num23)
{
		if((Arr23==NULL)||(Num23<0))
		{
			printf("There Is No Element In The Array");
		}
			int i=0;
			int Digit=0;
			int Sum=0;

			for(i=0;i<Num23;i++)
			{
				while(Arr23[i]!=0)
				{
					Digit=Arr23[i]%10;
					Sum=Sum+Digit;
					Arr23[i]=Arr23[i]/10;
				}
			
				Arr23[i]=Sum;
				Sum=0;
			}
		printf("\nAfter Calculating Some OF Each Element In Array\n");
		for(int j=0;j<Num23;j++)
		{
			printf("%d\t",Arr23[j]);
		}
}