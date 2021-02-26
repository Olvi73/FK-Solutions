#include<bits/stdc++.h>
using namespace std;
long long convertDecimalToBinary(int n)
{
    long long binaryNumber = 0;
    int remainder, i = 1, step = 1;

    while (n!=0)
    {
        remainder = n%2;
        n /= 2;
        binaryNumber += remainder*i;
        i *= 10;
    }
    return binaryNumber;
}
int main()
{
    int k=15;
    //k=10101
    int sub=k;
    do{
        sub=(sub-1)&k;
        if(1&sub)
        {
            cout<<sub<<"  ";
            cout<<convertDecimalToBinary(sub)<<endl;
        }

        //a=-1&k  a=k
    }
    while(sub!=k);

}
