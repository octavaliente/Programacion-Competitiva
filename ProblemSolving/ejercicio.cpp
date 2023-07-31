#include <iostream>
#include <string>

using namespace std;

int main (){
    string palabra;
    int aux;
    getline (cin, palabra);

    aux = palabra.size();
    for (int i=0;i<aux+2;i++){
        cout<<"*";
    }
    cout<<endl;
    cout<<"*"<<palabra<<"*"<<endl;
    for (int i=0;i<aux+2;i++){
        cout<<"*";
    }

return 0;
}
