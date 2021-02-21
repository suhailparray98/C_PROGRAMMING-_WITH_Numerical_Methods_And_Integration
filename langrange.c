/*c program of langrange method*/
#include<stdio.h>
void main()
{
    clrscr();
	float x[10],y[10];
	float temp=1.0,f[10],sum,p;
	int i,n,j,k=0;
	printf("how many records you want to enter ");
	scanf("%d",&n);
	for(i=0;i<=n;i++)
	{
		printf("\n enter value of x%d : ",i);
		scanf("%f",&x[i]);
		printf("\n enter value of f(x%d):",i);
		scanf("%f",&y[i]);
	}
	printf("enter x for finding f(x): ");
	scanf("%f",&p);
	for(i=0;i<n;i++)
	{
		temp=1;
	    k=1;

     	for(j=0;j<n;j++)
	    {
		   if(k==j)
		   {
		    continue;
		   }
		   else
		   {
            temp = temp *((p-x[j])/(x[k]-x[j]));
		   }
		}
		f[i]=y[i]*temp;
	}

	for(i=0;i<n;i++)
	{
		sum = sum + f[i];
	}
	printf("\n\n f(%f)=%f",p,sum);
	getch();
}
