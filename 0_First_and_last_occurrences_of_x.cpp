vector<int> find(int arr[], int n , int x )
{
    int start=0, end=n, mid, temp=INT_MAX;
    vector<int> res;
    while (start<=end){
        mid = (start+end)/2;
        if (arr[mid]==x){
            temp=mid;
            break;}
        else if(arr[mid]>x){
            end=mid-1;}
        else{
            start=mid+1;}
    }
    if(temp==INT_MAX) return {-1,-1};
    int i=temp;
    while (arr[i]==x){
        res.push_back(i);
        i++;
    }
    i=temp-1;
    while (arr[i]==x){
        res.insert(res.begin(),i);
        i--;
    }
    // for (int i = 0; i < res.size(); i++)
    //     cout << res[i] << " ";
    // cout <<endl;
    int m = res.size();
    return {res[0],res[m-1]};
}
