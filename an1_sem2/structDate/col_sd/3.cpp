#include<iostream>
#include<vector>
using namespace std;

struct Node{
	int valRand, valCol;
	Node* next=nullptr;
};

void push(Node* &head, int vR, int vC){
	Node* nou = new Node();
	nou->valCol = vC;
	nou->valRand = vR;
	nou->next = head;
	head = nou;
}

void pop(Node* &head){
	Node* temp = head;
	head = head->next;
	delete(temp);
	temp=nullptr;
}

int main(){
	int N, M, K;
	cin>>N>>M>>K;
	int mat[N][M];
	for(int i = 0; i < N; i++){
		for(int j =0; j < M; j++){
			cin>>mat[i][j];
		}
	}
	
	return 0;
}
