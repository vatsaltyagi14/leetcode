class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int ans =1;
        int temp = 1;

        if(nums.size()==0) return 0;

        sort(nums.begin(),nums.end());

        for(int i =0;i<nums.size();i++){
            if(i+1<nums.size() && nums[i]+1==nums[i+1]){
                temp++;
            }else if(i+1<nums.size() && nums[i]==nums[i+1]){
                continue;
            }
            else{
                temp=1;
            }
            ans = max(ans,temp);

        }
        return ans;
    }
};