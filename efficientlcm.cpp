/*

Rohit Kumar Varma (@immortal_1 at codechef and codeforces)
Amrita Vishwa Vidyapeetham, Amritapuri

Efficient approach to find the lcm of two numbers using the relation a*b = gcd(a,b)*lcm(a,b);
time complexity: as the only function we are using here is to find the gcd so the time complexity is reduced to O(log(min(a,b)))
*/

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int findgcd(int a, int b){

	if(b==0){
		return a;
	}
	else{
		return findgcd(b,a%b);
	}

}

void efficientLCM(int a,int b){

	int gcdvar = findgcd(a,b);
	int mul = a*b;

	int lcmvar = mul/gcdvar;

	cout<<"The LCM of the numbers "<<a<<" and "<<b<<" is: "<<lcmvar<<endl;

}

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int a,b;
    cin>>a>>b;

    efficientLCM(a,b);


	
}