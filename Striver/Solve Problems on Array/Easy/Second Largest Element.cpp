class Solution {
public:
    int secondLargestElement(vector<int>& nums) {
        int x = nums.size();
        sort(nums.begin(), nums.end());
        int largest = nums[x - 1];
        for (int i = x - 2; i >= 0; i--) {
            if (nums[i] != largest) {
                return nums[i];
            }
        }
        return -1;
    }
};