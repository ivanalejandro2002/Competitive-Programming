#include <iostream>
using namespace std;
int n,m,i,a;
int main(){
    cin>>n>>m;
    for(i=0;i<n;i++){
        for(a=0;a<m;a++){
            cout<<"*";
        }
        cout<<"\n";
    }
    return 0;
}
