//maximum continuous ones
#include<iostream>
using namespace std;

void print_arr(int arr[], int size){
    for(int i = 0; i<size; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int max_1s(int arr[], int size){
    int count = 0;
    int i = 0;
    int j = 0;
    int dist = 0;
    while(j!=size+1){
        if(j<i){
            j = i;
        }
        else if(arr[i] == 1 && arr[j] == 0 || arr[i] == 1 && j==size ){
            dist = j-i;
            if(count < dist){
                count = dist;
            }
            i = j;
        }
        else if(arr[i]!=1) i++;
        else if(arr[j]!=0) j++;
        
    }
    return count;
}

int max_1s2(int arr[], int size){
    int count = 0;
    int dist = 0;
    for(int i = 0; i<size; i++){
        if(arr[i] == 1){
            count++;
        }if(arr[i] == 0){
            if(dist<count)
                dist = count;
            count = 0;
        }
    }
    return dist;
}

int main(){
    int arr[] = {1,0,0,1,1,1,0,0};
    cout<<max_1s(arr, 8)<<endl;
    return 0;
}
