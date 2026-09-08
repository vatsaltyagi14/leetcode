class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> result;

        map<vector<int>,vector<string>> map;
        int n = strs.size();
        for(int i=0;i<n;i++){
            vector<int> freq(26,0);
            for(auto j : strs[i]){
                freq[j-'a']++;
            }
            map[freq].push_back(strs[i]);
        }

        for(auto i : map){
            result.push_back(i.second);
        }

        return result;

    }
};