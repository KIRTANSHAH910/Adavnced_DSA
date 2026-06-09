class Solution{
public:
    int longestSubarray(vector<int> &nums, int k){
        int n = nums.size();
        int sum = 0;
        int maxCount = 0;
        for(int i = 0; i < n; i++){
            sum += nums[i];
            if(sum == k){
                maxCount = max(maxCount, i + 1);
            }
        }
        return maxCount;
    }
};