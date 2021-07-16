/*

Rohit Kumar Varma (@immortal_1 at codechef and codeforces)
Amrita Vishwa Vidyapeetham, Amritapuri

*/




#include<bits/stdc++.h>
using namespace std;
typedef long long ll;


void checkpalindromenumber(int n){
	
	int rev = 0;
	int mainnotemp = n;
	while(n!=0){
		int curr = n%10;
		rev = (rev*10)+curr;//forming a reverse number with all the individual digits
		n = n/10;
	}

	if(rev==mainnotemp){
		cout<<"Yes the given number is a palindrome"<<endl;
	}	 
	else{
		cout<<"No this number is not a palindrome"<<endl;
	}

}


int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin>>n;

    checkpalindromenumber(n);
	
}