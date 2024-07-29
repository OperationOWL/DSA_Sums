#include<iostream>
#include<vector>
using namespace std;

void print_vec(int vec[], int size){
    for(int i = 0; i<size; i++){
        cout<<i<<" ";
    }
    cout<<endl;
}

void quick_sort(int vec[], int start, int end){

    cout<<start<<' '<<end<<endl;

    if(start < end){
        int pivot = vec[start];
        int i = start + 1;
        int j = end - 1;

        while(i<j){
            if(vec[i] < pivot) i++;
            else if(vec[j] > pivot) j--;
            else{
                swap(vec[i], vec[j]);
            }
        }
        swap(vec[j-1], vec[start]);
        print_vec(vec, 8);
        quick_sort(vec, start, j-1);
        quick_sort(vec, j, end);
    }

    return;
}

int main(){
    int vec[] = {2,3,4,1,0,5,6,34};
    quick_sort(vec, 0, 8);
    return 0;
}