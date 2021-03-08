#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
	//根据初始状态来全排列（字典序） 
    int num[6]={1,2,3,4,5,6};
    do
    {
        cout<<num[0]<<" "<<num[1]<<" "<<num[2]<<" "<<num[3]<<" "<<num[4]<<" "<<num[5]<<endl;
    }while(next_permutation(num,num+6));
    return 0;
}
