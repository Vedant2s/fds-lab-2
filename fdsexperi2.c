#include<stdio.h>

void intersection()
{
        int a[100],b[100],c[100],n1,n2,n,k=0,i,j;
    
    // taking input of set A
    
    printf("Enter number of element of set A\n");
    scanf("%d",&n1);
    printf("Enter elements of set A\n");
    for(i=0;i<n1;i++)
      scanf("%d",&a[i]);
      
    // taking input set B
    
    printf("Enter number of element of set B\n");
    scanf("%d",&n2);
    printf("Enter elements of set B\n");
    for( i=0;i<n2;i++)
      scanf("%d",&b[i]);
      
    // Logic for intersection
    
    for( i=0;i<n1;i++)
    {
         for(j=0;j<n2;j++)
         {
            if(a[i]==b[j])
            {
                c[k]=a[i];
                k++;
            }
         }
        
    }
    
    // Printing the elements of intersection of set A and set B
    printf("intersection of set A and set B is:-\n");
    for(i=0;i<k;i++)
     { printf("%d ",c[i]);}
     printf("\n");
}
void nota()
{
    int u[]={1,2,3,4,5,6,7},a[]={1,2,3},b[]={2,3,4,5};
    int c[100],n1,n2,n,k=0,i,j,s=0;
    
    
    
    for( i=0;i<3;i++)
    {
         for(j=0;j<7;j++)
         {
            if(a[i]==u[j])
            {
                c[k]=j;
                s++;
            }
         }
        
    }
    
    // Printing the elements of intersection of set A and set B
    printf("not of set Ais:-\n");
    for(int k=0;k<s;k++){
    
     { printf("%d ",u[c[k]]);}
     printf("\n");
}
void main()
{
    nota();
    intersection();
   int a[10],b[10],i,c[10],j,k=0,n1,n2;

   // taking input set A

   printf("Enter number of  element of set A\n");
   scanf("%d",&n1);
   printf("Enter the element of set A \n");
   for(i=0;i<n1;i++)
      scanf("%d",&a[i]);

    // taking input set B

   printf("Enter number of element of set B\n");
   scanf("%d",&n2);
   printf("Enter the element of set B \n");
   for(i=0;i<n2;i++)
     scanf("%d",&b[i]);

   // logic for calculate union

   // copy the element of set A in set C
   for(i=0;i<n1;i++)
   {
       // repeted element is not allowed so we check is any value repeted
      for(j=0;j<k;j++)
      {
         if(c[j]==a[i]) 
            break;
       }
       if(j==k) //if not repesated then store value in set c 
       {
          c[k]=a[i];
          k++;
       }
    }
    // copy element of set B in set C
   for(i=0;i<n2;i++)
   {
       // check for repeted element
      for(j=0;j<k;j++)
      {
         if(c[j]==b[i])
           break;
      }
     if(j==k) // if element is not repeted then store in set C
     {
       c[k]=b[i];
       k++;
     }
   }

   // printing of union of set A and set B
   printf("Union of set A and B is:-\n");
    for(i=0;i<k;i++)
      printf("%d ",c[i]);
}