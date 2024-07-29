#include<iostream>
#include<unordered_map>
#include <bits/stdc++.h>
using namespace std;

int main(){
    int arr[] = {4,5,5,3,3,3};

    unordered_map<int, int> mp;
    for(auto i: arr){
        mp[i]++;
    }
    
    pair<int, int> mx = (*mp.begin());
    pair<int, int> mn = (*mp.begin());

    for(auto i:mp){
        if(i.second>mx.second) {mx.first = i.first; mx.second = i.second;}
        if(i.second<mn.second) {mn.first = i.first; mn.second = i.second;}
    }
    cout<<"max freq elememnt: "<<mx.first<<endl;
    cout<<"min freq elememnt: "<<mn.first<<endl;
    return 0;
}