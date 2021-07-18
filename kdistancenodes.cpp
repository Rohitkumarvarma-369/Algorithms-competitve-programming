/*

Rohit Kumar Varma (@immortal_1 at codechef and codeforces)
Amrita Vishwa Vidyapeetham, Amritapuri

Print all the nodes at a distance of k levels from the root node
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

void kdistancenodes(Node *root, int k){

	if(root==NULL){
		return;
	}
	else{
		if(k==0){
			cout<<root->key<<" ";
		}
		else{
			kdistancenodes(root->left, k-1);
			kdistancenodes(root->right, k-1);
		}
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

	int k;
	cin>>k;

	kdistancenodes(root,k);
	
}