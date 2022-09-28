class Solution 
{
    public:
    //Function to find the minimum number of swaps required to sort the array. 
	int minSwaps(vector<int>&nums)
	{
	    int n= nums.size();
	    vector<pair <int, int>> temp;
	    for(int i=0;i<n;i++){
	        temp.push_back(make_pair(nums[i],i));
	    }
	    sort(temp.begin(),temp.end());

		int i=0;
		int c=0;
		while (i < n){
		    int idx=temp[i].second;
		    if (idx==i){
		        i++;}
		    else{
		        swap(temp[i],temp[idx]);
		        if (i==0){
		            i = 0;}
		        else{ 
		            i--;}
		        c+=1;
		        }
	    }
        return c;
	}
};
