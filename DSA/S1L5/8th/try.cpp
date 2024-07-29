#include<iostream>
#include<string>
using namespace std;

bool palindrome(string str, int i, int j){

    if(str[i] != str[j]) return false;
    if(i >= j ) return true;
    return palindrome(str, ++i, --j);
    
}

int main(){
    string str = "hoh";
    if(palindrome(str, 0, str.length()-1)) cout<<"palindrome"<<endl;
    else cout<<"not palindrome"<<endl;
    return 0;
}