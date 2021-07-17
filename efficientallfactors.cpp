/*

Rohit Kumar Varma (@immortal_1 at codechef and codeforces)
Amrita Vishwa Vidyapeetham, Amritapuri


Here we will print all factors of a given number in sorted order directly using the most efficient method, cause the naive method is too naive :xd

naive method: we can just iterate over the numbers from 2 to n-1 and find the numbers which divide perfectly, i.e. gives a remainder zero
efficient method: we can iterate from 2 to sq.root(n) (exclusive) and then back from sq.root(n) to 1 to print other half of the pairs of factors

*/

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void printDivisors(int n)
{// to print in sorted order
	int i = 1;
	for(i=1; i*i < n; i++)
	{
		if(n % i == 0)
		{
			cout<<i<<" ";
		}
	}

	for(; i >= 1; i--)
	{
		if(n % i == 0)
		{
			cout<<(n / i)<<" ";
		}
	}
}
int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin>>n;

    printDivisors(n);

	
}