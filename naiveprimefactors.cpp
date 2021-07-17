/*

Rohit Kumar Varma (@immortal_1 at codechef and codeforces)
Amrita Vishwa Vidyapeetham, Amritapuri

Here we are finding the prime factors of a given number using naive approach just running a loop from 2 to n-1 and check for each number if it is a prime
number and if it is a prime number then we can see how many times it divides the number till the remainder reaches zero, and then continue dividing with the
next prime number.
Time complexity: O((n^2)*logn)

*/

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;


bool isprime(int n){

	for(int i=2;i<n;i++){
		if(n%i == 0){

			return false;

		}
	}

	return true;
}

void allprimefactors(int n){

	bool checker = false;

	for(int i=2;i<n;i++){
		if(isprime(i)){
			int primecurrpower = i;

			while(n%primecurrpower==0){
				checker = true;
				cout<<i<<" ";
				primecurrpower = i*primecurrpower;
			}
		}
	}

	if(checker==false){
		cout<<"The prime factors are 1 and "<<n<<" itself, no other prime factors"<<endl;
	}


}

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin>>n;

    allprimefactors(n);
}
