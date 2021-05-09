/*
Rohit Kumar Varma (@immortal_1)
Amrita University, Amritapuri, 2019-2023
Basic hashing of storing the occurences in a string into a frequency array with time complexity of O(n)+O(256)
*/

#include<bits/stdc++.h>
using namespace std;


auto hash_char_freq_array(string str){

    int freq_array[256] = {0};

    for(auto it: str){
        freq_array[it]++;
    }
    
    for(int i=0;i<256;i++){
    	if(freq_array[i]>0){
    		cout<<char(i)<<"->"<<freq_array[i]<<"\n";
    	}
    }

    return 0;

}



//Driver code
int main(){

    string s;
    cin>>s;

    hash_char_freq_array(s);

    return 0;

}
