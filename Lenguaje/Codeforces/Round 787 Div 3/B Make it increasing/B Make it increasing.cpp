#include <iostream>

using namespace std;
long long int t,n,i,a,sol;
long long int arr[32];
bool pos;
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    cin>>t;
    while(t--){
        cin>>n;
        sol=0;
        pos = 1;
        for(i=0;i<n;i++){
            cin>>arr[i];
        }
        for(i=n-2;i>=0 && pos;i--){
            while(arr[i] >0 && arr[i+1]<=arr[i]){
                arr[i]/=2;
                sol++;
            }
            if(arr[i]>=arr[i+1]){
                pos = 0;
            }
        }
        (pos)?cout<<sol<<"\n":cout<<"-1\n";
    }
    return 0;
}
