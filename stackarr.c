#include<stdio.h>
int top=-1;
int main()
{
    int n,y=0;
    printf("Enter the size of stack\n");
    scanf("%d",&n);
    int stack1[n];
    do{
        printf("Enter your choice\n1.push\n2.pop\n3.peak\n4.display\n");
        int ch;
        scanf("%d",&ch);
        switch(ch)
        {
        case 1:

            if(top<n)
            {int d;
                printf("Enter no. to be pushed\n");
            scanf("%d",&d);
            push(stack1,d);}
            break;
        case 2:
            if(top!=-1)
            {printf("The no. that has been poped is %d\n",pop(stack1));}
            break;
        case 3:
            peak(stack1);
            break;
        case 4:
            display(stack1);
            break;
        default:
            printf("WRONG\n");
            break;
        }printf("Want to continue(0/1)?\n");
        scanf("%d",&y);

    }while(y==1);


return 0;
}
void push(int stack1[],int d)
{
    top++;
    stack1[top]=d;
}
void display(int stack1[])
{
    for(int s=0;s<=top;s++)
    {printf("At top=%d the value in stack is %d\n",s,stack1[s]);}
}
void pop(int stack1[])
{

    stack1[top]=0;
    top--;
}
void peak(int stack1[])
{

    printf("At top=%d the value in stack is %d\n",top,stack1[top]);
}
