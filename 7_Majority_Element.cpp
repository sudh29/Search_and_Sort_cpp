class Solution{
  public:
     // Function to find majority element in the array
    // a: input array
    // size: size of input array
    int majorityElement(int a[], int size)
    {
        // using hash map
        
        int k=size/2;
        // unordered_map<int,int> temp_map;
        // for(int i=0; i<size;i++){
        //     temp_map[a[i]]++;
        // }
        // for(auto i : temp_map){
        //     if (i.second>k) return i.first;
        // }
        // return -1;
        
        // Using Moore’s Voting Algorithm
        
        int maj_idx=0;
        int count=1;
        for(int i=0; i<size;i++){
            if (a[maj_idx]==a[i]){
                count++;
            }
            else{
                count--;
            }
            if (count==0){
                maj_idx=i;
                count =1;
            }
        }
        int c=0;
        for(int i=0; i<size;i++){
            if (a[i]==a[maj_idx]){
                c++;
            }
        }
        if (c>k) return a[maj_idx];
        return -1;
        
        
    }
};
