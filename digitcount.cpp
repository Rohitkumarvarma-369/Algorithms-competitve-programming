/*

Rohit Kumar Varma (@immortal_1 at codechef and codeforces)
Amrita Vishwa Vidyapeetham, Amritapuri
*/

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;


void printcount(int count, int n){//to print the count
	cout<<"The no of digits in "<<n<<" are: "<<count<<endl;
}

void iterativecount(int n){//iterative solution
	int count = 0;
	while(n!=0){
		n = n/10;
		++count;
	}

	printcount(count, n);
}

int recursivecount(int n){//recursive solution
	if(n==0){
		return 0;
	}
	else{
		return (recursivecount(n/10)+1);
	}
}

void logarithmiccount(int n){//logarithmic solution
	printcount(floor(log10(n)+1),n);
}

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin>>n;


    //different ways to count the no of digits in a number

    //Iterative solution:

    iterativecount(n);
    int recurr = recursivecount(n);
    printcount(recurr,n);
    logarithmiccount(n);

	
}