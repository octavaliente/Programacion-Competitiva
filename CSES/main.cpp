#include <bits/stdc++.h>
#include <algorithm>

using namespace std;

int main()
{
    int n, x;
    cin>>n>>x;
    pair <int,pair<int,int>> pos;
    bool cond=false;
    vector<int>v(n);
    vector<int>v2(n);
    for (int i=0; i<n; i++)
    {
        cin>>v[i];
        v2[i]=v[i];
    }
    sort(v2.begin(),v2.end());
    for (int i=0; i<n&&cond==false; i++)
    {
        for(int j=0; j<n&&cond==false; j++)
        {
            if(i!=j)
            {
                int a=x-v[i]-v[j];
                int b=binary_search(v2.begin(),v2.end(),a);
                if (b)
                {
                    for(int k=0; k<n; k++)
                    {
                        if(k!=i&&k!=j)
                        {
                            if (a==v[k])
                            {
                                pos.first=i;
                                pos.second.first=j;
                                pos.second.second=k;
                                cond = true;
                            }
                        }
                    }
                }
            }
        }
    }

    if (cond)
    {
        cout<<pos.first+1<<" "<<pos.second.first+1<<" "<<pos.second.second+1<<endl;
    }
    else cout<<"IMPOSSIBLE"<<endl;
    return 0;
}

