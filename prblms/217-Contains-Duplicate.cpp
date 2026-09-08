class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int,int> map;
        int n = nums.size();
        for(int i =0;i<n;i++){
            if(map.find(nums[i])!=map.end()){
                return true;
            }
            map[nums[i]]=i;
        }
        return false;
    }
};