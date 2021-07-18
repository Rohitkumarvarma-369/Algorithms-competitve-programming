/*

Rohit Kumar Varma (@immortal_1 at codechef and codeforces)
Amrita Vishwa Vidyapeetham, Amritapuri

Print all the nodes of a binary tree in a level way or along the breadth of the tree line by line
*/

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

struct Node
{

	int key;
	Node *left;
	Node *right;

	Node(int k){
		key = k;
		left = NULL;
		right = NULL;
	}
	
};

void printlevel(Node *root){
	if(root==NULL){
		return;
	}

	else{

		queue<Node *>q;

		q.push(root);
		q.push(NULL);

		while(q.size()>1){
			Node *curr = q.front();
			q.pop();
			if(curr==NULL){
				cout<<"\n";
				q.push(NULL);
				continue;
			}
			cout<<curr->key<<" ";
			if(curr->left!=NULL){
				q.push(curr->left);
			}
			if(curr->right!=NULL){
				q.push(curr->right);
			}
		}
	}
}

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    Node *root = new Node(10);
    root->left = new Node(20);
    root->right = new Node(30);
    root->left->left = new Node(40);
    root->left->right = new Node(50);
    root->right->left = new Node(60);
    root->right->right = new Node(70);

    printlevel(root);

	
}