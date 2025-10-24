#include <stdlib.h>
#include <stdio.h>

typedef struct Node {
    int val;
    struct Node* next;
    char cul;
    int d;
    int parinte;
} Node;

Node* append(Node* head, int val) {
    if (head == NULL) {
        Node* h = (Node*)malloc(sizeof(Node));
        if (!h) { perror("malloc"); exit(1); }
        h->val = val;
        h->next = NULL;
        h->cul = 0; h->d = 0; h->parinte = -1;
        return h;
    }
    Node* cp = head;
    while (cp->next) cp = cp->next;

    Node* newNode = (Node*)malloc(sizeof(Node));
    if (!newNode) { perror("malloc"); exit(1); }
    newNode->val = val;
    newNode->next = NULL;
    newNode->cul = 0; newNode->d = 0; newNode->parinte = -1;

    cp->next = newNode;
    return head;
}

void afisareLista(Node* head) {
    for (Node* p = head; p; p = p->next) {
        printf("%d ", p->val);
    }
    printf("\n");
}

void eliberareLista(Node* head) {
    while (head) {
        Node* tmp = head->next;
        free(head);
        head = tmp;
    }
}

int main(void) {
    const char* path = "BFS.in";
    FILE* input = fopen(path, "r");
    if (!input) { perror("fopen"); return 1; }

    int n, m, X;
    if (fscanf(input, "%d", &n) != 1) { fprintf(stderr, "Eroare n\n"); return 1; }

    Node** noduri = (Node**)malloc(sizeof(Node*) * n);
    if (!noduri) { perror("malloc noduri"); return 1; }
    for (int i = 0; i < n; i++) noduri[i] = NULL;

    if (fscanf(input, "%d", &m) != 1) { fprintf(stderr, "Eroare m\n"); return 1; }
    if (fscanf(input, "%d", &X) != 1) { fprintf(stderr, "Eroare X\n"); return 1; }

    int st, dr;
    while (fscanf(input, "%d %d", &st, &dr) == 2) {
        // Dacă fișierul are noduri 1-based, normalizează la 0-based:
        st--; dr--;
        if (st < 0 || st >= n || dr < 0 || dr >= n) {
            fprintf(stderr, "Arc în afara limitelor: %d %d\n", st+1, dr+1);
            continue;
        }
        noduri[st] = append(noduri[st], dr);
    }
    fclose(input);

    // Exemplu afișare primele liste (doar dacă nu-s NULL)
    for (int i = 0; i < n; i++) {
        if (noduri[i]) {
            printf("Lista pentru %d: ", i);
            afisareLista(noduri[i]);
        }
    }

    // Eliberare corectă
    for (int i = 0; i < n; i++) {
        eliberareLista(noduri[i]);
    }
    free(noduri);

    return 0;
}
