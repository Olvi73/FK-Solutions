#include<bits/stdc++.h>
using namespace std;

vector<double> medianSlidingWindow(vector<int>& nums, int k) {
        int left=0,right=0;
        int lenth=nums.size();
        vector<double> res;
        vector<int> temp;
        bool n= k%2==0?true:false;
        while(right<lenth)
        {
            if(right-left+1<k)
            {
                temp.push_back(nums[right]);
                right++;
                if(right-left+1==k) temp.push_back(nums[right]);
            }

            if(right-left+1==k)
            {
                if(n)
                {
                    vector<int> t1(temp);
                    for(auto i:t1)
                        cout<<i<<endl;
                    nth_element(t1.begin(),t1.begin()+k/2,t1.end());
                    nth_element(t1.begin(),t1.begin()+k/2-1,t1.end());
                    
                    cout<<"中位数:"<<(double(t1[k/2-1])+double(t1[k/2]))/2<<"     "<<t1[k/2-1]<<"        "<<t1[k/2]<<endl;
                    cout<<"3:"<<t1[3]<<"    4:"<<t1[4]<<endl;
					cout<<"----------"<<endl;
                    double ans=(double(t1[k/2-1])+double(t1[k/2]))/2;
                    res.push_back(ans);
                    t1.clear();
                }
                else
                {
                    vector<int> t2(temp);
                    for(auto i:t2)
                        cout<<i<<endl;
                    nth_element(t2.begin(),t2.begin()+k/2,t2.end());
                    cout<<"中位数:"<<t2[k/2]<<endl;
                    cout<<"----------"<<endl;
                    res.push_back(t2[k/2]);
                    t2.clear();
                }
                vector<int>::iterator it = temp.begin();
                temp.erase(it);
                right++;
                if(right<lenth)
                temp.push_back(nums[right]);
                left++;
            }
        }
        return res;
    }
int main()
{

    vector<int> nums={5,5,8,1,4,7,1,3,8,4,5};
    int k=8;
    vector<double> res;
    res=medianSlidingWindow(nums,k);
    for(auto i:res)
        cout<<i<<endl;
}


/*
class Solution {
public:
    vector<double> medianSlidingWindow(vector<int>& nums, int k) {
        int left=0,right=0;
        int lenth=nums.size();
        vector<double> res;
        vector<int> temp;
        bool n= k%2==0?true:false;
        if(lenth==1||k==1) 
        {
           for(auto i: nums)
                res.push_back(i);
            return res;
        }

        while(right<lenth)
        {
            if(right-left+1<k)
            {
                temp.push_back(nums[right]);
                right++;
                if(right-left+1==k) temp.push_back(nums[right]);
            }

            if(right-left+1==k)
            {
                if(n)
                {
                    vector<int> t1(temp);
                    nth_element(t1.begin(),t1.begin()+(k/2),t1.end());
                    nth_element(t1.begin(),t1.begin()+(k-1)/2,t1.end());
                    double ans=(double(t1[(k-1)/2])+double(t1[k/2]))/2;
                    res.push_back(ans);

                }
                else
                {
                    vector<int> t2(temp);
                    nth_element(t2.begin(),t2.begin()+k/2,t2.end());
                    res.push_back(t2[k/2]);

                }
                vector<int>::iterator it = temp.begin();
                temp.erase(it);
                right++;
                if(right<lenth)
                temp.push_back(nums[right]);
                left++;
            }
        }
        return res;
    }
};
*/
 
