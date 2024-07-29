#include<iostream>
#include<map>
using namespace std;

void two_sum(int arr[], int size, int sum, int index[]){
    map<int, int> mp{};
    int complement;
    
    for(int i = 0; i<size; i++){
        int comp = sum-arr[i];
        mp[arr[i]] = i;
        if(mp.find(comp)!=mp.end()){
            index[0] = i;
            index[1] = (int)mp[comp];
        }
    }

}

int main(){
    int arr[] = {5,0,1,4};
    int size = 4;
    int index[] = {-1, -1};
    int sum = 5;
    two_sum(arr, size, sum, index);
    cout<<index[0]<<": "<<arr[index[0]]<<" + "<<index[1]<<": "<<arr[index[1]]<<endl;
    return 0;
}