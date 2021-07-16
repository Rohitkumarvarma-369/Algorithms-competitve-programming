/*

Rohit Kumar Varma (@immortal_1 at codechef and codeforces)
Amrita Vishwa Vidyapeetham, Amritapuri

*/

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void iterativefactorial(ll n){
	ll factorialvar = 1;
	for(ll i=2;i<=n;i++){
		factorialvar = factorialvar*i;
	}
	cout<<"The factorial of the given number "<<n<<" is: "<<factorialvar<<endl;
}

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n;
    cin>>n;

    iterativefactorial(n);

	
}