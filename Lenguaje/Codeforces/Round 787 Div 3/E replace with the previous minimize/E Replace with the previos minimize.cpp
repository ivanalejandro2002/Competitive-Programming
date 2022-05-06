#include <iostream>

using namespace std;
long long int t,n,i,a,k,resta,cont;
string cad;
char maximos[256];
char indice,comp;
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    cin>>t;
    while(t--){
        cin>>n>>k>>cad;
        for(char co = 'a';co<='z';co++){
            maximos[(int)co]=co;
        }
        if(k>=25){
            for(i=0;i<n;i++){
                cout<<"a";
            }
            cout<<"\n";
        }else{
            for(i=0;i<cad.size() && k>0;i++){
                if(maximos[(int)cad[i]]!='a'){
                    resta = maximos[(int)cad[i]] - 'a';
                    cont = 0;
                    for(char p = maximos[(int)cad[i]];maximos[(int)p]!='a';p--){
                        cont++;
                    }
                    resta = min(resta,cont);
                    resta = min(k,resta);
                    k-=resta;
                    indice =maximos[(int)cad[i]];
                    comp = maximos[(int)cad[i]] - (char)resta;
                    if(resta==cont)comp = 'a';
                    while(indice>'a' && maximos[(int)indice]>=comp){
                        maximos[(int)indice]=comp;
                        indice--;
                    }
                }
            }
            for(i=0;i<cad.size();i++){
                cout<<maximos[(int)cad[i]];
            }
            cout<<"\n";
        }
    }
    return 0;
}
