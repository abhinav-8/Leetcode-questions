class Solution {
public:
    int minSwaps(vector<int>& nums) {
        int n=nums.size(),c=0,zero=0,ans=0;
        for(int i=0;i<n;i++){
            if(nums[i]==1) c++;
        }
        for(int i=0;i<c;i++){
            if(nums[i]==0) zero++;
        }
        ans=zero;
        for(int i=1;i<n;i++){
            if(nums[i-1]==0&&nums[(i+c-1)%n]==1) zero--;
            else if(nums[i-1]==1&&nums[(i+c-1)%n]==0) zero++;
            ans=min(ans,zero);
        }
        return ans;
    }
};