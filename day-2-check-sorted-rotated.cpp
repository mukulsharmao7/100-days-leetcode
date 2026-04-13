// Day 2 - LeetCode 1752: Check if Array is Sorted and Rotated
// Approach: Count number of "drops"
// Time Complexity: O(n)
class Solution {
public:
    bool check(vector<int>& nums) {
        int count =0;
        int n =nums.size();
        for(int i =1;i<n;i++)
        {
            if(nums[i-1]>nums[i])
            {
                count++;
            }
        }
        if(nums[n-1]>nums[0])
        count++;
        return count <=1;
        
    }
};
