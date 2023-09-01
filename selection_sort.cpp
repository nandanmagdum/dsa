#include<bits/stdc++.h>
using namespace std;

void SelectionSort(vector<int>& nums){
    for(int i=0; i<nums.size()-1; i++){
        int min = nums[i];
        int minIndex = i;
        for(int j=i+1; j<nums.size(); j++){
            if(nums[j] < min){
                min = nums[j];
                minIndex = j;
            }
        }
        swap(nums[i], nums[minIndex]);
    }
}

int main()
{
    vector<int> a;
    int i = 10;
    while(i--){
        a.push_back(i);
    }
    for(auto &i : a){
        cout<<i<<" ";
    } cout<<endl;
    SelectionSort(a);
    for(auto &i : a){
        cout<<i<<" ";
    } cout<<endl;
}