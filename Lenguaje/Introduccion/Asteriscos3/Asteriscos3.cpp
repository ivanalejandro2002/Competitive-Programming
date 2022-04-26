#include <iostream>
using namespace std;
int n,i,j;
int main(){
    cin>>n;
    for(i=0;i<n;i++){
        for(j=0;j<n-i-1;j++){
            cout<<" ";
        }
        for(j=0;j<2*i+1;j++){
            cout<<"*";
        }
        cout<<"\n";
    }
    return 0;
}
