class Solution {
public:
    int findNonMinOrMax(vector<int>& nums) {
        int maxi=INT_MIN;
        int mini=INT_MAX;
        for(int x:nums){
            maxi=max(maxi,x);
            mini=min(mini,x);
        }
        for(int i:nums){
            if(i!=maxi && i!=mini){
                return i;
            }
        }
        return -1;
    }
};