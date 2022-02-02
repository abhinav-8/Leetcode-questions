class Solution {
public:
    // bool ispowerof2(int n){
    //     if(ceil(1LL*log2(1LL*n))==1LL*log2(1LL*n))
    //         return true;
    //     return false;
    // }
    int minMoves(int target, int maxDoubles) {
        int steps=0;
        while(target>1&&maxDoubles>0){
            if(target%2==1){steps++;target--;}
            else{steps++;target/=2;maxDoubles--;}
        }
        steps+=target-1;
        return steps;
        
    }
};