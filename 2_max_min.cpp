#include<bits/stdc++.h>
using namespace std;
pair<int, int> MaxMin(vector<int> &a)
{
	pair<int, int> ans;
	int max = INT_MIN;
	int min = INT_MAX;
	for(int i=0; i<a.size(); i++)
	{
		if(a[i] > max) max = a[i];
		if(a[i] < min) min = a[i];
	}
	ans.first = max;
	ans.second = min;
	return ans;
}
int main()
{
	int n;
	cin>>n;
	int temp;
	vector<int> a;
	for(int i=0; i<n; i++)
	{
		cin>>temp;
		a.push_back(temp);
	}
	pair<int, int> max_min = MaxMin(a);
	cout<<max_min.first<<" "<<max_min.second<<endl;
}