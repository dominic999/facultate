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

void delNode(TreeNode* &root, int val){
	int st=0;
	TreeNode* par = search(root, val);
	TreeNode* deSters;
	vector<int> ordine;
	inorder(root, ordine);

	if(par == nullptr){
		deSters = root;
	}
	if(par!=nullptr && par->val > val){
	  deSters = par->left;
	  st = 1;
	}else if(par!=nullptr &&  par->val < val){
	  deSters = par->right;
	}
	TreeNode* temp = deSters;
	// Daca nu are copii
	if (deSters->left == nullptr && deSters->right == nullptr){
	  delete(deSters);
	  if(par!=nullptr){
			  if(st){
				par->left = nullptr;
				}
			  else{
				par->right = nullptr;
				}
		}
	  deSters = nullptr;
	  return;
	}
	//Daca are doar copil stang
	else if(deSters->left != nullptr && deSters->right == nullptr){
	  if(st){
	  	par->left = deSters->left;
	  }else{
	  	par->right = deSters->left;
	  }
	  delete(temp);
	  temp = nullptr;
	}
	//Daca are doar copil dreapta
	else if(deSters->right != nullptr && deSters->left == nullptr){
		
		if(par != nullptr){
			  if(st){
				par->left = deSters->right;
			  }else{
				par->right = deSters->right;
			  }
		}else{
			root = deSters->right;
		}
	  delete(temp);
	  temp = nullptr;
	}
	//Daca are doi copii
	else if(deSters->right != nullptr && deSters->left != nullptr){
		//Prima oara ii gasim succesorul
		int indexSuucesor = gasireNumar(ordine, val)+1;
		//Acum gasim ala care pointuieste la el
		if(indexSuucesor < ordine.size()-1){
			//Aici am gasit unde se afla parintele nodului succesor, pe care urmeaza sa il steg
			TreeNode* nou = search(root, ordine[indexSuucesor]);
			//Aici il sterg
			delNode(nou->left, ordine[indexSuucesor]);
		}
		//Aici schim valoarea nodului cu valoarea succesorului
		deSters->val = ordine[indexSuucesor];
	}
}


int main(){
	
	vector<int> a = {5,3,6,2,4,7};
	TreeNode* head = nullptr;
	for (int c:a){
		insert(head, c);
	}
	vector<int> b;
	vector<int> d;
	afisarePre(head, b);
	for (int c:b){
		cout<<c<<" ";
	}
	cout<<endl;
	delNode(head, 4);
	afisarePre(head, d);
	for (int c:d){
		cout<<c<<" ";
	}
	cout<<endl;

	deleteTree(head);

	return 0;
}
