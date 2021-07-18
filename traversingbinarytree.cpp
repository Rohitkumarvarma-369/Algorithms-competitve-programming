/*

Rohit Kumar Varma (@immortal_1 at codechef and codeforces)
Amrita Vishwa Vidyapeetham, Amritapuri


Here we will see hoe to implement a binary tree using linked lists approach and traverse it

There are three ways to traverse a tree:

Breadth-first (BFS): Travel line by line from leftmost to rightmost and then move on to the next line
Depth-first(DFS): Travel from the top of the tree to bottom of the tree, here there are three different methoods you can follow:
	1. Inorder	:	LEFT-ROOT-RIGHT
	2. Preorder :	ROOT-LEFT-RIGHT
	3. Postorder:	LEFT-RIGHT-ROOT

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

void printinorder(Node *root){

	if(root!=NULL){
		printinorder(root->left);
		cout<<root->key<<" ";
		printinorder(root->right);
	}

}

void printpreorder(Node *root){

	if(root!=NULL){
		cout<<root->key<<" ";
		printpreorder(root->left);
		printpreorder(root->right);
	}

}
void printpostorder(Node *root){

	if(root!=NULL){
		printpostorder(root->left);
		printpostorder(root->right);
		cout<<root->key<<" ";
	}

}

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);

	Node *root=new Node(10);
	root->left=new Node(20);
	root->right=new Node(30);
	root->right->left=new Node(40);
	root->right->right=new Node(50);

	cout<<"Inorder: ";
    printinorder(root);
    cout<<endl;
    cout<<"Preorder: ";
    printpreorder(root);
    cout<<endl;
    cout<<"Postorder: ";
    printpostorder(root);
    cout<<endl;

	
}