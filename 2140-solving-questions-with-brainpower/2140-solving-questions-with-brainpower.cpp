class Solution {
    vector<vector<int>>questions;
    vector<long long>dp;long long n;
public:   
    long long MaxPoints(int i=0){
        bool outOfBound = i>=n;
        if(outOfBound) return 0;
        long long &ans=dp[i];
        if(ans!=-1) return ans; 
        long long op1=questions[i][0]+MaxPoints(i+questions[i][1]+1);
        long long op2=MaxPoints(i+1);
        return ans=max(op1,op2);
    }
    long long mostPoints(vector<vector<int>>& questions) {
        this->questions=questions;
        n=questions.size();
        dp.resize(n,-1);
        return MaxPoints();
        
    }
};