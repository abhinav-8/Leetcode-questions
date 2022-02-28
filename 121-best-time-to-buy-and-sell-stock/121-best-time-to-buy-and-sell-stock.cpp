class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        int prefix[n],suffix[n],profit=0;
        prefix[0]=prices[0];
        suffix[n-1]=prices[n-1];
        for(int i=1;i<n;i++){
            prefix[i]=min(prices[i],prefix[i-1]);
        }
        for(int i=n-2;i>=0;i--){
            suffix[i]=max(suffix[i+1],prices[i]);
        }
        for(int i=0;i<n;i++){
            profit=max(suffix[i]-prefix[i],profit);
        }
        return profit;
    }
};