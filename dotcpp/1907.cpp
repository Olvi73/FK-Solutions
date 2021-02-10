/*
1 3 6 10 15 21 28 36
2 5 9 14 20 27 35
4 8 13 19 26 34
7 12 18 25 33
11 17 24 32
16 23 31
22 30
29
*/

#include <iostream>
using namespace std;
int mat[100][100];
void initMat(){
    int cnt=1;
    for(int j=0; j<100; j++)
        for(int k=0; k<=j; k++)
            mat[j-k][k] = cnt++;
}
void output(int x){
    for(int j=0; j<x; j++){
        for(int k=0; k+j<x; k++){
            cout<<mat[j][k]<<' ';
        }
        cout<<endl;
    }
}
int main(){
    initMat();
    int x;
    while(cin>>x) output(x);
    return 0;
}
