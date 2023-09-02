#include<bits/stdc++.h>
using namespace std;

void BubbleSort(vector<int> &v){
	int flag = 0;
	for(int i=0; i<v.size()-1; i++)
	{
		for(int j=0; j<v.size()-1-i; j++){
			
			if(v[j] > v[j+1]) {
				swap(v[j], v[j+1]);
				flag = 1;
			}
		}
		if(flag == 0) return ;
	}
	return ;	
}

int main()
{
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		vector<int> nums;
		int temp;
		for(int i=0; i<n; i++){
			cin>>temp;
			nums.push_back(temp); }
		for(auto &i: nums) cout<<i<<" "; cout<<endl;
				BubbleSort(nums);
		for(auto &i: nums) cout<<i<<" "; cout<<endl;
	} 
}