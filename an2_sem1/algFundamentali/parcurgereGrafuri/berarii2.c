#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <sys/fcntl.h>

typedef struct Node{
  int val;
  struct Node* next;
}Node;

typedef struct S{
  int val;
  struct S* next;
}S;

int pop(Node* head){
  if(head == NULL){
    return -1;
  }
  if(head->next == NULL){
    int v = head->val;
    free(head);
    head = NULL;
    return v;
  }
  Node* new = head;
  int val = head->val;
  head = head->next;
  free(new);
  return val;
}

S* pushS(S* head, int val){
  if(head == NULL){
    head = (S*)malloc(sizeof(S));
    head->val = val;
    head->next = NULL;
    return head;
  }
  S* cp = head;
  while(cp->next){
    cp=cp->next;
  }
  S* new = (S*)malloc(sizeof(S));
  new->val = val;
  new->next = NULL;
  cp->next = new;
  return head;
}


Node* pushN(Node* head, int val){
  if(head == NULL){
    head = (Node* )malloc(sizeof(Node));
    head->val = val;
    head->next = NULL;
    return head;
  }
  Node* cp = head;
  while(cp->next){
    cp=cp->next;
  }
  Node* newNode = (Node*)malloc(sizeof(Node));
  newNode->val = val;
  newNode->next = NULL;
  cp->next = newNode;
  return head;
}

int popS(S* head){
  if(head == NULL){
    return -1;
  }
  S* new = head->next;
  int v = head->val;
  free(head);
  head = new;
  return v;
}

void bfs(int head, Node** vecini, int distante[]){
  S* stiva = NULL;
  distante[head] = 0;
  stiva = pushS(stiva, head);
  while(stiva != NULL){
    int actual = popS(stiva);
    Node* ac = vecini[actual];
    while(ac != NULL){
      if(distante[ac->val] < 0) {
        stiva = pushS(stiva, ac->val);
        distante[ac->val] = distante[actual]+1;
      }
    }
  }


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
  int* distante = (int*)malloc(sizeof(int) * (n+1));
  for(int i = 0; i <= n; i++){
    distante[i] = -1;
  }

  //aici citesc muchiile
  for(int i = 0; i < m; i++){
    int st, dr;
    fscanf(input, "%d %d", &st, &dr);
    printf("%d %d\n", st, dr);
    vecini[dr] = pushN(vecini[dr], st);
  }

  //aici citesc intersectiile cu bere
  int bere;
  for(int i = 0; i < p; i++){
    fscanf(input, "%d", &bere);
    bfs(bere, vecini, distante);
  }


  //aici afisez si sterg vecinii
  for(int i = 1; i <= n; i++){
    printf("%d: ", i);
    afisareList(vecini[i]);
    printf("\n");
    deleteList(vecini[i]);
  }

  return 0;
}
