#include <stdio.h>
#include <string.h>
#include <bits/stdc++.h> 
using namespace std;
double p[15];

char str[20];

double res, t;
int main(){
	//GB MB KB B
	//7  13 11 2
	p[0] = 1;
	p[9] = 1024;
	p[11] = 1024 * 1024;
	p[5] = 1024 * 1024 * 1024;
	scanf("%s",str);
	int i = 0;
	int len = strlen(str);
	while(str[i] >= '0' && str[i] <= '9') res = res * 10 + (str[i] - '0'), i++;
	char c = str[i];
	char c2;
	if(str[len - 2] >= 'A' && str[len - 2] <= 'Z')
		c2 = str[len- 2];
	else
		c2 = str[len - 1];
	
	res *= p[c - 'B'];   //先转换为B，然后根据c2对应的进制进行转换 
	res /=  (p[c2 - 'B']) * 1.0;
	
	printf("%.6f",res);
	cout<<c<<"  "<<c2;
	return 0;
}
