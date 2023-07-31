#include <iostream>
#include <string>

using namespace std;

int main () {
    string str;
    getline(cin,str);
    int sz;
    sz = str.size();
    for (int i=sz;i>=0;i--){
        cout<<str[i];
    }
    cout<<endl;
return 0;
}

