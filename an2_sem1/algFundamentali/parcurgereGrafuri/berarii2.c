#include <_stdio.h>
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <sys/fcntl.h>

typedef struct Node{
  int d;
  int val;
  struct Node* next;
}Node;

void pop(Node* head){
  if(head == NULL){
    return;
  }
  if(head->next == NULL){
    free(head);
    head = NULL;
    return;
  }
  Node* new = head;
  head = head->next;
  free(new);
}


Node* pushN(Node* head, int val){
  if(head == NULL){
    head = (Node* )malloc(sizeof(Node));
    head->val = val;
    head->next = NULL;
    head->d = -1;
    return head;
  }
  Node* cp = head;
  while(cp->next){
    cp=cp->next;
  }
  Node* newNode = (Node*)malloc(sizeof(Node));
  newNode->val = val;
  newNode->next = NULL;
  newNode->d = -1;
  cp->next = newNode;
  return head;
}

void bfs(Node* head, Node** vecini){
  Node* stiva = NULL;
  head->d = 0;
  stiva = pushN(stiva, head->val);
  while(stiva != NULL);


}

void deleteList(Node* head){
  if(head == NULL){
    return;
  }
  if(head->next == NULL){
    free(head);
    return;
  }
  Node* next = head->next;
  while(next){
    free(head);
    head = next;
    next=next->next;
  }

}

void afisareList(Node* head){
  Node* cp = head;
  while(cp){
    printf("%d, ", cp->val);
    cp=cp->next;
  }
}

int main(){
  int n,m,p;
  FILE* input = fopen("berarii2.in", "r");
  FILE* output = fopen("berarii2.out", "w");
  fscanf(input, "%d %d %d", &n, &m, &p);
  Node** vecini = (Node**)malloc(sizeof(Node*) * (n+1));
  for(int i = 1; i < n+1; i++){
    vecini[i] = NULL;
  }
  int* berarii = (int*)malloc(sizeof(int) * p);

  for(int i = 0; i < m; i++){
    int st, dr;
    fscanf(input, "%d %d", &st, &dr);
    printf("%d %d\n", st, dr);
    vecini[dr] = pushN(vecini[dr], st);
  }
  for(int i = 0; i < p; i++){
    fscanf(input, "%d", berarii+i);
  }
  for(int i = 1; i <= n; i++){
    printf("%d: ", i);
    afisareList(vecini[i]);
    printf("\n");
    deleteList(vecini[i]);
  }

  return 0;
}
