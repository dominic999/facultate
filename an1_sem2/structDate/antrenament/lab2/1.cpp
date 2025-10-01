#include<iostream>
#include<cstring>

using namespace std;

struct Node{
    Node* next = nullptr;
    char val;
};

void push(Node* &head, char s){
    if(head == nullptr){
        head = new Node();
        head->val = s;
        head->next = nullptr;
        return;
    }
    Node* nou = new Node();
    nou->val = s;
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


bool isValid2(Node* &head, string s){
    string open = "{[(";
    string closed = "}])";
    int index;
    for (char c : s){
        if (open.find(c) < open.size()){
            push(head, c);
        }else{
            if(head == nullptr){
                return false;
            }
            index = closed.find(c);
            if(head->val != open[index]){
                return false;
            }
            pop(head);
        }
        
    }
    if(head != nullptr){
        return false;
    }
    return true;
}

int main(){

    string s;
    cin>>s;
    Node* head = nullptr;
    if(isValid2(head, s)){
        cout<<"bun";
    }else{
        cout<<"NU";
    }
    
    delete(head);

    return 0;
}