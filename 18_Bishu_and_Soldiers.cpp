#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin>>n;
	vector<int> soldier_power;
	int temp;
	for(int i=0;i<n;i++){
		cin>>temp;
		soldier_power.push_back(temp);
	}
	sort(soldier_power.begin(),soldier_power.end());
	int q;
	cin>>q;
	int bishnu_power;
	while (q--){
		cin>>bishnu_power;
		int count=0;
		int cumulative_strength=0;
		int flag=0;
		for(int i=0; i<n;i++){
			if(bishnu_power>=soldier_power[i]){
				count++;
				cumulative_strength+=soldier_power[i];
			}
			else{
				flag=1;
				cout<<count<<" "<<cumulative_strength<<endl;
				break;
			}
			if(i==n-1){
				flag=1;
				cout<<count<<" "<<cumulative_strength<<endl;
			}
		}
	}
	return 0;
}
