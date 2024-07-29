#include<iostream>
using namespace std;

int single_element(int arr[], int size){
    int xorr = 0;
    for(int i = 0; i<size; i++){
        xorr^=arr[i];
    }

    return xorr;
}

int main(){
    int arr[] = {1,1,3,3,2,4,4,5,5};
    int size = 9;
    cout<<single_element(arr, 9)<<endl;
    return 0;
}