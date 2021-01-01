#include <bits/stdc++.h>
using namespace std;
bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int count=0;
        int flower_size=flowerbed.size();
        if(flowerbed[0]==0&&flowerbed[1]==0)
            {
                count++;
                flowerbed[0]=1; 
            }
        for(int i=1;i<flower_size-1;i++)
        {
            if(flowerbed[i]==0&&flowerbed[i-1]==0&&flowerbed[i+1]==0)    
            {
                count++;
                flowerbed[i]=1; 
            }
        }
        if(flowerbed[flower_size-1]==0&&flowerbed[flower_size-2]==0)
            count++;
        return count>=n?true:false;
}
bool canPlaceFlowers2(vector<int>& flowerbed, int n) {
        int flower=1;
        int count=0;
        flowerbed.push_back(0);
        int flower_size=flowerbed.size();
        for(int i=0;i<flowerbed.size();i++)
        {
            if(flowerbed[i]==0)
            {
                flower++;
                if(flower==3)
                {
                    flower=1;
                    count++;
                }
            }
            if(flowerbed[i]==1)
                flower=0;
        }
        return count<n?false:true;
}
int main()
{
	vector<int> flower={1,0,0,0,1,0,0};
	int n=2;
	for(int i=0;i<flower.size();i++)
		cout<<flower[i]<<"  ";
	bool c=canPlaceFlowers(flower,n);
	
	cout<<endl;
	for(int i=0;i<flower.size();i++)
	{
		cout<<flower[i]<<"  ";
		cout<<i<<endl;
	}
		
	if(c)
		cout<<"true";
	else
		cout<<"false";
	return 0;
}
