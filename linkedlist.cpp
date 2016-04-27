// Example program
#include <iostream>
#include <string>

int main()
{
  
  struct node{
      int data;
      struct node* next;
  };
  
  struct node *start = NULL;
  start = (struct node*)malloc(sizeof(struct node));
  
  start->data = 1;
  start->next = NULL;
  
  struct node *temp = NULL;
  struct node *last = NULL;
  
  int i=2;
  temp = start;
  
  // building linked list
  while(i<5)
  {
      struct node *t = NULL;
      t = (struct node*)malloc(sizeof(struct node));
      
      t->data = i;
      t->next = NULL;
      
      temp->next = t;
      temp = temp->next;
      i++;
  }
  
  // printing and counting nodes
  temp = start;
  last = start;
  int count =0;
  while(temp!=NULL)
  {
      count++;
      printf("%d ",temp->data);
      last = temp;
      temp = temp->next;
  }
  printf("\nstart : %d ",start->data);
  printf("\nlast : %d ",last->data);
  printf("\ncount : %d\n ",count);
  
  //reversing linked list
  struct node *prev = NULL;
  struct node *current = NULL;
  struct node *next = NULL;
  
  prev = NULL;
  current = start;
  
  while(current!=NULL)
  {
      next = current->next;
      current->next = prev;
      prev = current;
      current = next;
      
  }
  start = prev;
  
  temp = start;
  while(temp!=NULL)
  {
      count++;
      printf("%d ",temp->data);
      last = temp;
      temp = temp->next;
  }
}
  
