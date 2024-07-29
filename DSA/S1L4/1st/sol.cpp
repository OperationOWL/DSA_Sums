#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

int length(int n){
    return (int)(log10(n)+1);;
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