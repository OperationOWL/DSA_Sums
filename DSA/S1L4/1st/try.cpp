//Problem Statement: Given an integer N, return the number of digits in N.

#include<iostream>
using namespace std;

int length(int n){
    int count = 0;
    int i = 1;
    while(n%i != n){
        i=i*10;
        count++;
    }
    return count;
}

int main(){
    int n;
    cout<<"please enter n: ";
    cin>>n;
    cout<<"entered number is: "<<n<<endl;
    int c = length(n);
    cout<<c<<endl;
    return 0;
}