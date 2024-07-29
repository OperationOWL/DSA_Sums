#include<iostream>
#include<vector>
using namespace std;

void print_vec(vector<int> vec){
    for(auto i: vec){
        cout<<i<<" ";
    }
    cout<<endl;
}

vector<int> merge(vector<int> vec1, vector<int> vec2){
    vector<int> vec = {};
    
    auto i = vec1.begin();
    auto j = vec2.begin();
    while(i!=vec1.end() || j!=vec2.end()){
        if(j == vec2.end()){
            vec.emplace_back(*i);
            i++;
        }
        else if(i == vec1.end()){
            vec.emplace_back(*j);
            j++;
        }
        else if(*i > *j){
            vec.emplace_back(*j);
            j++;
        }
        else{
            vec.emplace_back(*i);
            i++;
        }

    }
    return vec;
}

vector<int> merge_sort(vector<int> arr){
    int len = arr.size();

    if(len==1){
        return arr;
    }

    vector<int> vec1(arr.begin(), arr.begin()+(int)len/2);
    vector<int> vec2(arr.begin()+(int)len/2, arr.end());

    return merge(merge_sort(vec1), merge_sort(vec2));
}


int main(){
    vector<int> arr = {1,3,0,0,0,1,2,4,5};

    print_vec(merge_sort(arr));
    return 0;
}