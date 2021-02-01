//#include<bits/stdc++.h>
//using namespace std;
//int main()
//{
//    int n;
//    cin>>n;
//
//    return 0;
//}


#include <iostream>
#include <algorithm>
#include <cstring>
#include <cstdio>

using namespace std;
const int N = 1000;
int n, num;
int a[N];
char h[26];//十六进制

int main(){
    for(int i=0;i<26;i++)
    {
        h[i]=''

    }
    cin >> n;
    do{  //不用while循环,可以有效处理n == 0的情况
        a[num ++] = n % 16;
        n /= 16;
    }while(n != 0);

    for(int i = num - 1; i >= 0; i --){
        int n = a[i];
        cout << h[n];
    }

    return 0;
}

