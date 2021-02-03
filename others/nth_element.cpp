#include<bits/stdc++.h>
using namespace std;
int main()
{
// {0,3,9,9,9,1};
// {1,4,7,1,3,8,4,5};
	vector<int> nums={0,3,6,8,7,1};
	vector<int> nums2={0,3,9,9,9,1};
	int n=nums.size()/2-1;
	for(auto i:nums)
	cout<<i<<" ";
	cout<<endl;
	nth_element(nums.begin(),nums.begin()+n,nums.end());
	for(auto i:nums)
	cout<<i<<" ";
	cout<<endl;
	nth_element(nums.begin(),nums.begin()+n+1,nums.end());
	for(auto i:nums)
	cout<<i<<" ";
	cout<<endl;
	cout<<endl;
	sort(nums.begin(),nums.end()); 
	for(auto i:nums)
	cout<<i<<" ";
	cout<<endl;
	
	cout<<endl;
	for(auto i:nums2)
	cout<<i<<" ";
	cout<<endl;
	nth_element(nums2.begin(),nums2.begin()+n+1,nums2.end());
	for(auto i:nums2)
	cout<<i<<" ";
	cout<<endl;
	nth_element(nums2.begin(),nums2.begin()+n,nums2.end());
	for(auto i:nums2)
	cout<<i<<" ";
	cout<<endl;
} 
