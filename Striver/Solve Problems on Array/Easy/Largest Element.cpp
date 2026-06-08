class Solution {
public:
    int largestElement(vector<int>& nums) {
        int x= nums.size();
        sort(nums.begin(), nums.end());
        return nums[x-1];
    }
};