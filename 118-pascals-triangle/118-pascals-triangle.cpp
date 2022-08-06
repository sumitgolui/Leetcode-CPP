class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> v2(numRows);
       for(int i=0;i<numRows;i++){
           for(int j=0;j<i+1;j++){
               if(j==0 || j==i ){
                   v2[i].push_back(1);
               }
               else{
                   v2[i].push_back(v2[i-1][j]+v2[i-1][j-1]);
               }
               
                   
           }
       }
        return v2;
        
    }
};