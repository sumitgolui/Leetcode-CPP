class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
    
        vector<int> v1;
       /*
       for(auto it=nums.begin();it!=nums.end();it++){
            for(auto it1=nums.begin()+1;it1!=nums.end();it1++){
                if(*it + *it1==target){
                    v1.push_back(it);
                    v1.push_back(it1);
                }
            }
        }*/
        for(int i=0;i<nums.size();i++){
            for(int j=i+1;j<nums.size();j++){
                if(nums[i]+nums[j]==target){
                    v1.push_back(i);
                    v1.push_back(j);
                }
            }
        }
        return v1;
        
    }
};