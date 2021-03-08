#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> sums;
void print()
{
    int m=sums.size();
    int n=sums[0].size();
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
            cout<<sums[i][j]<<" ";
        cout<<endl;
    }
}
void NumMatrix(vector<vector<int>>& matrix) {

    int m = matrix.size();
    if(m>1)
    {
        int n=matrix[0].size();
        sums.resize(m, vector<int>(n + 1));
        for(int i=0;i<m;i++)
        {
            sums[0][i]=matrix[0][i];
        }
        for (int i = 1; i < m; i++)
            for(int j = 0;j < n; j++)
            {
                sums[i][j]=matrix[i][j]+sums[i-1][j];
                cout<<sums[i][j]<<" ";
            }

    }
    else

}

int sumRegion(int row1, int col1, int row2, int col2) {
    int s=0;
    for(int k=col1;k<=col2;k++)
    {
        if(row1!=row2)
        s+=sums[row2][k]-sums[row1-1][k];
        else
            s+=sums[row2][k];
    }
    return s;
}

int main()
{

    //vector<vector<int>>  matrix = {{3, 0, 1, 4, 2},{5, 6, 3, 2, 1},{1, 2, 0, 1, 5},{4, 1, 0, 1, 7},{1, 0, 3, 0, 5}};
    vector<vector<int>> matrix={{-4,-5}};
    NumMatrix(matrix);
//    print();
    cout<<sumRegion(0,0,0,1)<<endl;

}


/*
class NumMatrix {
public:
    vector<vector<int>> sums;
    NumMatrix(vector<vector<int>>& matrix) {

        int m = matrix.size();
        if(m>0)
        {
            int n=matrix[0].size();
            sums.resize(m+1, vector<int>(n + 1));
            for (int i = 0; i < m; i++) 
                for(int j = 0;j < n; j++)
                    sums[i+1][j+1]=matrix[i][j]+sums[i][j+1];
        }
    }
    
    int sumRegion(int row1, int col1, int row2, int col2) {
        int s=0;
        for(int k=col1+1;k<=col2+1;k++)
        {
            s+=sums[row2+1][k]-sums[row1][k];
        }
        return s;
    }
};
*/