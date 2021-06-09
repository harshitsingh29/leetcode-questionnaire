// link - https://leetcode.com/problems/find-minimum-in-rotated-sorted-array/

int findMin(vector<int>& nums) {
        int i = 0;
        int j = nums.size()-1;
        while(i<j)
        {
            if(nums[i]>nums[j])
            {
                i++;
            }
            else
            {
                return nums[i];
            }
        }
        return nums[i];
    }
