#include<bits/stdc++.h>
using namespace std;
// vector<int>twoSum(vector<int>&num,int target){
//     unordered_map<int, int>mpp;
//     for(int i=0;i<num.size();i++){
//         mpp.insert({num[i],i});
//     }
//     for(auto it:mpp){
//         if(mpp.find(target-it.first)!=mpp.end()){
//             return {it.second,mpp[target-it.first]};
//         }
//     }
// }
vector<int>twoSum(vector<int>&num, int target){
    unordered_map<int,int>mpp;
    for(int i=0;i<num.size();i++){
        int rem=target-num[i];
        if(mpp.find(rem)!=mpp.end()){
            return{ mpp[rem],i};
        }
        mpp[num[i]]=i;
    }
}
int main(){
    vector<int>num={2,7,11,15};
    int target=9;
    vector<int>ans=twoSum(num,target);
    for(int i=0;i<2;i++){
        cout<<ans[i];
    }

}