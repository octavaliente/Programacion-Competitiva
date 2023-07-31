#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    cin>>s;
    int cont = 1;
    int cont2 = 1;
    for (int i=1; i<=(int)s.size(); i++)
    {
        if (s[i]==s[i-1]) cont++;
        else
        {
            if(cont>1)cont2=max(cont2,cont);
            cont = 1;
        }
    }
    cout<<cont2<<endl;
    return 0;
}
