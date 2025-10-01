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
	TreeNode* cp = nullptr;
	TreeNode* temp = root;
	while(temp != nullptr){
		if (val < temp->val){
			cp = temp;
			temp = temp->left;
		}else if(val > temp->val){
			cp = temp;
			temp = temp->right;
		}
		else if(val == temp->val){
				return cp;
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
	if(head == nullptr){
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

int gasireNumar(vector<int> a, int b){
	for (int i =0; i < a.size(); i++){
		if(a[i] == b){
			return i;
		}
	}
	return -1;
}

void remCoada(vector<TreeNode*> &coada){
	coada.erase(coada.begin());
}

bool isPowerOfTwo(unsigned int x) {
    return x != 0 && (x & (x - 1)) == 0;
}

int doi(int x){
	int count = 0;
	while(x!=0){
		x = x>>1;
		count++;
	}
	return count-1;
}

void bfs(TreeNode* root ,vector<vector<int>> &raspuns, vector<TreeNode*> &coada){
	if(root == nullptr){
		return ;
	}

	int count = 0;
	coada.push_back(root);
	raspuns.push_back({});
	TreeNode* copil = nullptr;
	int cop=0;
	while(coada.size() > 0){
		if(coada[0] == copil){
			raspuns.push_back({});
			count++;
			cop = 0;
		}
		raspuns[count].push_back(coada[0]->val);
		if(coada[0]->left != nullptr){
			coada.push_back(coada[0]->left);
			if(!cop){
				copil = coada[0]->left;
				cop=1;
			}
		
		}
		if(coada[0]->right != nullptr){
			coada.push_back(coada[0]->right);
			if(coada[0]->left == nullptr && !cop){
				copil = coada[0]->right;
				cop=1;
			}
		}
		remCoada(coada);
	};
}



int main(){
	vector<int> a = {5,3,7,2,4,1,6,10,9};
	TreeNode* root = nullptr;
	for(int c:a){
		insert(root,c);
	}
	vector<vector<int>> b;
	vector<TreeNode*> c;
	bfs(root, b, c);
	for(vector<int> c:b){
		cout<<"[ ";
		for(int d:c){
			cout<<d<<", ";
		}
		cout<<"] ";
	}
	cout<<endl;

		
	deleteTree(root);
	return 0;
}
