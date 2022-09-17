class Solution{
    public:
    // arr[] : int input array of integers
    // k : the quadruple sum required
    vector<vector<int> > fourSum(vector<int> &arr, int total_k) {
        sort(arr.begin(),arr.end());
        int n=arr.size();
        int k,l;
        vector<vector<int>> res;
        set<vector<int>> st1;
        
        for(int i=0; i<n-3;i++){
            for(int j=i+1;j<n-2;j++){
                k=j+1;
                l=n-1;
                while(l>k){
                    if(arr[i]+arr[j]+arr[k]+arr[l]==total_k){
                        // cout<<arr[i]<<" "<<arr[j]<<" "<<arr[k]<<" "<<arr[l]<<endl;
                        vector<int>temp{arr[i],arr[j],arr[k],arr[l]};
                        st1.insert(temp);
                        k++;
                        l--;
                    }
                    else if(arr[i]+arr[j]+arr[k]+arr[l]<total_k){
                        k++;
                    }
                    else{
                        l--;
                    }
                    
                }
            }
        }
        for(auto it=st1.begin();it!=st1.end();it++){
            res.push_back(*it)
        }
        return res;
    }
};
