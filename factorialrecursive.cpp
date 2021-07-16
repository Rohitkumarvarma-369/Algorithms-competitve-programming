/*

Rohit Kumar Varma (@immortal_1 at codechef and codeforces)
Amrita Vishwa Vidyapeetham, Amritapuri

Recursive approach to find the factorial of a number

*/

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

ll recursivefactorial(ll n){
	if(n==0){
		return 1;
	}
	else{
		return(recursivefactorial(n-1) * n);
	}
}


int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n;
    cin>>n;

    ll var = recursivefactorial(n);
    cout<<"The factorial of the given number "<<n<<" is: "<<var<<endl;

	
}