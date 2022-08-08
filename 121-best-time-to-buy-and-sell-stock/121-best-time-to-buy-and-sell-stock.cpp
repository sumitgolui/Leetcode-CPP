class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
       int n = prices.size();
        int x = INT_MAX;
        int ans = 0;
        for(int i =0; i<n; i++){
        x = min(x, prices[i]);
        ans = max(ans, (prices[i]-x));
        }
        return ans;
        
        
    }
};