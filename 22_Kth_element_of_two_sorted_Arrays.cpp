class Solution{
    public:
    int kthElement(int arr1[], int arr2[], int n, int m, int k)
    {
        int i=0,j=0;
        int count=0;
        while(i<n && j<m){
            if (arr1[i]<=arr2[j]){
                if (count==k-1){
                    return arr1[i];}
                i++;
                count++;
            }
            else{
                if (count==k-1){
                    return arr2[j];}
                j++;
                count++;
            }
        }
        
        while(i<n){
            if (count==k-1){
                return arr1[i];}
            i++;
            count++;
        }
        
        while(j<m){
            if (count==k-1){
                return arr2[j];}
            j++;
            count++;
        }
    }
};
