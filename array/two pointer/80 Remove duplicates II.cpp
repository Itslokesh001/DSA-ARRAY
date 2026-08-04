class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n=nums.size();
        if(n<3) return n;
        int i=2;
        for(int j=2;j<n;j++){
            if( nums[j]!=nums[i-2]){
            //    i++;
                nums[i]=nums[j];
                i++;
                
            }
            // else if(nums[j]==nums[j-1] && nums[j]!=nums[j-2]){
            //     i++;
            // }
        }
        return i;
    }
};a
