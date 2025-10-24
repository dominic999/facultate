#include <stdlib.h>
#include <stdio.h>

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


void bfs(int head, Node** vecini, int distante[], int n){
  int* stiva = (int*)malloc(sizeof(int)*(n+1));
  int h = 0;
  int c = 0;
  distante[head] = 0;
  stiva[c++] = head;
  while(c>h){
    int actual = stiva[h++];
    Node* ac = vecini[actual];
    while(ac != NULL){
      if(distante[ac->val] < 0) {
        stiva[c++] = ac->val;
        distante[ac->val] = distante[actual]+1;
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

void afisareList(Node* head){
  Node* cp = head;
  while(cp){
    printf("%d, ", cp->val);
    cp=cp->next;
  }
}


int main(){
  char path[] = "bfs.in";
  int n, m, s;
  FILE* file = fopen(path, "r");
  FILE* out = fopen("bfs.out", "w");
  fscanf(file, "%d %d %d", &n, &m, &s);
  Node** noduri = (Node**)malloc(sizeof(Node*)*(n+1));
  int* distante = (int*)malloc(sizeof(int)*(n+1));

  for(int i = 1; i <= n; i++){
    noduri[i] = NULL;
    distante[i] = -1;
  }

  for(int i = 0; i < m; i++){
    int st, dr;
    fscanf(file, "%d %d", &st, &dr);
    noduri[st] = pushN(noduri[st], dr);
  }

  bfs(s, noduri, distante, n);
  for(int i = 1; i <= n; i++){
    fprintf(out, "%d ", distante[i]);
  }
  // for(int i = 1; i <= n; i++){
  //   deleteList(noduri[i]);
  // }
  return 0;
}
