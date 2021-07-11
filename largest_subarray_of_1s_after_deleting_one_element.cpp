// link - https://leetcode.com/problems/longest-subarray-of-1s-after-deleting-one-element/

class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int start = 0, end = 0, pre0 = -1, n = nums.size(), max_len = 0;
        while(end < n and start <= end)
        {
            if(nums[end]) {
                end++;
            }
            else {
                if(pre0 == -1) {
                    pre0 = end;
                }
                else {
                    max_len = max(max_len, end - start -1);
                    start = pre0 + 1;
                    pre0 = end;
                }
                end++;
            }
        }
        max_len = max(max_len, end - start - 1);
        return max_len;
    }
};
