#include<stdio.h>
#include<stdlib.h>


void ceva(){
  printf("nu\n");
}


typedef struct Node{
  struct Node* next;
  int val;
}Node;


int main(){

  printf("da\n");
  ceva();

  Node* head = malloc(sizeof(Node));
  head->val = 12;
  head->next = NULL;
  printf("%d\n", head->val);

  return 0;
}
