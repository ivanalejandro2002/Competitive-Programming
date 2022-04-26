#include <iostream>
#include <map>
using namespace std;
map<int,int> values;
int n,sol,i,j,t;
int main(){
    cin>>t;
    while(t--){
        cin>>n;
        sol=-1;
        for(i=0;i<n;i++){
            cin>>j;
            values[j]++;
            if(values[j]>=3)sol=j;
        }
        cout<<sol<<"\n";
        values.clear();
    }
    return 0;
}
