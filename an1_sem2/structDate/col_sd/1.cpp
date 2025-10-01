#include<iostream>
#include<vector>
using namespace std;

struct Node{
	int val;
	Node *st = nullptr;
	Node* dr = nullptr;
};

void inserare(Node* &head, int val){
	if(head == nullptr){
		head = new Node;
		head->val = val;
		return;
	}
	if(val < head->val){
		inserare(head->st, val);
	}else if(val > head->val){
		inserare(head->dr, val);
	}
}

int maxTree(Node* head){
	if(head->dr == nullptr){
		return head->val;
	}
	while(head->dr != nullptr){
		return maxTree(head->dr);
	}
	return -1;
}
int minTree(Node* head){
	if(head->st == nullptr){
		return head->val;
	}
	while(head->st != nullptr){
		return minTree(head->dr);
	}
	return -1;
}

int dif(Node* head){
	int m = maxTree(head);
	int mi = maxTree(head);
	return m-mi;

}

int main(){
	vector<int> a = {2,3,4,5};
	Node* head = nullptr;
	for(int c:a){
		inserare(head,c);
	}
	cout<<minTree(head);
	return 0;
}




int test_case(ABC* root) {
    int m;
    ABC* temp = root;
    while(temp->right != nullptr){
        temp = temp->right;
    }
    m = temp->info;
    int mi;
    temp = root;
    while(temp->left != nullptr){
        temp = temp->left;
    }
    mi  = temp->info;
    return m-mi;

    return 0;
}
