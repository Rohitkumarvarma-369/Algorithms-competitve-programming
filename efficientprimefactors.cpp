/*

Rohit Kumar Varma (@immortal_1 at codechef and codeforces)
Amrita Vishwa Vidyapeetham, Amritapuri

Here we are making the previous naive solution more efficient by solving two of the main factors for increasing the time complexity:

1. Reduce the time complexity in the previous method to check if the number is a prime number, we can do that by using the efficient prime check function
which we already implemented (the one where we run from 2 to sq.root(n) and optimize it with all other checks to decrease the for loop steps)

2. Reduce the number n for every prime factor found rather than checking for each probable factor individually like we did before

*/

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void efficientprimefactors(int n){
	if(n <= 1)
		cout<<"Enter a valid number to get the prime factors";

	while(n % 2 == 0)
	{
		cout<<2<<" ";

		n = n / 2;
	}

	while(n % 3 == 0)
	{
		cout<<3<<" ";

		n = n / 3;
	}

	for(int i=5; i*i<=n; i=i+6)
	{
		while(n % i == 0)
		{
			cout<<i<<" ";

			n = n / i;
		}

		while(n % (i + 2) == 0)
		{
			cout<<(i + 2)<<" ";

			n = n / (i + 2);
		}
	}

	if(n > 3)
		cout<<n<<" ";

	cout<<endl;



}

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin>>n;

    efficientprimefactors(n);

	
}