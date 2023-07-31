#include <iostream>

using namespace std;

int main(){
    int N;
    int cont;
    cin>>N;
    for (int i=1;i<=N;i++){
        cont = 0;
        for (int j=1;j<i;j++){
            if (i%j == 0){
                cont++;
                }
        }
    if (cont==1) cout<<i<<endl;
    }
return 0;
}

