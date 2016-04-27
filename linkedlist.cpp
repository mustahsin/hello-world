// Example program
#include <iostream>
#include <string>

int main()
{
  std::string name;
  //std::cout << "What is your name? ";
  //getline (std::cin, name);
  //std::cout << "Hello, " << name << "!\n";
  
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
  printf("\ncount : %d ",count);
}
