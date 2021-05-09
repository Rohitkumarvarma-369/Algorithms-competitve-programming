/*
Rohit Kumar Varma (@immortal_1)
Amrita University, Amritapuri, 2019-2023
Basic hashing of storing the occurences in a string into a map data structure with time complexity of O(n*logn)+O(256)
*/


#include<bits/stdc++.h>
using namespace std;


auto hash_char(string str){

    map<char, int> mpp;

    for(auto it: str){
        mpp[it]++;
    }
    
    for(auto it: mpp){
        cout<<it.first<<"->"<<it.second<<"\n";
    }

    return mpp;

}



//Driver code
int main(){

    string s;
    cin>>s;

    hash_char(s);

    return 0;

}