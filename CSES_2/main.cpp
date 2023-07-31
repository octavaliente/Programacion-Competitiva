#include <bits/stdc++.h>

using namespace std;

int main()
{
    int N; cin>>N;
    set<int>l;

    for (int i=0;i<N;i++)
    {
        int a; cin>>a;
        l.insert(a);
    }
    cout<<(int)l.size()<<endl;
    return 0;
}
