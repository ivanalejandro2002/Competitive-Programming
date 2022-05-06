#include <iostream>
#include <vector>
using namespace std;
vector<int> sol;
vector<vector<int > > mapa;
long long int t,n,i,a,raiz,suma;
vector<int> indegree;
void busca(int nodo){
    for(int z: mapa[nodo]){
        sol.push_back(z);
        busca(z);
    }
    if(mapa[nodo].size()==0){
        cout<<sol.size()<<"\n";
        for(int z: sol){
            cout<<z<<" ";
        }
        cout<<"\n";
        sol.clear();
    }
}
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    cin>>t;
    while(t--){
        cin>>n;
        indegree.resize(n+1);
        mapa.resize(n+1);
        for(i=1;i<=n;i++){
            cin>>a;
            if(a==i){
                raiz=i;
            }else{
                indegree[a]++;
                mapa[a].push_back(i);
            }
        }
        suma=0;
        for(i=1;i<indegree.size();i++){
            suma += max(indegree[i]-1,0);
        }
        suma++;
        sol.push_back(raiz);
        cout<<suma<<"\n";
        busca(raiz);
        indegree.clear();
        mapa.clear();
        cout<<"\n";
    }
    return 0;
}
