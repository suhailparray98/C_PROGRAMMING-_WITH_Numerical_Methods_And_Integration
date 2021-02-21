/* Gauss elimination method */
#include <stdio.h>
#define N 4
main()
{
float a[N][N+1],x[N],t,s;
int i,j,k;
printf("Enter the elements of the augmented matrix row wise\n");
for (i=0;i<N;i++)
for (j=0;j<N+1;j++)
scanf("%f",&a[i][j]);
for (j=0;j<N-1;j++)
for (i=j+1;i<N;i++)
{
t = a[i][j]/a[j][j];
for (k=0;k<N+1;k++)
a[i][k]=a[j][k]*t;
}
/* now printing the
upper triangular matrix */
printf("The upper triangular matrix is:-\n");
for (i=0;i<N;i++)
{
for (j=0;j<N+1;j++)
printf("%8.4f",a[i][j]);
printf("\n");
}
/* now performing back substitution */
for(i=N-1;i>=0;i--)
{
s = 0;
for (j=i+1;j<N;j++)
s += a[i][j]*x[j];
x[i] = (a[i][N]-s)/a[i][i];
}
/* now printing the results */
printf("The solution is:- \n");
for (i=0;i<N;i++)
printf("x[%3d] = %7.4f\n",i+1,x[i]);
}
