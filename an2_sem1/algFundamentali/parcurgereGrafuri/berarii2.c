#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <sys/fcntl.h>

typedef struct Node{
  int val;
  struct Node* next;
}Node;

Node* pushN(Node* head, int val){
  if(head == NULL){
    Node* newNode = (Node* )malloc(sizeof(Node));
    newNode->val = val;
    newNode->next = NULL;
    return newNode;
  }
  Node* newNode = (Node*)malloc(sizeof(Node));
  newNode->val = val;
  newNode->next = head;
  return newNode;
}

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


void bfs(int head, Node** vecini, int visited[], int n){
  int* stiva = (int*)malloc(sizeof(int)*(n+1));
  int h = 0;
  int c = 0;
  visited[head] = 1;
  stiva[c++] = head;
  while(c>h){
    int actual = stiva[h++];
    Node* ac = vecini[actual];
    while(ac != NULL){
      if(visited[ac->val] == 0) {
        stiva[c++] = ac->val;
        visited[ac->val] = 1;
      }
      ac = ac->next;
    }
  }
  free(stiva);
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
  free(head);
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
  int* visited = (int*)malloc(sizeof(int) * (n+1));
  for(int i = 0; i < p; i++){
    visited[i] = 0;
  }

  //aici citesc muchiile
  for(int i = 0; i < m; i++){
    int st, dr;
    fscanf(input, "%d %d", &st, &dr);
    vecini[dr] = pushN(vecini[dr], st);
  }

  //aici citesc intersectiile cu bere
  int fin = 0;
  for(int i = 0; i < p; i++){
    int bere;
    fscanf(input, "%d", &bere);
    bfs(bere, vecini, visited, n);
  }
  for (int k = 1; k <= n; k++){
    if(visited[k] == 0){
      fin++;
    }
  }
  
  fprintf(output, "%d\n", fin);
  for(int i = 1; i <= n; i++){
    if(visited[i] == 0){
      fprintf(output, "%d\n", i);
    }
  }

  //aici afisez si sterg vecinii
  for(int i = 1; i <= n; i++){
    deleteList(vecini[i]);
  }

  return 0;
}
