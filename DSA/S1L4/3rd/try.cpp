//Problem Statement: Given an integer N, return true if it is a palindrome else return false.
#include<iostream>
#include<stack>
using namespace std;

bool palindrome(int n){
    int i = 1;
    int d = 0;
    bool pal = true;
    stack<int> st;
    while(n%i != n){
        d = ((n%(i*10))-n%i)/i;
        st.emplace(d);
        i*=10;
    }
    i = 1;

    while(n%i != n){
        d = ((n%(i*10))-n%i)/i;
        if(st.top() != d){
            pal = false;
        }
        st.pop();
        i*=10;
    }

    return pal;
}


int main(){
    int n;
    cin>>n;
    
    if(palindrome(n)) cout<<"palindrome"<<endl;
    else cout<<"not palindrome"<<endl;
}