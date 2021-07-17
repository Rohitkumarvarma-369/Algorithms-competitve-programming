/*

Rohit Kumar Varma (@immortal_1 at codechef and codeforces)
Amrita Vishwa Vidyapeetham, Amritapuri


Naive approach to check if a given number is a prime number, by traversing from 2 to n-1, time complexity: O(n)
*/

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

string checkifprime(int n){

	for(int i=2;i<n;i++){
		if(n%i == 0){

			return "false";

		}
	}

	return "true";
}

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin>>n;
    cout<<checkifprime(n)<<endl;
	
}