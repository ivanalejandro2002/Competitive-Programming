#include<iostream>
using namespace std;
int n,i,j;
int main(){
    cin>>n;
    for(i = 1; i <= n ;i++){
        for(j = 0; j < i ;j++){
            cout<<"*";
        }
        cout<<"\n";
    }
    return 0;
}
