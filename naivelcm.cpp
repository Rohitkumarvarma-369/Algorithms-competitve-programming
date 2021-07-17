/*

Rohit Kumar Varma (@immortal_1 at codechef and codeforces)
Amrita Vishwa Vidyapeetham, Amritapuri

Naive solution to find the lcm of two numbers: LCM of two numbers a and b always lies between the range [(max(a,b)), (a*b)]
time complexity: O((a*b)-max(a,b))
*/

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void findlcmnaive(int a, int b){

	int maxi = max(a,b);

	for(int i=maxi;i<=(a*b);i++){

		if((i%a==0) && (i%b==0)){
			cout<<"The LCM of the numbers "<<a<<" and "<<b<<" is: "<<i<<endl;
			break;
		}

	}
}


int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int a,b;
    cin>>a>>b;

    findlcmnaive(a,b);

	
}