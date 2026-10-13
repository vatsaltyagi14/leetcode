class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        vector<int> freq(26,0);
        for(int i =0;i<s1.size();i++){
            freq[s1[i]-'a']++;
        }

        if(s1.size()>s2.size()) return false;

        int l =0;
        int r =0;
        int n = s2.size();

        while(r<n){
            if(r-l+1<s1.size()){
                freq[s2[r]-'a']--;
                r++;
            }
            else if(r-l+1 == s1.size()){
                freq[s2[r]-'a']--;
                bool flag = true;
                for(int i =0;i<26;i++){
                    if(freq[i]!=0){
                        flag = false;
                    }
                }
                if(flag){
                    return true;
                }
                else{
                    freq[s2[l]-'a']++;
                    l++;
                    r++;
                    
                }
            }

        }

        return false;
    }
};