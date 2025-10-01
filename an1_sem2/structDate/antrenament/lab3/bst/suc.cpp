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


TreeNode* search(TreeNode* root, int val){
	TreeNode* cp;
	TreeNode* temp = root;
	while(temp != nullptr){
		if (val < temp->val){
			cp = temp;
			temp = temp->left;
		}else if(val > root->val){
			cp = temp;
			temp = temp->right;
		}
	}
	if(temp == nullptr){
		return nullptr;
	}
	return cp;
}

void deleteTree(TreeNode* &head){
	if(head == nullptr){
		return ;
	}
	deleteTree(head->left);
	deleteTree(head->right);
	delete(head);
	//head = nullptr;
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

void inorder(TreeNode* root, vector<int> &a){
	if(root->left != nullptr){
		inorder(root->left, a);
	}
	a.push_back(root->val);
	if(root->right != nullptr){
		inorder(root->right, a);
	}
}


int main(){
	vector<int> a = {1,4,2,3,93,21,25};
	TreeNode* head = nullptr;
	for (int c:a){
		insert(head, c);
	}
	vector<int> b;
	inorder(head, b);
	for(int c:b){
		cout<<c<<" ";
	}
	cout<<endl;
	return 0;
}
