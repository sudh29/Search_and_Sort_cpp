class Solution{
  public:
    // nums: given vector
    // return the Product vector P that hold product except self at each index
    vector<long long int> productExceptSelf(vector<long long int>& nums, int n) {
       
        long long int total_product=1;
        long long int total_product2=1;
        int count_zeros=0;
        for(int i=0;i<n;i++){
            total_product*=nums[i];
            if (nums[i]!=0) total_product2*=nums[i];
            if (nums[i]==0) count_zeros++;
        }
        // cout<<total_product2<<" val"<<total_product<<endl;
        vector<long long int> res;
        for(int i=0;i<n;i++){
            if (count_zeros>1){
                res.push_back(0);
            }
            else if (nums[i]!=0 && total_product==0){
                res.push_back(0);
            }
            else if (nums[i]==0){
                res.push_back(total_product2);
            }
            else{
                res.push_back(total_product/nums[i]);
            }
        }
        
        return res;
    }
};
