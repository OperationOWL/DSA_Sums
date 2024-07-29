#include<iostream>
using namespace std;

int main(){
    int arr[] = {-13, 0, 6, 15, 16, 2, 15, -12, 17, -16, 0, -3, 19, -3, 2, -9, -6};
    int size = 17;
    int i = 0;
    int j = 0;
    int k = 15;
    int sum = 0;
    int dist = 0;
    while(i != size){
        sum += arr[i];
        i++;
        if(sum > k){
            j++;
            if(arr[j-1] < 0){
                sum+=arr[j-1];
            }else{ 
                sum-=arr[j-1];
            }
        }
        else if(sum==k){
            dist = max(dist, i-j);
            cout<<"crazy"<<endl;
        }
        cout<<j<<" "<<i<<" sum: "<<sum<<endl;
    }
    cout<<dist<<endl;
}