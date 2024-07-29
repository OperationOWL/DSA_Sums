// Problem Statement: Given two integers N1 and N2, find their greatest common divisor.

#include<iostream>
using namespace std;

int gcd(int n1, int n2){
    if(n1 == 0) return n2;
    else if(n1<=n2) return gcd(n2-n1, n1);
    else return gcd(n1-n2, n2);

}

int main(){

    cout<<gcd(20, 15)<<endl;
    return 0;
}