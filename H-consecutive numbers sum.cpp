int consecutiveNumbersSum(int n) {
        long long int k=1,count=0;
        for(;k*k<2*n;k++)
        {
            if((n-(k*(k-1))/2)%k==0)
            {
                count++;
            }
        }
        return count;
    }
//https://leetcode.com/problems/consecutive-numbers-sum/
