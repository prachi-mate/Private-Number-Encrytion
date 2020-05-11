#include<stdio.h>




void encrypt()
{

    int k=0,i=0,j=0,x=0,y=0,n[20],dn[10],en[20] ,d ;
	//char ch;

	printf("\n ENTER THE NUMBER OF DIGITS TO BE ENCRYPTED");
	scanf("%d",d);

	printf("\n ENTER THE NUMBER TO BE ENCRYPTED");
	for(i=0;i<d;i++)
	{
		scanf("%d", &n[i]);
	}


	/*ENCRYPTION KEY*/
	for(i=0,j=0;i<d,j<d;i+2,j+2)
	{
	x=(n[i]*10)+(n[i+1]);
	en[j]=x/4;
	en[j+1]=x%4;
	}



    printf("\n Encrypted Number In Numeric Form Is :");
    for(k=0;k<d;k++)
    {
     printf("%d",en[k]);
    }

	printf("\n Encrypted Number In Coded Form Is :");
	for(k=0;k<4;k++)
	{
		if(en[k]==0)
		{
			printf("|");
		}
		if(en[k]==1)
		{
			printf("!");
		}
		if(en[k]==2)
		{
			printf("@");
		}
		if(en[k]==3)
		{
			printf("#");
		}
		if(en[k]==4)
		{
			printf("$");
		}
		if(en[k]==5)
		{
			printf("%");
		}
		if(en[k]==6)
		{
			printf("^");
		}
		if(en[k]==7)
		{
			printf("&");
		}
		if(en[k]==8)
		{
			printf("*");
		}
		if(en[k]==9)
		{
			printf("?");
		}

	}


}
