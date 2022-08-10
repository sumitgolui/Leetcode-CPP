class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        
        if(intervals.size()==0 || intervals.size()==1){
            return intervals;
        }
        int n=intervals.size();
        sort(intervals.begin(),intervals.end());
        vector<vector<int>> v;
        vector<int> temp;
        temp=intervals[0];
        for(int i=0;i<n;i++){
            if(intervals[i][0]<=temp[1])
                temp[1]=max(intervals[i][1],temp[1]);
            else{
                v.push_back(temp);
                temp=intervals[i];
            }
            
        }
        v.push_back(temp);
            return v;
    }
};