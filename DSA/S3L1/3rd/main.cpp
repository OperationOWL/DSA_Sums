#include<iostream>
using namespace std;

bool is_ordered(int arr[], int size){
    int max = arr[0];
    int cur = arr[0];
    for(int i = 1; i<size; i++){
        if(max != cur){
            return false;
        }
        if(arr[i] > max){
            max = arr[i];
        }
        cur = arr[i];
    }
    return true;
}

int main(){
    int arr[] = {1,2,3,4,5};
    cout<<is_ordered(arr, 5)<<endl;
    return 0;
}