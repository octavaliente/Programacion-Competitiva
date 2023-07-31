#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, m;
    cin>>n>>m;

    vector<vector<int>> ady(n+1);

    for(int i=0;i<m;i++)
    {
        int a, b;
        cin>>a>>b;
        ady[a].push_back(b);
        ady[b].push_back(a);
    }

    int origen = 1;
    vector<long long> dist(n+1, -1);
    vector<int>p(n+1, -1);
    queue <int> cola;
    dist[origen]=0;
    cola.push(origen);

    while(cola.size()>0)
    {
        int nodo = cola.front();
        cola.pop();

        for(int i=0;i<ady[nodo].size();i++)
        {
            int vecino = ady[nodo][i];
            if(dist[vecino] == -1)
            {
                dist[vecino] = dist[nodo] + 1;
                cola.push(vecino);
                p[vecino] = nodo;
            }
        }
    }

    int fin = n;
    vector<int> camino;
    while(fin != -1)
    {
        camino.push_back(fin);
        fin = p[fin];
    }

    reverse(camino.begin(), camino.end());
    cout<<(int)camino.size()<<endl;
    for(int i=0;i<camino.size();i++)
    {
        cout<<camino[i]<<" ";
    }
    cout<<endl;

    return 0;
}
