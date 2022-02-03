class Solution {
public:   
    long long mostPoints(vector<vector<int>>& questions) {
        long long n=questions.size(); 
        vector<long long>dp(n,0);
        for(int i=n-1;i>=0;i--){
            long long op1=i+questions[i][1]+1<n?dp[i+questions[i][1]+1]:0;
            long long op2=i+1<n?dp[i+1]:0;
            dp[i]=max(op1+questions[i][0],op2);
        }
        return dp[0];
    }
};