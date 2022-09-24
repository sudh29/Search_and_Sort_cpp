#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	
	int t;
	cin>>t;
	while(t--){
		int n,c;
		cin>>n>>c;
		int stall_location[n];
		for(int i=0;i<n;i++) cin>>stall_location[i];
		sort(stall_location,stall_location+n);
		int start=1;
		int end=1e9;
		int ans=0;
		while(start<=end){
			int mid = (start+end)/2;
			int cow=1;
			int prev = stall_location[0];
			for(int i=1;i<n;i++){
				if(stall_location[i]-prev>=mid){
					cow++;
					prev=stall_location[i];
					if(c==cow) break;
				}
			}
			if (c==cow){
				ans=mid;
				start=mid+1;
			}
			else{
				end=mid-1;
			}
		}
		cout<<ans<<endl;
	}
	return 0;
}
