class Solution {
public:
    int missingNumber(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        for(int i=0; i<n; i++){
            if(nums[i+1]!=nums[i]+1){
                nums[i+1]=nums[i]+1;
                return nums[i+1];
            }
        }
        int c;
        nums[c]=nums[n-1]+1;
        return nums[c];
    }
};