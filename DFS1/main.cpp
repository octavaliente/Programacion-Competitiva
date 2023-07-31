/**
    1.Recibir datos de entrada +
    2.Aplicar Algoritmo de Dijkstra y agregar vector de padres +
    3.Comprobar si existe en el vector distancia un valor entre el origen y destino o principio y fin del camino
    4.En caso de ser false imprimir un -1, en caso de ser true debemos entrar en un bucle
    5.El bucle nos construira un vector donde irá recorriendo el vector padres y buscando desde el fin hacia el principio
    6.El vector obtenido esta realizado el camino pero de fin a principio leyendo de izquierda a derecha,
      por lo tanto lo debemos imprimir haciendo un reverse o un for que empiece por el final.

**/

#include <bits/stdc++.h>

using namespace std;

struct edge {
    int destino, costo;
};
int main()
{
    int n, m;
    cin>>n>>m;

    vector <vector<edge>> ady(n+1);

    for(int i=0;i<m;i++)
    {
        int a, b, c;
        cin>>a>>b>>c;
        ady[a].push_back({b, c});
        ady[b].push_back({a, c});
    }

    long long inf=100000000001;
    vector<long long>dist(n+1, inf);
    vector<int>padres(n+1, -1);
    priority_queue <pair<long long,int>> pq;
    dist[1]=0;
    pq.push({0,1}); ///First Peso del edge, Second Numero de nodo

    while (pq.size()>0)
    {
        int nodo = pq.top().second;
        pq.pop();

        for(int i=0;i<(int)ady[nodo].size();i++)
        {
            int vecino = ady[nodo][i].destino;
            int costo = ady[nodo][i].costo;
            if (dist[nodo]+costo < dist[vecino])
            {
                dist[vecino]=dist[nodo]+costo;
                padres[vecino]=nodo;
                pq.push({-dist[vecino],vecino});
            }
        }

    }
    ///vector Distancia y Padres Cargado

    if(dist[n]<inf)
    {
        int fin=n;
        vector<int>camino;

        while(fin!=-1)
        {
            camino.push_back(fin);
            fin = padres[fin];
        }
        reverse(camino.begin(),camino.end());
        for(int j=0;j<(int)camino.size();j++)
        {
            cout<<camino[j]<<" ";
        }
        cout<<endl;
    }
    else cout<<"-1"<<endl;

return 0;
}
