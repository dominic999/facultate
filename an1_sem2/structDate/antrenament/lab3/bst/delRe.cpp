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

void inorder(TreeNode* root, vector<int> &a){
	if(root == nullptr){
		return;
	}
	if(root->left != nullptr){
		inorder(root->left, a);
	}
	a.push_back(root->val);
	if(root->right != nullptr){
		inorder(root->right, a);
	}
}

void del(TreeNode* &root, TreeNode* &par, int val){
	if(root == nullptr){
		return ;
	}
	TreeNode* sters;
	if (val < root->val){
		del(root->left, root, val);
	}else if(val > root->val){
		del(root->right, root, val);
	}else{
		//Daca nu are copii
		if(root->right == nullptr && root->left == nullptr){
			if(root->val < par->val){
				par->left = nullptr;
			}else if(root->val > par->val){
				par->right = nullptr;
			}
			delete(root);
			root = nullptr;
			
			return;
		}
		//Daca are doar copil stanga
		else if(root->left != nullptr && root->right == nullptr){
			TreeNode* temp;
			if(root == par){
				temp = root;
				root = root->left;
				delete(temp);
				temp = nullptr;
				return;
			}
			//Daca e copil stang
			if(root->val < par->val){
				temp = root;
				par->left = root->left;
				delete(temp);
				temp = nullptr;
				return;
			}
			//Daca e copil drept
			else if(root->val > par->val){
				temp = root;
				par->right= root->left;
				delete(temp);
				temp = nullptr;
				return;
			}
		}
			
		//Daca are doar copl drept
		else if(root->right != nullptr && root->left == nullptr){
			TreeNode* temp;
			if(root == par){
				temp = root;
				root = root->right;
				delete(temp);
				temp = nullptr;
				return;
			}
			//Daca e copil stang
			if(root->val < par->val){
				temp = root;
				par->left = root->right;
				delete(temp);
				temp = nullptr;
				return;
			}
			//Daca e copil drept
			else if(root->val > par->val){
				temp = root;
				par->right= root->right;
				delete(temp);
				temp = nullptr;
				return;
			}
		}
		//Daca are ambii copii
		else if(root->left != nullptr && root->right != nullptr){
			//ii gasesc succesorul
			TreeNode* suc = root->right;
			TreeNode* parSuc = root;
			while(suc->left != nullptr){
				parSuc = suc;
				suc = suc->left;
			}
			int v = suc->val;
			del(suc, parSuc, suc->val);
			cout<<endl;
			root->val = v;
		}
	}
	
}

void deleteTree(TreeNode* &head){
	if(head == nullptr){
		return ;
	}
	if(head->left!=nullptr){
					deleteTree(head->left);
	}
	if(head->right != nullptr){
					deleteTree(head->right);
	}
	delete(head);
	head = nullptr;
}

int main(){
	vector<int> a = {5,3,6,2,1,4,7};
	TreeNode* head = nullptr;
	TreeNode* parent = head;
	for (int c:a){
		insert(head, c);
	}
	del(head, parent, 3);
	vector<int> b;
	inorder(head, b);
	for(int c:b){
	 cout<<c<<" ";
	}
	cout<<"merge";
	deleteTree(head);

	return 0;
}
