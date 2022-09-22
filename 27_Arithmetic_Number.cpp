class Solution{
public:
    int inSequence(int A, int B, int C){
        if(C==0) return A==B;
        int d = (B-A)/C;
        int r = (B-A)%C;
        return d>=0 && r==0;
    }
};
