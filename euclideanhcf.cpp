/*

Rohit Kumar Varma (@immortal_1 at codechef and codeforces)
Amrita Vishwa Vidyapeetham, Amritapuri


Optimised Euclidean algorithm to find the hcf of two numbers
*/

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;


int findHCFusingEuclidean(int a, int b){

	if(b==0){
		return a;
	}
	else{
		return findHCFusingEuclidean(b, a%b);
	}

}

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int a,b;
    cin>>a>>b;

    int HCF = findHCFusingEuclidean(a,b);
    cout<<"The hcf of "<<a<<" and "<<b<<" is: "<<HCF<<endl;

	
}