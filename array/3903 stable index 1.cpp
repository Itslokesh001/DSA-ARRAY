class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int n=nums.size();
        // vector<int>maxi(n);
        vector<int>mini(n);
        // for(int i=0;i<nums.size();i++){
        //     if(i==0|| nums[i]>maxi[i-1]){
        //         maxi[i]=nums[i];
        //     }
        //     else maxi[i]=maxi[i-1];
        // }
        for(int i=nums.size()-1;i>=0;i--){
            if(i==n-1|| nums[i]<mini[i+1]){
                mini[i]=nums[i];

            }
            else mini[i]=mini[i+1];
        }
        int maxi=-1;
        for(int i=0;i<nums.size();i++){
            maxi=max(nums[i],maxi);
            if(maxi-mini[i]<=k) return i;
        }
        return -1;
    }
};