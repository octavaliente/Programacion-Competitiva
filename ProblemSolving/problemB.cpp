#include <iostream>
#include <algorithm>

using namespace std;

struct segmento {
 int inicio;
 int fin;
};

int main (){
    int N;
    int minn=1000000001;
    int maxx=-1;
    int no=0;

    cin>>N;
    bool resultado = false;
    int cont=0;
    segmento st[100005];

    for (int i=0;i<N;i++){
        cin>>st[i].inicio>>st[i].fin;
        minn = min(st[i].inicio,minn);
        maxx = max(st[i].fin,maxx);
    }

    if (N==1){
        cout<<N<<endl;
        no+=1;
    }
    if (no==0){
    for (int i=0;i<N;i++){
        if (maxx==st[i].fin && minn==st[i].inicio){
            resultado=true;
            cont= i+1;
        }
    }

    if (resultado){
        cout<<cont<<endl;
    }
    else {
        cout<<-1<<endl;
    }
    }
    return 0;
}
