class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n = nums.size();

        if(n==0){
            return 0;
        }
        int current = 1;
        int longest = 1;

        sort(nums.begin(), nums.end());

        for(int i=1; i<n; i++){
            if(nums[i] == nums[i-1] + 1){
                current++;
            }
            else if(nums[i] == nums[i-1]){
                continue;
            }
            else{
                current = 1;
            }
            longest = max(current, longest);
        }
        return longest;
    }
};
