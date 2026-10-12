class Solution {
public:
    int characterReplacement(string s, int k) {
        int n = s.size();
        int l=0,r=0;

        int maxi=0;
        int maxfreq=0;

        unordered_map<char,int> map;

        while(r<n){
            map[s[r]]++;
            maxfreq = max(maxfreq,map[s[r]]);
            while((r-l+1)-maxfreq>k){
                map[s[l]]--;
                l++;
            }

            maxi=max(maxi,r-l+1);
            r++;
        }

        return maxi;
    }
};