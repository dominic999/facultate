#include<iostream>
#include<vector>
using namespace std;




struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

void insert(TreeNode* &head, int val){

    if(head == nullptr){
		if(val == 0){
			cout<<"0"<<endl;
		}
        head = new TreeNode(val);
		return ;
    }
    TreeNode* temp = head;
    TreeNode* cp;
    while (temp != nullptr){
        cp = temp;
        if(val < temp->val){
            temp = temp->left;
        }else{
            temp = temp->right;
        }
    }
    TreeNode* nou = new TreeNode();
    if(val < cp->val){
        cp->left = nou;
        nou->val = val;
    }else{
        cp->right = nou;
        cp->right->val = val;
    }

}


void afisarePre(TreeNode* &head, vector<int> &a){
	if(!head){
		return;
	}
	a.push_back(head->val);	
  if(head->left != nullptr){
	afisarePre(head->left, a);
  }if(head->right != nullptr){
	afisarePre(head->right, a);
  }
}

void deleteTree(TreeNode* &head){
	if(head == nullptr){
		return ;
	}
	deleteTree(head->left);
	deleteTree(head->right);
	delete(head);
	head = nullptr;
}

int main(){

    vector<int> a = {0,2,3};
    TreeNode* head = nullptr;
	vector<int> b;
    for(int c: a){
        insert(head, c);
    }
	afisarePre(head, b);

    for(int c: b){
		cout<<c<<" ";
    }
	cout<<endl;


    return 0;
}

