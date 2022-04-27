#include <iostream>
using namespace std;
int w,b;
int cont;
bool init,possible;
int t,i,j,n;
string cad;
int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    cin>>t;
    while(t--){
        cin>>n>>cad;
        possible = 1;
        w = b = cont = init = 0;
        for(i=0;i<n;i++){
            if(cad[i]=='W'){
                if(init){
                    if(w == 0 || b == 0 || cont <= 1){
                        possible = 0;
                    }
                }
                w = b = cont = 0;
                init = 0;
            }else{
                init = 1;
                (cad[i] == 'B')? b++ : w++;
                cont++;
            }
        }
        if(init){
            if(!w || !b || cont <= 1){
                possible = 0;
            }
        }
        (possible)? cout<<"YES\n" : cout<<"NO\n";
    }
}
