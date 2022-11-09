// Online C compiler to run C program online
#include <stdio.h>
#include<stdlib.h>
struct abc
{
    char c;
    struct abc*next;
};
struct abc*top=NULL;
int i=-1;

void push(int n)
{
    struct abc*new;
    if(i==n-1)
    {
        printf("OVERFLOW\n");
    }
    else
    {
        new=(struct abc*)malloc(sizeof(struct abc));
        scanf(" %c",&new->c);
        new->next=NULL;
        i++;
        if(top==NULL)
        {top=new;}
        else{new->next=top;
            top=new;
        }
    }
}
char pop()
{char b;
    if(i==-1)
    {printf("UNDERFLOW\n");}
    else{struct abc*temp;
        
        temp=top;
        b=temp->c;
        top=top->next;
        free(temp);
        i--;
    }
    return b;
}
void peek()
{
    if(i!=-1){
        
        printf(" %c is the topmost element in the stack\n",top->c);
    }
}
void display(int n)
{
    struct abc*temp;
    temp=top;
    if(temp!=NULL)
    {
        printf(" %c\n",temp->c);
        temp=temp->next;
        display(n);
    }
}
int main() {
    // Write C code here
    int n;
    char r;
    printf("enterno. of elements you want in stack");
    scanf("%d",&n);
    int choice;
    do{
         printf("Enter your choice\n1.push\n2.pop\n3.peak\n4.display\n");
       
        scanf("%d",&choice);
        switch(choice)
        {
        case 1:

            if(i<n-1)
            {
            push(n);}
            break;
            case 2:
             
             
             printf(" %c is poped successfully from stack\n",pop());
             break;
             case 3:
             peek();
             break;
             case 4:
             display(n);
             break;
            
    }

   
}while(choice!=0);
return 0;
}
