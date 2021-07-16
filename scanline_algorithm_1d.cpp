/*
Rohit Kumar Varma (@immortal_1)
Amrita University, Amritapuri, 2019-2023
Scanline algorithm 1d
*/


#include<bits/stdc++.h>
using namespace std;
#define for0(i, n) for (int i = 0; i < n; i++)
#define for1(i, n) for (int i = 1; i <= n; i++)
#define loop(i,a,b) for (int i = a; i < b; i++)
#define bloop(i,a,b) for (int i = a ; i>=b;i--)
int main(){
	int n;
	cin>>n;
	int array[n];
	for0(i,n){
		cin>>array[i];
	}

	//pre-processing
	int scanline[n+1] = {0};
	int q;
	cin>>q;
	while(q--){
		int l,r,x;
		cin>>l>>r>>x;
		scanline[l] = scanline[l]+x;
		scanline[r+1] = scanline[r+1]-x;
	}
	for0(i,n+1){
		cout<<scanline[i]<<" ";
	}
	cout<<endl;

	
	//post-processing
	int scan = 0;
	for0(i,n){
		scan = scan+scanline[i];
		array[i] = array[i]+scan;
	}
	for0(i,n){
		cout<<array[i]<<" ";
	}

}
