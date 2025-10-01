#include<iostream>
#include<vector>

using namespace std;


struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

void adaugaLista(ListNode* &head, int v){
    if (head == nullptr){
        head = new ListNode(v);
        return;
    }
    ListNode* temp = head;
    while(temp->next != nullptr){
        temp = temp->next;
    }
    temp->next = new ListNode(v);
}

void afisareLista(ListNode* head){
    ListNode* temp = head;
    while(temp != nullptr){
        cout<<temp->val<<" ";
        temp=temp->next;
    }
}

struct Node{
    Node* next = nullptr;
    int val, ind;
};

void afisareStack(Node* head){
    Node* temp = head;
    while(temp != nullptr){
        cout<<temp->ind<<": "<<temp->val<<" | ";
        temp=temp->next;
    }
}

void push(Node* &head, int s, int i){
    if(head == nullptr){
        head = new Node;
        head->val = s;
        head->ind = i;
        head->next = nullptr;
        return;
    }
    Node* nou = new Node();
    nou->val = s;
    nou->ind = i;
    nou->next = head;
    head = nou;
}

void pop(Node* &head){
    if(head == nullptr){
        return ;
    }
    Node *temp = head;
    head = head->next;
    delete(temp);
    temp = nullptr;
}

int adaugareArray(Node* &stack, int val, int i){
    int counter=0;
    while(stack != nullptr && val > stack->val){
        pop(stack);
        counter++;
    }
    push(stack, val, i);
    return counter;
}

vector<int> verif(ListNode* &head){
    ListNode* temp = head;
    Node* h = nullptr;
    vector<int> answers;   
    int counter = 0;
    int ind=0;
    int scosi=0;
    while (temp != nullptr){
        answers.push_back(0);
        scosi = adaugareArray(h, temp->val, counter);
        if(h->next && scosi){
            for(int i = h->ind-1; i>h->next->ind; i--){
                if(answers[i] == 0){
                    answers[i] = temp->val;
                }
            }
        }
        else if(!h->next && scosi){
            for(int i = h->ind-1; i>=0; i--){
                if(answers[i] == 0){
                    answers[i] = temp->val;
                }
            }
        }
        counter++;
        temp=temp->next;
    }
    return answers;
}

int main(){

    ListNode* head = new ListNode(2);
    adaugaLista(head, 7);
    adaugaLista(head, 4);
    adaugaLista(head, 3);
    adaugaLista(head, 5);
    vector<int> answers = verif(head);
    for(int c:answers){
        cout<<c<<" ";
    }
    cout<<endl;
    return 0;
}