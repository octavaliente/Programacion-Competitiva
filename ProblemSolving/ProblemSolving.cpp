#include <iostream>
#include <string>

using namespace std;

int main()
{
    string linea = "----";
    int a, b, r, num,cont;
    cin>>a>>b;
    r = a*b;

    num = a;

    while(a/10>1){
        a=a/10;
        cont++;
        }
    if (cont==2) cout<<num<<endl;
    else if (cont==1) cout<<" "<<num<<endl;
         else cout<<"  "<<num<<endl;

    num = b;
    cont = 0;

    while(b/10>1){
        b=b/10;
        cont++;
        }
    if (cont==2) cout<<"x"<<num<<endl;
    else if (cont==1) cout<<"x"<<" "<<num<<endl;
         else cout<<"x"<<"  "<<num<<endl;
    cout<<linea<<endl;
    cont = 0;
    num = r;

    while(r/10>1){
        r=r/10;
        cont++;
        }
    if (cont==2) cout<<" "<<num<<endl;
    else if (cont==1) cout<<"  "<<num<<endl;
         else if (cont==0)cout<<"   "<<num<<endl;
              else cout<<num<<endl;

return 0;
}
 /*
      12
    x  5
    ----
      60
 */
