// Online C compiler to run C program online
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
int main() {
	    // Write C code here
	    struct abc *head;
	    head=(struct abc*)malloc(sizeof(struct abc));
	    printf("enter the data of president\n");
	    scanf("%d %s",&head->pr,head->name);
	    head->prv=NULL;
	    head->next=NULL;
	    insertS(head);
        int
    
    //printf("Hello world");

    return 0;
}
