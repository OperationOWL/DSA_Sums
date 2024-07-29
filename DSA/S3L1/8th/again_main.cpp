#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;


void print_vec(vector<int> vec){
    for(auto i : vec){
        cout<<i<<" ";
    }
    cout<<endl;
}

vector<int> Union(int arr1[], int arr2[], int size1, int size2){
    int i = 0;
    int j = 0;
    vector<int> vec = {};
    while(j!=size2 && i!=size1){
        if(arr1[i] < arr2[j]){
            if(vec.size() == 0 || arr1[i] == vec.back()){
                i++;
            }else vec.emplace_back(arr1[i++]);
        }
        else if(arr1[i] > arr2[j]){
            if(vec.size() == 0 || arr2[j] != vec.back()){
                j++;
            }else vec.emplace_back(arr2[j++]);
        }
        if(arr1[i] == arr2[j]){
            if(vec.size() == 0 || arr1[i++] != vec.back()){
                vec.emplace_back(arr1[i]);
            }
            j++;
            i++;
        }
    }

    while(j<size2){
        vec.emplace_back(arr2[j]);
        j++;
    }

    while(i<size1){
        vec.emplace_back(arr1[i]);
        i++;
    }

    return vec;
}

int main(){
    int arr1[] = {1,2,3,4};
    int arr2[] = {2,3,4,5};
    print_vec(Union(arr1, arr2, 4, 4));

    return 0;
}