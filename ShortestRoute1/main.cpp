#include <bits/stdc++.h>

using namespace std;

struct arista
{
    int destino, costo;
};

int main()
{
    int n, m;
    cin>>n>>m;

    vector<vector<arista>> ady(n+1);

    for(int i=0; i<m; i++)
    {
        int a, b, costo;
        cin>>a>>b>>costo;
        ady[a].push_back({b, costo});
    }

    long long inf=10000000000000000;
    vector<long long>dist(n+1, inf);
    vector<bool>inmejorable(n+1, false);
    priority_queue<pair<long long, int>>pq;
    dist[1]=0;
    pq.push({0, 1});

    while(pq.size()>0)
    {
        int nodo = pq.top().second;
        pq.pop();
        if (inmejorable[nodo]==true) continue;
        inmejorable[nodo] = true;
        for(int i=0; i<ady[nodo].size(); i++)
        {
            int vecino = ady[nodo][i].destino;
            int costo = ady[nodo][i].costo;

            if (dist[nodo]+costo < dist[vecino])
            {
                dist[vecino] = dist[nodo]+costo;
                pq.push({-dist[vecino], vecino});
            }
        }
    }

    for (int i=1; i<=n; i++)
    {
        cout<<dist[i]<<" ";
    }
    cout<<endl;
    return 0;
}
