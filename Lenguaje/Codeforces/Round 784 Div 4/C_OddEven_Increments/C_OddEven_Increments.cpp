#include<iostream>
using namespace std;
int n,i,j,t;
bool possible=0;
int act[4];
int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    cin >> t;
    while(t--){
        cin >> n;
        cin >> act[0] >> act[1];
        act[0] %= 2;
        act[1] %= 2;
        possible = 1;
        for(i = 2;i < n && possible;i++){
            cin >> j;
            if(act[i % 2] != j % 2)possible = 0;
        }
        (possible)? cout<<"YES\n" : cout<<"NO\n";
        for(i; i < n ;i++){
            cin>>j;
        }
    }
    return 0;
}
