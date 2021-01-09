#include<bits/stdc++.h>
using namespace std;
int main()
{
    int N=0;
    cin>>N;
    vector<int> v;
//    int maxx=0;
//    int minn=40000;
    for(int i=0;i<N;i++)
    {
        int A=0;
        cin>>A;
        v.push_back(A);
//        if(A>maxx)
//            maxx=A;
//        if(A<minn)
//            minn=A;
    }
    sort(v.begin(),v.end());
//    cout<<"max"<<maxx;
//    cout<<"minn"<<minn;
//    int p=((maxx-minn)/2)+minn;
//	int p=v[N/2];
    int s=0;
    for(int i=0;i<N;i++)
    {
        s=s+abs(v[i]-v[N >> 1]);
    }
    cout<<s<<endl;
    return 0;
}





#include<bits/stdc++.h>

using namespace std;

const int N = 100010;

int n;
int a[N];

int main()
{
    cin >> n;
    for (int i = 0; i < n; i ++ ) cin >> a[i];
    sort(a, a + n);
    int res = 0;
    for (int i = 0; i < n; i ++ ) res += abs(a[i] - a[n / 2]);
    cout << res << endl;
    return 0;
}


#include<bits/stdc++.h>

using namespace std;

const int N = 100010;

int n;
int a[N];

int main()
{
    cin >> n;
    for (int i = 0; i < n; i ++ ) cin >> a[i];
    sort(a, a + n);
    int res = 0;
    for (int i = 0; i < n; i ++ ) res += abs(a[i] - a[i / 2]);
    cout << res << endl;
    return 0;
}


#include<bits/stdc++.h>

using namespace std;

const int N = 100010;

int n;
int a[N];

int main()
{
    cin >> n;
    for (int i = 0; i < n; i ++ ) cin >> a[i];
    nth_element(a, a + n / 2, a + n);
    int res = 0;
    for (int i = 0; i < n; i ++ ) res += abs(a[i] - a[n / 2]);
    cout << res << endl;
    return 0;
}

