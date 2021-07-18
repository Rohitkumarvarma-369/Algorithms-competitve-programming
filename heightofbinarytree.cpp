/*

Rohit Kumar Varma (@immortal_1 at codechef and codeforces)
Amrita Vishwa Vidyapeetham, Amritapuri


Finding the height if a binary tree.
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

int printheight(Node *root){

	if(root==NULL){
		return 0;
	}
	else{
		return (max(printheight(root->left), printheight(root->right)) +1);
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

    cout<<"The height of the above tree is: ";
    cout<<printheight(root);
    cout<<endl;
	
}