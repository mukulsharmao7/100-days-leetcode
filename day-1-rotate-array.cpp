// Day 1 - LeetCode 189: Rotate Array
// Approach: Reverse method
// Time Complexity: O(n)
class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        vector <int> temp(nums.size());
        for(int i=0;i<nums.size();i++)
        {
            temp[(i+k)%nums.size()] = nums[i];
        }
        nums = temp;
        
    }
};
