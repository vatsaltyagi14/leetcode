class Solution {
public:
    string minWindow(string s, string t) {
        if (t.size()>s.size()) return "";


        int ans = INT_MAX;
        int l=0,r=0;
        int index=-1;
        int n = s.size();
        int count =0;

        unordered_map<char,int> freq;
        for(auto c : t) freq[c]++;

        while(r<n){
            if (freq[s[r]] > 0) count++;
            freq[s[r]]--;
            r++;

            while(count == t.size()){
                if (r - l < ans) {
                    ans = r - l;
                    index = l;
                }
                freq[s[l]]++;
                if (freq[s[l]] > 0) count--; 
                l++;
            }
            
        }
        return (index == -1) ? "" : s.substr(index, ans);
        
    }
};