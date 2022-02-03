class Solution {
public:
    int wordCount(vector<string>& startWords, vector<string>& targetWords) {
        map<string,bool>Mstart;
        int ans=0;
        for(auto &i:startWords){
            sort(i.begin(),i.end());
            Mstart[i]=true;
        }
        for(auto &i:targetWords){
            sort(i.begin(),i.end());
            // Mtarget[i]=true;
        }
        for(auto i:targetWords){
            string s1=i,s2;
            int n=s1.size();
            for(int j=0;j<n;j++){
                s2=s1;
                s2.erase(s2.begin()+j);
                if(Mstart[s2]==true) {ans++;break;}
            }
            // s1.pop_back();
            // cout<<s1<<" ";
            
        }
        return ans;
        
    }
};