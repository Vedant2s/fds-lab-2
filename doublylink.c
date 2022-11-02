#include <stdio.h>
#include<string.h>
#include<stdlib.h>
struct abc
{
    int pr;
    char name[20];
    struct abc *prv,*next;
};
void insertS(struct abc*h)
{
    struct abc* new;
    new=(struct abc*)malloc(sizeof(struct abc));
    scanf("%d %s",&new->pr,new->name);
    new->prv=h;
    h->next=new;
    new->next=NULL;
}
void insertM(struct abc*head)
{
    struct abc* new;
     
    new=(struct abc*)malloc(sizeof(struct abc));
    printf("Enter the prn and name");
    scanf("%d",&new->pr);
    scanf(" %s",new->name);
    new->next=head->next;
    new->prv=head;
    new->next->prv=new;
    head->next=new;
}
void display1(struct abc*head)
{
    struct abc* temp;
    temp=head;
    while(temp!=NULL)
    {
        printf("\nName= %s prn no.= %d \n",temp->name,temp->pr);
        temp=temp->next;
        
    }
}
void deleteS(struct abc*head)
{
	struct abc*temp;
	temp=head;
	while(temp->next!=NULL)
	{
		temp=temp->next;	
	}
	temp->prv->next=NULL;
	free(temp);	
	
}
int main() {
	    // Write C code here
	    struct abc *head;
	    head=(struct abc*)malloc(sizeof(struct abc));
	    printf("enter the data of president\n");
	    scanf("%d %s",&head->pr,head->name);
	    head->prv=NULL;
	    head->next=NULL;
	    insertS(head);
	    int choice,g;
	    do
	    {
	        printf("Enter your choice\n");
	         printf("1.insert a member\n");
	           printf("2.display all members\n");
                   //printf("3.count of no. of members");
                   printf("3.delete secretary"); 
	        printf("0.exit\n");
	        scanf("%d",&choice);
	        switch(choice)
	        {
	           
	            case 1:
	            insertM(head);
	            break;
	            case 2:
	            display1(head);
	            break;
                    case 3:
	            deleteS(head);
	            break;
	            case 0:
	            printf("you have successfully exited\n");
	            break;
	        }
	    }while(choice!=0);
	   
       // insertM(head);
    
    //printf("Hello world");

    return 0;
}
