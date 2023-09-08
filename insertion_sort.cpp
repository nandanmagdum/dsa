// insertion sort
#include<bits/stdc++.h>
using namespace std;
void insertion_sort(vector<int>& v){
    int n = v.size();
    if(n == 1) return;
    for(int i=1; i<n; i++){
        int key = v[i];
        int j = i-1;
        while(key < v[j] && j >= 0){
            v[j+1] = v[j];
            j--;
        }
        v[j+1] = key;
    }
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
				insertion_sort(nums);
		for(auto &i: nums) cout<<i<<" "; cout<<endl;
	} 
}