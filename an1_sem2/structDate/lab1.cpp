#include<iostream>

using namespace std;

struct node{
    int val;
    node *next;
};



void adaugare(node *&head, int el){
    node *new_head;
    new_head->next = head;
    new_head->val = head->val;
    head = new_head;
}

void elminareDupe(node *&head){



    node *p = head;

        
    while(p->next){
        int ok = 0;
        if(p->val == p->next->val){
            node *newNode ;
            newNode = p->next;
            p->next = p->next->next;
            delete newNode;
            ok = 1;
            
        }
        if(ok == 0){
            p = p->next;
        }

    }


}

int main(){

    node * primu = NULL;

    
    
    return 0;
}
