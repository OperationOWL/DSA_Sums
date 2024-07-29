#include<iostream>
using namespace std;

void print_arr(int arr[], int size){
    for(int i = 0; i<size; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void end_zeroes(int arr[], int size){
    int i = 0;
    int j = 0;
    while(i !=size && j!=size){
        if(arr[i] != 0){
            i++;
        }else if(arr[j] == 0){
            j++;
        }else if(i>j){
            j++;
        }else if(arr[j]!=0 && arr[i] == 0){
            swap(arr[j], arr[i]);
        }
    }
}

int main(){
    int arr[] = {4,0,0,0,1,0,2,0,3};
    int size = 9;
    end_zeroes(arr, size);
    print_arr(arr, size);
}