class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        int n = nums.size();

        unordered_map<int,int> freq;
        vector<vector<int>> temp(n+1);
        vector<int> result;

        for(int i =0;i<n;i++){
            freq[nums[i]]++;
        }

        for(auto i:freq){
            temp[i.second].push_back(i.first);
        }

        for(int i = temp.size()-1;i>=0;i--){
            if(k==0) break;
            if(temp[i].empty()) continue;
            else{
                for(int j =0;j<temp[i].size();j++){
                    if(k==0) break;
                    result.push_back(temp[i][j]);
                    k--;
                }
            }
        }

        

        return result;

    }
};