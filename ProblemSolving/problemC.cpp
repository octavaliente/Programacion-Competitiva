#include <iostream>

using namespace std;

int main(){
    int n, a, b;
    cin>>n>>a>>b;
    int sun[n];
    int pasos=0;
    for (int i=0;i<n;i++){
        cin>>sun[i];
    }

    for (int i=0;i<n;i++){
            if (sun[i]==0){
                if (b>0){
                    b-=1;
                    pasos++;
                }
                else if (a>0){
                    a-=1;
                    pasos++;
                }
            }
            else {
                if (b>0) {
                    b-=1;
                    pasos++;
                }
                else if (a>0){
                    a-=1;
                    pasos++;
                    b++;
                }
            }
        }
    cout<<pasos<<endl;


return 0;
}
