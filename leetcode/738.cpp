#include <bits/stdc++.h>
//C++ 11 to_string
using namespace std; 
int main(void)
{
	int N=987654321;
	string strNum = to_string(N);

        int flag = strNum.size();
        for (int i = strNum.size() - 1; i > 0; i--) {
            if (strNum[i - 1] > strNum[i] ) {
                flag = i;
                strNum[i - 1]--;
            }
        }
        for (int i = flag; i < strNum.size(); i++) {
            strNum[i] = '9';
        }
        cout<< stoi(strNum);
}

