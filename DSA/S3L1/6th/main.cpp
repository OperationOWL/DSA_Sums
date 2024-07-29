#include<iostream>
using namespace std;

void print_arr(int arr[], int size){
    for(int i = 0; i<size; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void reverse(int start, int end, int arr[]){
    end-=1;
    while(start<=end){
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

void rotate(int *arr, int size, int k){
    reverse(0, k, arr);
    reverse(k, size, arr);
    reverse(0, size, arr);
}

int main(){
    int arr[] = {1,2,3,4,5};
    int size = 5;
    int k = 3;
    rotate(arr, size, k);
    print_arr(arr, size);
    return 0;
}