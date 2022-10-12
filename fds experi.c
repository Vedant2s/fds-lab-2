// Online C compiler to run C program online
#include <stdio.h>
int r,c;
void multiply()
{
    int a[10][10],b[10][10],mul[10][10],r,c,i,j,k,*lop,*sof;  
    lop=&a[0][0];
    sof=&b[0][0];
 
    printf("enter the number of row=");    
    scanf("%d",&r);    
    printf("enter the number of column=");    
    scanf("%d",&c);    
    printf("enter the first matrix element=\n");    
    for(i=0;i<r;i++)    
    {    
    for(j=0;j<c;j++)    
    {    
    scanf("%d",&*(lop + ((i * 3) + j)));    
    }    
    }    
    printf("enter the second matrix element=\n");    
    for(i=0;i<r;i++)    
    {    
    for(j=0;j<c;j++)    
    {    
    scanf("%d",&*(sof + ((i * 3) + j)));    
    }    
    }    

    printf("multiply of the matrix=\n");    
    for(i=0;i<r;i++)    
    {    
    for(j=0;j<c;j++)    
    {    
    mul[i][j]=0;    
    for(k=0;k<c;k++)    
    {    
    mul[i][j]+=*(lop + ((i * 3) + k))**(sof + ((k * 3) + j));    
    }    
    }    
    }    
    //for printing result    
    for(i=0;i<r;i++)    
    {    
    for(j=0;j<c;j++)    
    {    
    printf("%d\t",mul[i][j]);    
    }    
    printf("\n");    
    }
}
void addition()
{
    int arr[3][3], b[3][3], c[3][3], i, j, *p, *q;
  q = &b[0][0];
  p = &arr[0][0];
  for (i = 0; i < 3; i++)
    {
      for (j = 0; j < 3; j++)
	{
	  printf ("\nEnter a[%d][%d]: ", i, j);
	  scanf ("%d", &arr[i][j]);

	}
    }
  for (i = 0; i < 3; i++)
    {
      for (j = 0; j < 3; j++)
	{

	  printf ("%d\t", *(p + ((i * 3) + j)));
	}
      printf ("\n");
    }
  for (i = 0; i < 3; i++)
    {
      for (j = 0; j < 3; j++)
	{
	  printf ("\nEnter b[%d][%d]: ", i, j);
	  scanf ("%d", &b[i][j]);

	}
    }
  for (i = 0; i < 3; i++)
    {
      for (j = 0; j < 3; j++)
	{

	  printf ("%d\t", *(q + ((i * 3) + j)));
	}
      printf ("\n");
    }
  for (i = 0; i < 3; i++)
    {
      for (j = 0; j < 3; j++)
	{
	  c[i][j] = *(p + ((i * 3) + j)) + *(q + ((i * 3) + j));

	}
    }
  printf ("\nthe sum of the two matrix is\n");
  for (i = 0; i < 3; i++)
    {
      for (j = 0; j < 3; j++)
	{

	  printf ("%d\t", c[i][j]);
	}
      printf ("\n");
    }
}
void saddlepoint()
{
    int a[10][10], i, j, num;
int sm, p, large, f = 1;
printf("Enter Size of Matrix :\n");
scanf("%d", & num);
printf("Enter Matrix Elements :\n");
for (i = 0; i < num; i++)
{
for (j = 0; j < num; j++)
{
scanf("%d", & a[i][j]);
}
}
printf(" The Entered Matrix is :\n");
for (i = 0; i < num; i++)
{
printf("\n");
for (j = 0; j < num; j++)
{
printf("%d ", a[i][j]);
}
}
//Compute Saddle Point
for (i = 0; i < num; i++)
{
p = 0;
sm = a[i][0];
for (j = 0; j < num; j++)
{
if (sm > a[i][j])
{
sm =a[i][j];
p = j;
}
}
large = 0;
for ( j = 0; j < num; j++)
{
if (large < a[j][p])
{
large = a[j][p];
}
}
if ( sm == large)
{
printf("\n The Saddle Point for the given Matrix is :%d\n", sm);
f = 0;
}
}
if (f > 0)
printf( "\nNo Saddle Point ");
}   
  

int main() {
    // Write C code here
   int choice;
   do
    {
        int choice;
         printf("enter your choice:\n");
    printf("1.addition\n2.multiply\n3.saddle point\n");
    scanf("%d",&choice);
    switch(choice)
    {
    case 1:
    addition();
    break;
    case 2:
     multiply();
     break;
     case 3:
     saddlepoint();
     break;
    }
    }while(choice!=0);
    
    

    return 0;
}
