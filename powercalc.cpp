/*

Rohit Kumar Varma (@immortal_1 at codechef and codeforces)
Amrita Vishwa Vidyapeetham, Amritapuri


Calculate the power of a given number
*/

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int powerfunc(int x, int n)
{
	if(n == 0)
		return 1;

	int temp = powerfunc(x, n/2);

	temp = temp * temp;

	if(n % 2 == 0)
		return temp;
	else
		return temp * x; 
}

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int base, powervalue;

    cin>>base>>powervalue;

    cout<<powerfunc(base,powervalue)<<endl;

	
}