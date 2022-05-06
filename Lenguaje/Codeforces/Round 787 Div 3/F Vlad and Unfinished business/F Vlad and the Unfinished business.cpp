#include <iostream>
#include <vector>
using namespace std;
vector<vector<long long int> > mapa;
vector<bool> lleno;
long long int t,n,i,a,k,x,y;
long long int uno,dos,suma;
bool ke;
vector<int> trayecto;
vector<int> solucion;
void busca(int nodo, int padre){
    trayecto.push_back(nodo);
    if(nodo==y){
        ke=1;
        solucion = trayecto;
        return;
    }
    for(int z: mapa[nodo]){
        if(z!=padre){
            if(ke)return;
            busca(z,nodo);
        }
    }
    trayecto.pop_back();
}
long long int calcula(int nodo,int nivel,bool dentro,int padre){
    long long int total = 0;
    for(int z: mapa[nodo]){
        if(z!=padre){
            if(dentro && nivel<solucion.size()){
                if(z!=solucion[nivel]){
                    total+= calcula(z,nivel+1,0,nodo);
                }
            }else{
                total+= calcula(z,nivel+1,0,nodo);
            }
        }
    }
    if(dentro && nivel<solucion.size()){
        total +=calcula(solucion[nivel],nivel+1,dentro,nodo);
    }
    if(nodo!=x){
        if(!dentro){
            if(lleno[nodo]){
                lleno[padre] = 1;
                return total + 2;
            }else{
                return total;
            }
        }else{
            if(lleno[nodo]){
                lleno[padre] = 1;
                return total + 1;
            }else{
                return total;
            }
        }
    }
    return total;
}
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    cin>>t;
    while(t--){
        suma=0;
        cin>>n>>k;
        mapa.resize(n+1);
        lleno.resize(n+1);
        cin>>x>>y;
        for(i=0;i<k;i++){
            cin>>a;
            if(a!=x && a!=y)lleno[a]=1;
        }
        lleno[y] = 1;
        for(i=1;i<n;i++){
            cin>>uno>>dos;
            mapa[uno].push_back(dos);
            mapa[dos].push_back(uno);
        }
        ke=0;
        busca(x,0);
        suma = calcula(x,1,1,0);
        cout<<suma<<"\n";
        mapa.clear();
        lleno.clear();
        trayecto.clear();
        solucion.clear();
    }
    return 0;
}
