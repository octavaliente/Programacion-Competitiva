#include <iostream>
#include <string>

using namespace std;

/*int main (){
    string str;
    int lgt=0;
    int cont=0;
    getline (cin, str);
    lgt=str.size();

    for (int i=0;i<lgt;i++){

        if (str[i]<='Z') cont++;

    }
    if (cont==lgt){

        for (int i=1;i<lgt;i++) str[i] = tolower(str[i]);

    }

    else if (str[0]>'Z'&&cont==lgt-1){

        for (int i=1;i<lgt;i++) str[i] = tolower(str[i]);
        str[0]=toupper(str[0]);

    }
    cout<<str<<endl;
return 0;
}*/

/*int main()
{
    string str;
    int cont = 0;
    getline(cin,str);
    for (int i=1;i<str.size();i++){
        if (str[i]<='Z') cont++;
    }
    if (cont!=0 || str[0]>'Z'){
    for (int i=0;i<str.size();i++) str[i] = tolower(str[i]);
    str[0]=toupper(str[0]);
    }
    cout<<str<<endl;
    return 0;
}
*/
int main()
{
    string pal;
    getline(cin,pal);
    bool lowerc = true;
    int max = pal.size();

    for(int i = 1;i < max; i++)
    {
        if(pal[i] >= 'a' && pal[i] <= 'z')
        {
            lowerc = false;
            break;
        }
    }
    if(lowerc)
    {
        for(int i = 0; i < max; i++)
        {
            if(pal[i] >= 'A' && pal[i] <= 'Z')
            pal[i]+=32;
            else pal[i]-=32;
        }
    }
    cout << pal << endl;
    return 0;
}
