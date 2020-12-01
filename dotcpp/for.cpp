#include <algorithm>
#include <vector>
#include <iostream>
using namespace std;
int main()
{
	vector<int>arr;
	for ( int i =0; i < 10; i++){
		arr.push_back(i);
	}
	for(int i:arr)
	{
		cout<<i<<endl;
	}
	return 0;
}
