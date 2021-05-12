/*
Rohit Kumar Varma (@immortal_1)
Amrita University, Amritapuri, 2019-2023
Prefix sum
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
	int arr[n];
	for0(i,n){

		cin>>arr[i];

	}

	//pre-processing
	int prefixsumarray[n] = {0};
	for0(i,n){
		if(i==0){

			prefixsumarray[i] = arr[i];

		}

		else{

			prefixsumarray[i] = arr[i]+prefixsumarray[i-1];
		}


	}

	int q;
	cin>>q;
	while(q--){
		int a,b;
		cin>>a>>b;
		if(a==0){
			cout<<"sum is: "<<prefixsumarray[b]<<endl;
		}
		else{
			cout<<"sum is: "<<prefixsumarray[b]-prefixsumarray[a-1]<<endl;
		}
	}



}
