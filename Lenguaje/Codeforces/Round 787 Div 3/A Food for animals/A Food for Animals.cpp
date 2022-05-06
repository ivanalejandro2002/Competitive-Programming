#include <iostream>

using namespace std;
long long int t,a,b,c,x,y;
int main()
{
    cin>>t;
    while(t--){
        cin>>a>>b>>c>>x>>y;
        a-=x;
        if(a<0){
            c+=a;
        }
        b-=y;
        if(b<0){
            c+=b;
        }
        if(c<0){
            cout<<"NO\n";
        }else{
            cout<<"YES\n";
        }
    }
    return 0;
}
