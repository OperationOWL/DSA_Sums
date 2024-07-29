#include<iostream>
#include<unordered_map>
#include <bits/stdc++.h>
using namespace std;

int main(){
    int arr[] = {1,2,3,4,5,5};

    unordered_map<int, int> mp;
    for(auto i: arr){
        mp[i]++;
    }
    
    for(auto i: mp){
        cout<<i.first<<": "<<i.second<<endl;
    }
    return 0;
}