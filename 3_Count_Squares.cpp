class Solution {
  public:
    int countSquares(int N) {
        if(N<=1) return 0;
        if(N<4) return 1;
        vector<int> res;
        if (N>3){
            for(int i=1;i<N;i++){
                if((i*i)<N){
                    res.push_back(i);
                }
                else{
                    break;
                }
            }
        }
        return res.size();
    }
};
