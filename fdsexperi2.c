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
  int arr1[] = { 1, 2, 4, 5, 6 };
    int arr2[] = { 2, 3, 5, 7 };
    int m = sizeof(arr1) / sizeof(arr1[0]);
    int n = sizeof(arr2) / sizeof(arr2[0]);
   int i = 0, j = 0;
    while (i < m && j < n) {
        if (arr1[i] < arr2[j])
            printf(" %d ", arr1[i++]);
        else if (arr2[j] < arr1[i])
            printf(" %d ", arr2[j++]);
        else {
            printf(" %d ", arr2[j++]);
            i++;
        }
    }
 
    /* Print remaining elements of the larger array */
    while (i < m)
        printf(" %d ", arr1[i++]);
    while (j < n)
        printf(" %d ", arr2[j++]);
    getchar();
}
