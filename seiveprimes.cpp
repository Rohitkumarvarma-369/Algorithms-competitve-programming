/*

Rohit Kumar Varma (@immortal_1 at codechef and codeforces)
Amrita Vishwa Vidyapeetham, Amritapuri


Here we are creating a simple sieve or an array of boolean and pre assigning if the number's index is a prime or composite.
*/

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void sieve(int n){
	if(n <= 1)
		return;

	bool isPrime[n+1];

	fill(isPrime, isPrime + n + 1, true);

	for(int i=2; i*i <= n; i++)
	{
		if(isPrime[i])
		{
			for(int j = 2*i; j <= n; j = j+i)
			{
				isPrime[j] = false;
			}
		}
	}

	for(int i = 2; i<=n; i++)
	{
		if(isPrime[i])
			cout<<i<<" ";
	}
}
int main(){
    
    	int n;
    	cin>>n;

		sieve(n);
}