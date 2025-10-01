#include<iostream>

using namespace std;

struct node{
    int value;
    node* left;
    node* right;
};

void insert(node* head, int value){

    node* copy = head;
   
    //! Varianta 1
    //! Mai pot sa o fac cu node* insert si sa returnez nodul cu atriburie.. mai uita te acasa
    if(value <= copy->value && copy->left == NULL){
        copy->left = new node();
        copy->left->value = value;
        return ;
    }
    else if(value < copy->value){
        insert(copy->left, value);
    }
    else if(value > copy->value && copy->right == NULL){
        copy->right = new node();
        copy->right->value = value;
        return ;
    }
    else{
        insert(copy->right, value);
    }
}

node* succesor(node* head, node* x){

    node* suc;
    if(x->right == NULL){
        if(x->value < head->value){
            while(head->left != NULL){
                head = head->left;
            }
            return head;
        }
        else{
            while(head->left->value < x->value){
                head = head->right;
            }
            return head;
        }
    }
    else(x->right != NULL){
        suc = succesor(x->right, x);
        return suc;
    }
    if(head->value > x->value){
        if(head->left != NULL){
            suc = succesor(head->left, x);
        }
        return suc;
    }
}

int main(){


    return 0;
}