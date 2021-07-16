/*

Rohit Kumar Varma (@immortal_1 at codechef and codeforces)
Amrita Vishwa Vidyapeetham, Amritapuri

Finding number of trailing zeroes in a number's factorial

Here we will be finding the number of trailing zeroes in a factorial of a number
using naive solution we can just find the factorial and the find the number of 
zeroes by running through the factorial by n%10 but this results in overflow of 
digits even if the value of n is slightly high, so an efficient approach is needed.

Efficient approach:
We take the prime factorization of the number n and only the numbers (2,5) results in 10
which results in a single trailing zero, so finding the number of pairs (2,5) we can get
the numner of zeroes, another fact here is as every second number is a multiple of 2 the
number of 2's will be greater then 5's, so finding the number of 5's is enought to get the
number of trailing zeroes in the final factorial. To find the number 5's we need to break
the number into different regions, for example the no is 251, then:

region1: when we divide 251 for every 5th number i.e. floor(251/5), we get no of multiples of 5
like 5,10,15,20,etc.

but if you observer 25 has two 5's and 125 have 3 5's so to cover those cases we take:
region2: floor(251/25)
region3: floor(251/125)

anything greater than n is not needed so greater than 125, ie. 625, etc are not considered.
*/

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void findtrailingzeroes(ll n){

	int trailingzeroes = 0;

	for(int i=5;i<=n;i=i*5){
		trailingzeroes = trailingzeroes+(n/i);
	}

	cout<<"The number of trailing zeroes in the number "<<n<<" are: "<<trailingzeroes<<endl;
}

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n;
    cin>>n;

    findtrailingzeroes(n);

	
}