bool findPair(int arr[], int size, int n){
    sort(arr,arr+size);
    int start=0,end=1;
    while(start<size && end<size){
        int diff=(arr[end]-arr[start]);
        if(diff==n){
            return true;
        }
        else if(diff<n){
            end++;
        }
        else{
            start++;
            end=start+1;
        }
    }
    return false;
}
