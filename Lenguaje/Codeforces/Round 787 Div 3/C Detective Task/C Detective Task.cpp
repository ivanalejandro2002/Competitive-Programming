#include <iostream>

using namespace std;
long long int t,n,i,a,uno,cero;
string cad;
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    cin>>t;
    while(t--){
        cin>>cad;
        uno=cad.size()-1;
        cero = 0;
        while(uno>=0 && cad[uno]!='1'){
            uno--;
        }
        if(uno>=0)uno--;
        while(cero<cad.size() && cad[cero]!='0'){
            cero++;
        }
        if(cero<cad.size())cero++;
        if(uno>cero){
            cout<<"1\n";
        }else{
            a = cero-uno-1;
            cout<<a<<"\n";
        }
    }
    return 0;
}
