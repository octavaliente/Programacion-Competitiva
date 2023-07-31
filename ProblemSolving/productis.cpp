#include <iostream>

using namespace std;

int main (){
    int cont[3];
    int num[3];
    int a, b, r;
    cin>>a>>b;

    r = a*b;

    num[0] = a;
    cout<<num[0]<<" "<<a<<endl;
    while (a/10>=1){
        cout<<"entra"<<endl;
        a = a/10;
        cont[0] ++;
    }

    num[1] = b;
    while (b/10>1){
            cout<<"entra b"<<endl;
        b = b/10;
        cont[1] ++;
    }

    num[2] = r;
    while (r/10>1){
        cout<<"entra r"<<endl;
        r = r/10;
        cont[2] ++;
    }

    if (cont[0]==0) cout<<"   "<<num[0]<<endl;
    else if (cont[0]==1) cout<<"  "<<num[0]<<endl;

    if (cont[1]==0) cout<<"x"<<"  "<<num[1]<<endl;
    else if (cont[1]==1) cout<<"x"<<" "<<num[1]<<endl;

    cout<<"----"<<endl;

    if (cont[2]==0) cout<<"   "<<num[2]<<endl;
    else if (cont[2]==1) cout<<"  "<<num[2]<<endl;
         else if (cont[2]==2) cout<<" "<<num[2]<<endl;
              else if (cont[2]==3) cout<<num[2]<<endl;

return 0;
}
