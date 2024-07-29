#include<iostream>
#include<map>
using namespace std;

void print_mp(map<int, int> mp){
    for(auto i = mp.begin(); i!=mp.end(); i++){
        cout<<i->first<<": "<<i->second<<" "<<endl;
    }
    cout<<endl;

}

int main(){
    int arr[] = {1,1,0,1,1,1,1,2,4,3,2,1};
    int length = 12;
    int k = 6;
    int sum = 0;
    int rem = 0;
    int dist = 0;
    map<int, int> mp = {};
    for(int i = 0; i<length; i++){
        sum += arr[i];
        rem = sum-k;
        if(sum == k) dist = max(dist, i+1);
        if(mp.find(rem) != mp.end()){
            dist  = max(dist, mp[sum] - mp[rem]);
        }
        if(mp.find(sum) == mp.end()){
            mp[sum] = i;
        }
    }

    cout<<dist<<endl;

    print_mp(mp);

    return 0;
}