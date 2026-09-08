class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> elements;
        int n = nums.size();
        for(int i =0;i<n;i++){
            int temp = target - nums[i];

            if(elements.find(temp)!=elements.end()){
                return {i,elements[temp]};
            }
            else{
                elements[nums[i]]=i;
            }
        }
        return {};
    }
};