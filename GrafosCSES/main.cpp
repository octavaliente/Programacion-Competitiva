#include <bits/stdc++.h>

using namespace std;

int main()
{
    ifstream cin ("antivirus.in");
    ofstream cout ("antivirus.out");

    int n;
    char letra1, letra2;
    cin>>n>>letra1>>letra2;

    string s;
    cin>>s;

    int cant=0;
    for (int i=1;i<n-1;i++)
    {
        if (s[i]==letra2)
        {
            if (s[i-1]==letra1&&s[i+1]==letra1)
            {
                cant++;
                s[i]='-';
            }
        }
    }
    cout<<n-cant<<endl;
    for (int i=0;i<n;i++)
    {
        if (s[i]!='-')
        {
            cout<<s[i];
        }
    }
    cout<<endl;
    return 0;
}
