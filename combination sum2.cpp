// link - https://leetcode.com/problems/combination-sum-ii/

class Solution {
public: 
    void combination(int ind, int t, vector<int>&arr, vector<int>&ds, vector<vector<int>>&ans, int n){
        if(t == 0){
            ans.push_back(ds);
            return;
        }
        for(int i = ind; i < n; i++){
            if(i > ind and arr[i] == arr[i-1]) continue;
            if(arr[i]>t) break;
            ds.push_back(arr[i]);
            combination(i+1,t-arr[i],arr,ds,ans,n);
            ds.pop_back();
        }
    }
    
    vector<vector<int>> combinationSum2(vector<int>& arr, int t){
        sort(arr.begin(),arr.end());
        vector<vector<int>>ans;
        vector<int>ds;
        int n = arr.size();
        combination(0,t,arr,ds,ans,n);
        return ans;
    }
};
