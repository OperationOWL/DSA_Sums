#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;


void print_vec(vector<int> vec){
    for(auto i : vec){
        cout<<i<<" ";
    }
    cout<<endl;
}

vector<int> Union(int arr1[], int arr2[], int size1, int size2){
    vector<int> vec;
    unordered_map<int, int> mp;
    for(int i = 0; i<size1; i++){
        mp[arr1[i]]++;
    }
    for(int j = 0; j<size2; j++){
        mp[arr2[j]]++;
    }
    for(auto i : mp){
        vec.emplace_back(i.first);
    }
    return vec;
}

int main(){
    int arr1[] = {1,2,3,4};
    int arr2[] = {2,3,4,5};
    print_vec(Union(arr1, arr2, 4, 4));
    return 0;
}