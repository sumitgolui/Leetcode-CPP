class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        
        vector<string> v1,v2;
        unordered_map<string,int> mp;
        string arr[26]={".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
        string morse="";
        for(int i=0;i<words.size();i++){
            string k;
            for(int j=0;j<words[i].length();j++){
                k+=arr[words[i][j]-'a'];
            }
            mp[k]++;
            
        }
       
        int l=mp.size();
        
        return l;
    }
};