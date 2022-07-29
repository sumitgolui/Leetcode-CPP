class Solution {
public:
    bool isPalindrome(string s) {
        
        if(s.length()==0){
            return true;
        }
        string str;
        
        vector<int> vec;
        for(int i=0;i<s.length();i++){
            if((s[i]>='a' && s[i]<='z') || (s[i]>='A' && s[i]<='Z') ||(s[i]>='0' && s[i]<='9'))
                str+=tolower(s[i]);
        }
        string s1;
        s1=str;
        reverse(s1.begin(),s1.end());
        return s1==str;
       
        
    }
};