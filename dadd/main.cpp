#include <iostream>

using namespace std;

int main()
{
    int x;
    int aux=0;
    int cont=0;
    int i;
    cin>>x;
    if (x%2==0){
        for (i=0;i<=x;i++){
            if (i%2==0){
                cont+=i;
            }
            else {
                aux+=i;
            }
        }
    cout<<cont-aux<<endl;
    }
    if (x%2!=0){
        for (i=0;i<=x;i++){
            if (i%2==0){
                cont+=i;
            }
            else {
                aux+=i;
            }
        }
    cout<<aux-cont<<endl;
    }
    return 0;
}
