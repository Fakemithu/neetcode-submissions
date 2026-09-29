class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();

        vector<int> prefix_prod(n+1,1);
        vector<int> suffix_prod(n+1,1);

        for(int i=1; i<=n; i++){
            prefix_prod[i] = prefix_prod[i-1] * nums[i-1];
        }

        for(int i = n-1; i>=0; i--){
            suffix_prod[i] = suffix_prod[i+1] * nums[i];
        }

        vector<int> ans(n);

        for(int i=0; i<n; i++){
            ans[i] = prefix_prod[i] * suffix_prod[i+1];
        }
        return ans;
    }
};
