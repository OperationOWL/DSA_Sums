#include<iostream>
#include<vector>
using namespace std;

void print_arr(vector<int> arr){
    for(int i: arr) cout<<i<<" ";
    cout<<"end"<<endl;
}

void insert_sort(vector<int> arr){
    for(int i = 0; i<arr.size(); i++){
        for(int j = i; j>=0; j--){
            if(arr[i] < arr[j]){
                swap(arr[i], arr[j]);
                i = j;
            }
        }
    }

    print_arr(arr);
}

int main(){
    vector<int> arr = {2,3,1,4,3,4,3,2};
    insert_sort(arr);
    print_arr(arr);
}