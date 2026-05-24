#include<bits/stdc++.h>
using namespace std;
vector<vector<int>>fourSum(vector<int>&arr){
    int n=arr.size();
    sort(arr.begin(),arr.end());
    vector<vector<int>>ans;
    for(int i=0;i<n;i++){
          if(i>0 && arr[i]==arr[i-1]) continue;
          for(int j=i+1;j<n;j++){
            if(j>i+1 && arr[j]==arr[j-1]) continue;
          
         int left=j+1;
         int right=n-1;
         while(left<right){
            int sum=arr[i]+arr[left]+arr[right]+arr[j];
            if(sum==0){
               ans.push_back({arr[i],arr[j],arr[left],arr[right]});
               left++,right--;
               while(left<right && arr[left]==arr[left-1]) left++;
               while(left<right && arr[right]==arr[right+1]) right--;

            }
            else if(sum<0){
              left++;
            }
            else{
                right--;
            }
         }
        }
    }
    return ans;
}
int main(){
    vector<int>arr={-1,0,1,2,-1,-4};
    vector<vector<int>>ans=fourSum(arr);
    for(int i=0;i<ans.size();i++){
        for(int j=0;j<ans[i].size();j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }

}