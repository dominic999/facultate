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

void remCoada(vector<TreeNode*> &coada){
	coada.erase(coada.begin());
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

int gasireVal(vector<int> a, int val){
	

	for (unsigned int i =0; i < a.size(); i++){
		if (a[i] == val){
			return i;
		}
	}
	return -1;
}

TreeNode* construct(TreeNode* &root, vector<int> in, vector<int> pre, int &count){
	if(root == nullptr){
		root = new TreeNode();
		root->val = pre[count];
	}
	//fac un vector pentru cei din stanga si unul pentru cei din dreapta
	int ind = gasireVal(in, pre[count]);
	vector<int> arboreStang(in.begin(), in.begin()+ind);
	vector<int> arboreDrept(in.begin()+ind+1, in.end());
	TreeNode* stang = nullptr;
	TreeNode* drept = nullptr;
	if(arboreStang.size() > 0){
		root->left = construct(stang, arboreStang, pre, ++count);
	}
	if(arboreDrept.size() > 0){
		root->right = construct(drept, arboreDrept, pre, ++count);
	}
	return root;

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
	vector<int> pre = {3,9,20,15,7};
	vector<int> in = {9,3,15,20,7};
	TreeNode* head = nullptr;
	int count = 0;
	cout<<"merge"<<endl;
	construct(head, in, pre, count);
	//for (int c:a){
		//insert(head, c);
	//}
	vector<TreeNode*> coada;
	vector<vector<int>> b;
	bfs(head, b, coada);
	for(vector<int> c:b){
			for(int d:c){
				cout<<d<<" ";
			}
			cout<<endl;
	}
	deleteTree(head);

	return 0;
}
