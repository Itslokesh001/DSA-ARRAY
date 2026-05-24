#include<bits/stdc++.h>
using namespace std;
vector<int>moveszero(vector<int>&arr){
    int n=arr.size();
    int i=0;
    for(int j=0;j<n;j++){
        if(arr[j]!=0){
            swap(arr[i],arr[j]);
            i++;
        }
    }
    return arr;
}
int main(){
    vector<int>arr={0,2,3,4,0,2,5,0,0,3,0,2,0,4,0,0};
    moveszero(arr);
    for(int x:arr){
        cout<<x<<" ";
       }
}