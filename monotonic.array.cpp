//link - https://leetcode.com/problems/monotonic-array/

bool isMonotonic(vector<int>& nums) {
        if(nums.size()==1)
        {
            return true;
        }
        int count1=0,count2=0;
        for(int i=0;i<nums.size()-1;i++)
        {
            if(nums[i]>=nums[i+1])
            {
                count1++;
            }
            if(nums[i]<=nums[i+1])
            {
                count2++;
            }
        }
        if(count1==nums.size()-1 || count2==nums.size()-1)
        {
            return true;
        }
        return false;
    }
