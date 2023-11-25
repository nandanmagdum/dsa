#include<bits/stdc++.h>
using namespace std;
void reverseIterative(int a[], int n)
{
	int temp;
	for(int i=0; i<n/2; i++)
	{
		temp = a[i];
		a[i] = a[n-1-i];
		a[n-1-i] = temp;
	}
}

void reverseRecursive(int a[], int s, int e)
{
	int temp;
	if(s < e){
		temp = a[s];
		a[s] = a[e];
		a[e] = temp;
		reverseRecursive(a, s+1, e-1);
	}
	return ;
}

void printArray(int a[], int n)
{
	for(int i=0; i<n; i++)
	{
		cout<<a[i]<<" ";
	}
	cout<<endl;
}

int main()
{
	int n;
	cin>>n;
	int a[n];
	for(int i=0; i<n; i++)
	{
		cin>>a[i];
	}
	printArray(a, n);
	// reverseIterative(a, n);
	reverseRecursive(a, 0, n-1);
	printArray(a, n);
}