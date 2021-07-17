/*

Rohit Kumar Varma (@immortal_1 at codechef and codeforces)
Amrita Vishwa Vidyapeetham, Amritapuri

Efficient approaches to check if given number is a prime number:
	1. Less efficient method: traversing from 0 to sq.root(n), because every pair of factors lie on either side of sq.root(n), so finding one proves the other
	2. More efficient method: doing the same above process, but adding more efficiency by removing multiple of 2 and 3, this removes many steps in between
	and increases the for loop step size by 6, so the time complexity decreases heavily.
*/

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void checkprimesqroot(int n){

	bool var = true;

	for(int i=2;(i*i)<=n;i++){
		if(n%i==0){
			var=false;
		}
	}

	if(var==true){
		cout<<"The given number "<<n<<" is a prime number (using sqroot method)"<<endl;
	}
	else{
		cout<<"The given number "<<n<<" is a composite number (using sqroot method)"<<endl;
	}

}

void checkprimeefficient(int n){

	bool var = true;

	if(n==1){
		var = false;
	}
	if(n==2 || n==3){
		var = true;
	}
	if(n%2==0 || n%3==0){
		var = false;
	}
	else{
		for(int i=5;(i*i)<=n;i=i+6){
			if(n % i == 0 || n % (i + 2) == 0){
				var = false;
			}
		}
	}

	if(var==true){
		cout<<"The given number "<<n<<" is a prime number (using sqroot+efficient method)"<<endl;
	}
	else{
		cout<<"The given number "<<n<<" is a composite number (using sqroot+efficient method)"<<endl;
	}
	

}

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin>>n;

    checkprimesqroot(n);
    checkprimeefficient(n);
	
}