#include <stdio.h>
int r,c;
void transpose()
{
    int a[10][10], transpose[10][10], r, c;
    int *p;
    p=&a[0][0];
  printf("Enter size of array: ");
  scanf("%d", &r);

  // asssigning elements to the matrix
  printf("\nEnter matrix elements:\n");
  for (int i = 0; i < r; ++i)
  for (int j = 0; j < r; ++j) {
    printf("Enter element a%d%d: ", i + 1, j + 1);
    scanf("%d", (p+((i*r)+j)));
    transpose[j][i] = *(p+((i*r)+j));
  }

  // printing the matrix a[][]
  printf("\nEntered matrix: \n");
  for (int i = 0; i < r; ++i){
  for (int j = 0; j < r; ++j) {
    printf("%d  ", *(p+((i*r)+j)));
    
    
  }
      printf("\n");
  }


  // printing the transpose
  printf("\nTranspose of the matrix:\n");
  for (int i = 0; i < r; ++i){
  for (int j = 0; j < r; ++j) {
    printf("%d  ", transpose[i][j]);
   
  }
      printf("\n");
  }
}
void multiply()
{
    int a[10][10],b[10][10],mul[10][10],r,c,i,j,k,*lop,*sof;  
    lop=&a[0][0];
    sof=&b[0][0];
 
    printf("enter the size of matrix = ");    
    scanf("%d",&r);    
    printf("enter the first matrix element=\n");    
    for(i=0;i<r;i++)    
    {    
    for(j=0;j<r;j++)    
    {    
    scanf("%d",&*(lop + ((i * r) + j)));    
    }    
    }    
    printf("enter the second matrix element=\n");    
    for(i=0;i<r;i++)    
    {    
    for(j=0;j<r;j++)    
    {    
    scanf("%d",&*(sof + ((i * r) + j)));    
    }    
    }    

    printf("multiply of the matrix=\n");    
    for(i=0;i<r;i++)    
    {    
    for(j=0;j<r;j++)    
    {    
    mul[i][j]=0;    
    for(k=0;k<r;k++)    
    {    
    mul[i][j]+=*(lop + ((i * r) + k))**(sof + ((k * r) + j));    
    }    
    }
    }    
    //for printing result    
    for(i=0;i<r;i++)    
    {    
    for(j=0;j<r;j++)    
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
	  scanf ("%d", (p + ((i * 3) + j)));

	}
    }
  for (i = 0; i < 3; i++)
    {
      for (j = 0; j < 3; j++)
	{

	  printf ("%d\t",*(p + ((i * 3) + j)));
	}
      printf ("\n");
    }
  for (i = 0; i < 3; i++)
    {
      for (j = 0; j < 3; j++)
	{
	  printf ("\nEnter b[%d][%d]: ", i, j);
	  scanf ("%d", (q + ((i * 3) + j)));

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
    printf ("\nthe sum of the two matrix is\n");
  for (i = 0; i < 3; i++)
    {
      for (j = 0; j < 3; j++)
	{
	  c[i][j] = *(p + ((i * 3) + j)) + *(q + ((i * 3) + j));
        
        printf ("%d\t", c[i][j]);
	}
	printf ("\n");
    }
  
  
}
void saddlepoint()
{
    int a[10][10], i, j, num,*p1;
    
  p1 = &a[0][0];
int sm, p, large, f = 1;
printf("Enter Size of Matrix :\n");
scanf("%d", & num);
printf("Enter Matrix Elements :\n");
for (i = 0; i < num; i++)
{
for (j = 0; j < num; j++)
{
    printf("enter the a[%d][%d]\t",i,j);
scanf("%d", (p1 + ((i * num) + j)));
}
}
printf(" The Entered Matrix is :\n");
for (i = 0; i < num; i++)
{
printf("\n");
for (j = 0; j < num; j++)
{
printf("%d ", *(p1 + ((i * num) + j)));
}
}
//Compute Saddle Point
for (i = 0; i < num; i++)
{
p = 0;
sm = *(p1 + ((i * num) + 0));
for (j = 0; j < num; j++)
{
if (sm > *(p1 + ((i * num) + j)))
{
sm = *(p1 + ((i * num) + j));
p = j;
}
}
large = 0;
for ( j = 0; j < num; j++)
{
if (large < *(p1 + ((j * num) + p)))
{
large = *(p1 + ((j * num) + p));
}
}
if ( sm == large)
{
printf("\n The Saddle Point for the given Matrix is :%d\n", sm);
f = 0;
}
}
if (f > 0)
printf( "\nNo Saddle Point\n ");
}   
  

int main() {
    // Write C code here
   int choice;
   do
    {
        int choice;
         printf("enter your choice:\n");
    printf("1.addition\n2.multiply\n3.saddle point\n4.transpose of matrix\n");
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
     case 4:
     transpose();
     break;
    }
    }while(choice!=0);
    
    

    return 0;
}
