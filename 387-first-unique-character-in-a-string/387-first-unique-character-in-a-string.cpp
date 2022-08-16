class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char,int>mp;
        vector<char>v1;
        int mini=INT_MAX;
        for(int i=0;i<s.length();i++){
            mp[s[i]]++;
        }
        for(auto it:mp){
            if(it.second==1){
                v1.push_back(it.first);
            }
            
        }
        if(v1.size()==0){
            return -1;
        }
        for(int i=0;i<v1.size();i++){
            for(int j=0;j<s.length();j++){
            if(v1[i]==s[j])
                mini=min(mini,j);
            }
        
        }
        return mini;
    }
};