
#include <stdio.h>
#include<string.h>
#include<stdlib.h>
struct abc
{
  int pr;
  char name[20];
  struct abc *prv, *next;
};
void insertS (struct abc *h)
{
  struct abc *new;
  new = (struct abc *) malloc (sizeof (struct abc));
  printf ("enter the prn and name of secretary\n");
  scanf ("%d %s", &new->pr, new->name);
  new->prv = h;
  h->next = new;
  new->next = NULL;
}
void insertM (struct abc *head)
{
  struct abc *new;
  new = (struct abc *) malloc (sizeof (struct abc));
  printf ("Enter the prn and name");
  scanf ("%d", &new->pr);
  scanf (" %s", new->name);
  new->next = head->next;
  new->prv = head;
  new->next->prv = new;
  head->next = new;
}
void display1 (struct abc *head)
{
  struct abc *temp;
  temp = head;
  while (temp != NULL)
    {
      printf ("\nName= %s prn no.= %d \n", temp->name, temp->pr);
      temp = temp->next;
    }
}
void deleteS (struct abc *head)
{
  struct abc *temp;
  temp = head;
  while (temp->next != NULL)
    {
      temp = temp->next;
    }
  if(temp->prv!=NULL)temp->prv->next = NULL;
  free (temp);
}
struct abc * deleteP (struct abc *head)
{
  struct abc *temp;
  temp = head;
  if (head->next != NULL)
  head->next->prv = NULL;
  head = head->next;
  free (temp);
  return (head);
}
int count (struct abc *head)
{
  struct abc *temp;
  temp = head;
  int g = 0;			/*if g= then take temp->next!=NULL */
  while (temp != NULL)
    {
      temp = temp->next;
      g++;
    }
  return (g);
}
void rev(struct abc* head,struct abc* temp)
{
    if(temp!=NULL)
    {
        printf("name:%s prn no.:%d\n",temp->name,temp->pr);
        temp=temp->prv;
        rev(head,temp);
    }
}
int main ()
{
  // Write C code here
  struct abc *head;
    struct abc*temp;
  head = (struct abc *) malloc (sizeof (struct abc));
  printf ("enter the data of president\n");
  printf ("\nEnter the prn and name\n");
  scanf ("%d %s", &head->pr, head->name);
  head->prv = NULL;
  head->next = NULL;
  insertS (head);
  int choice, g;
  do
    {
      printf ("\nEnter your choice\n");
      printf ("1.insert a member\n");
      printf ("2.display all members\n");
      //printf("3.count of no. of members");
      printf ("3.delete secretary\n");
      printf ("4.delete president\n");
      printf ("5.no. of members\n");
      printf ("6.display reversed list\n");
      printf ("0.exit\n");
      scanf ("%d", &choice);
      switch (choice)
	{
	case 1:
	  insertM (head);
	  break;
	case 2:
	  display1 (head);
	  break;
	case 3:
	  deleteS (head);
	  break;
	case 4:
	  head = deleteP (head);
	  break;
	case 5:
	  g = count (head);
	  printf ("%d", g);
	  break;
	  case 6:
	  temp = head;
    while (temp->next != NULL) {
        temp= temp->next;
    }
    rev(head,temp);
	  break;
	case 0:
	  printf ("you have successfully exited\n");
	  break;
	}
    }
  while (choice != 0);
  return 0;
}
