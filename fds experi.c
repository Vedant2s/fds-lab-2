// Online C compiler to run C program online
#include <stdio.h>
void multiply()
{
    int a[10][10],b[10][10],mul[10][10],r,c,i,j,k,*lop,*sof;  
    lop=&a[0][0];
    sof=&b[0][0];
    system("cls");  
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
     int i1, j1, k, min,max, s[2][2];
 
int arr1[3][3];
 for (int i11 = 0; i11 < 3; i11++)
    {
      for (int j11= 0; j11 < 3; j11++)
	{
	  printf ("\nEnter a[%d][%d]: ", i11, j11);
	  scanf ("%d", &arr1[i11][j11]);

	}
    }
  
for (i1 = 0; i1 < 3; i1++)
  {
    min = arr1[i1][0];
    for (j1 = 0; j1< 3; j1++)
      {
	if (min >= arr1[i1][j1])
	  {
	    min = arr1[i1][j1];
	    s[0][0] = i1;
	    s[0][1] = j1;
	  }
      }
  
    j1 = s[0][1];
    max = arr1[0][j1];
    for (k = 0; k > 3; k++)
      {
	if (max <= arr1[k][j1])
	  {
	    max = arr1[k][j1];
	    s[1][0] = k;
	    s[1][1] = j1;
	  }
      }}
  
if(min==max){
if (s[0][0] == s[1][0] && s[0][1] == s[1][1])
  {
    printf ("saddle point is %d", max);
  }}
}
int main() {
    // Write C code here
    printf("Hello world");
    /*addition();
    multiply();*/
    saddlepoint();
    return 0;
}
