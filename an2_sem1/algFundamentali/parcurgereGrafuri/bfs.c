#include <_stdlib.h>
#include <stdlib.h>
#include <math.h>
#include <stdlib.h>
#include <stdio.h>

typedef struct Node{
  int val;
  struct Node* next;
  char cul;
  int d;
  int parinte;
}Node;

typedef struct Stiva{
  int nod;
  struct Stiva* next;
}Stiva;

void afisareStiva (Stiva* head){
  if(head == NULL){
    return;
  }
  if(head->next!=NULL){
    afisareStiva(head->next);
  }
}

Stiva* pushStiva(Stiva* head, int nod){
  if(head == NULL){
    Stiva* newNode = (Stiva* )malloc(sizeof(Stiva));
    newNode->next = NULL;
    newNode->nod = nod;
    return newNode;
  }
  Stiva* newNode = (Stiva* )malloc(sizeof(Stiva));
  newNode->nod = nod;
  Stiva* cp = head;
  while(cp->next){
    cp = cp->next;
  }
  cp->next = newNode;
  return head;
}

int popStiva(Stiva** head){
  if(*head == NULL){
    return -1;
  }
  if((*head)->next == NULL){
    int ret = (*head)->nod;
    free(*head);
    *head = NULL;
    return ret;
  }
  Stiva* cp = *head;
  Stiva* urm = (*head)->next;
  while(urm->next) {
    cp = cp->next;
    urm = urm->next;
  }
  int ret = urm->nod;
  free(urm);
  cp->next = NULL;
  return ret;
}

Node* append(Node* head, int val){
  if(head == NULL){
    Node* newNode = (Node* )malloc(sizeof(Node));
    newNode->val = val;
    newNode->cul = 'w';
    return newNode;
  }
  Node* newNode = (Node* )malloc(sizeof(Node));
  newNode->val = val;
  newNode->cul = 'w';
  Node* cp = head;
  while(cp->next){
    cp = cp->next;
  }
  cp->next = newNode;
  return head;
}

void afisareLista(Node* head){
  if(head->next == NULL){
    return;
  }
  Node* cp = head;
  while(cp){
    printf("%d, distanta: %d, parinte: %d ", 
           cp->val+1, cp->d, cp->parinte+1);
    cp=cp->next;
    printf("\n");
  }
}

void eliberareLista(Node* head){
  if(head == NULL) return;
  if(head->next == NULL){
    free(head); 
    return ;
  }
  Node* cp = head->next;
  while(cp){
    free(head);
    head = cp;
    cp = cp->next;
  }
  free(head);
}

void BFS(Node** noduri, int root){
  noduri[root]->parinte = -1;
  FILE* afisare = fopen("BFS.out", "w");
  fprintf(afisare, "%d ", noduri[root]->val+1);
  noduri[root]->cul = 'g';
  noduri[root]->d = 0;
  Stiva* stiva = NULL;
  stiva = pushStiva(stiva, root);
  // printf("stiva dupa adaugare: \n");
  // afisareStiva(stiva);
  while(stiva != NULL){
    int actual = popStiva(&stiva);
    // printf("stiva dupa scoatere: \n");
    // afisareStiva(stiva);
    Node* vecini;
    if(noduri[actual]->next){
      vecini = noduri[actual]->next;
    }
    while(vecini){
      if(noduri[vecini->val]->cul == 'w'){
        fprintf(afisare, "%d ", vecini->val+1);
        noduri[vecini->val]->cul = 'g';
        noduri[vecini->val]->d = noduri[actual]->d + 1;
        noduri[vecini->val]->parinte = actual;
        stiva = pushStiva(stiva, vecini->val);
        // printf("stiva dupa adaugare: \n");
        // afisareStiva(stiva);
      }
      vecini = vecini->next;
    }
    noduri[actual]->cul = 'b';
  }
  printf("\n");
}

int main(){
  char path[] = "BFS.in";
  int n, m, X;
  FILE* file = fopen(path, "r");
  fscanf(file, "%d %d %d", &n, &m, &X);
  int code, st, dr;
  Node** noduri = (Node** )malloc(sizeof(Node*)*n);
  //aici initializez listele
  for(int i = 0; i < n; i++){
    noduri[i] = append(noduri[i], i);
  }
  //aici creez listele de adiacenta
  while((code = fscanf(file, "%d %d", &st, &dr)) 
            == 2){
    noduri[st-1] = append(noduri[st-1], dr-1);
    noduri[dr-1] = append(noduri[dr-1], st-1);
  }

  BFS(noduri, X-1);
  //aici le eliberez
  for(int i = 0; i < n; i++){
    eliberareLista(noduri[i]);
  }
  free(noduri);
  
  return 0;
}
