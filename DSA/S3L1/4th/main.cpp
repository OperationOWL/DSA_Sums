#include<iostream>
using namespace std;


void print_arr(int arr[], int size){
    for(int i = 0; i<size; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int remove_inplace(int arr[], int size){
    int i = 0;
    int j = 1;
    while(j!=size){
        if(arr[j]>arr[j-1]){
            arr[++i] = arr[j++];
        }
        else{
            j+=1;
        }
    }

    size = ++i;
    return size;
}

int main(){
    // 1 1 2 2 2 3 3 3 3 4
    int arr[] = {1,1,2,2,2,3,3,4,5,6};
    int size = 10;
    size = remove_inplace(arr, size);
    print_arr(arr, size);
    return 0;
}