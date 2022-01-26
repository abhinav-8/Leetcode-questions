class Solution {
public:
    int get_row(vector<vector<int>>& matrix,int target){
        int low=0,high=matrix.size()-1;
        int ans=-1;
        while(low<=high){
            int mid=low+(high-low)/2;
            if(matrix[mid][0]<=target){
                low=mid+1;
                ans=mid;
            }
            else{
                high=mid-1;
            }
        }
        return ans;
    }
    bool search_target(vector<vector<int>>& matrix, int target,int row){
        int low=0,high=matrix[0].size()-1;
        while(low<=high){
            int mid=low+(high-low)/2;
            if(matrix[row][mid]==target) return true;
            if(matrix[row][mid]<target){
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
        return false;
    }
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row=get_row(matrix,target);
        if(row==-1) return false;
        return search_target(matrix,target,row);
        
    }
};