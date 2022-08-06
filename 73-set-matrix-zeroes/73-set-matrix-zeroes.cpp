class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        
   int M=matrix.size();
   int N=matrix[0].size();    
        
        bool v1[M];
        bool v2[N];
        
        for(int i=0;i<=M-1;i++){
            v1[i]=false;
        }
        
        for(int j=0;j<=N-1;j++){
            v2[j]=false;    
        }
        
        for(int i=0;i<=M-1;i++){
            for(int j=0;j<=N-1;j++){
                if(matrix[i][j]==0)
                {
                    v1[i]=true;
                    v2[j]=true;
                }
                    
            }
        }
        
        for(int i=0;i<=M-1;i++){
            for(int j=0;j<=N-1;j++){
                if(v1[i]==true || v2[j]==true)
                    matrix[i][j]=0;
            }
        }
        
    }
};