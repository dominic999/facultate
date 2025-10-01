#include<iostream>
#include<vector>

using namespace std;

struct Node{
    Node* next = nullptr;
    int val;
    int ind;
};

void afisareStack(Node* head){
    Node* temp = head;
    while(temp != nullptr){
        cout<<temp->ind<<": "<<temp->val<<" | ";
        temp=temp->next;
    }
    cout<<endl;
}

void push(Node* &head, int val, int ind){
    if(!head){
        head = new Node;
        head->next = nullptr;
        head->val = val;
        head->ind = ind;
        return;
    }
    Node* nou = new Node;
    nou->next = head;
    nou->val = val;
    nou->ind = ind;
    head = nou;
}

void pop(Node* &head){
    if (head == nullptr){
        return;
    }
    Node* temp = head;
    head = head->next;
    delete(temp);
    temp = nullptr;
}

vector<int> undeAdaug(Node* &stack, int val, int ind){
    vector<int> minCount = {10001, 0};
    while(stack!=nullptr &&  val < stack->val){
        if(stack->val < minCount[0]){
            minCount[0] = stack->val;
        }
        minCount[1]++;
        pop(stack);
    }
    push(stack, val, ind);
    afisareStack(stack);
    return minCount;
}

int lungimeRamasa(Node* &stack){
    int lun = 0;
    Node* temp = stack;
    while(temp->next!=nullptr){
        lun++;
        temp=temp->next;
    }
    return (lun+1)*temp->val;
}

int largest(vector<int> heights){
    vector<int> minCount;
    int ind = 0;
    vector<int> lungimi;
    int minim, indexMinim;
    Node* h = nullptr;
    int lungime, lungimeMax = 0;
    for (int c : heights){
        minCount = undeAdaug(h, c, ind);
        //! minCount[0] = min,coumt
        if(minCount[1] > 0){
            lungime = minCount[0] * minCount[1];
        }
        if(lungime > lungimeMax){
            lungimeMax = lungime;
        }
    }
    // if(h != nullptr){
    //     int l = lungimeRamasa(h);
    //     if(l > lungimeMax){
    //         lungimeMax = l;
    //     }
    // }
    return lungimeMax;
}

int main(){
    vector<int> lun = {2,1, 5, 6, 2, 3};
    cout<<largest(lun);

    return 0;
}
    //     if(h->next = nullptr){
    //         minim = h->val;
    //         indexMinim = h->ind;
    //     }
    //     if(minCount[0] < 10001){
    //         if(h->next != nullptr){
    //             lungime = h->ind - h->next->ind - 1;
    //             lungime *= minCount[0];
    //         }else {
    //             lungime = minCount[1] * minCount[0];
    //         }
    //         if(lungime > lungimeMax){
    //             lungimeMax = lungime;
    //         }
    //     }
    //     ind++;
    // }
    // if(h){
    //     lungime = minim * (h->ind - indexMinim - 1);
    // }
    // if(lungime > lungimeMax){
    //     lungimeMax = lungime;