#include <stdio.h>
int t,n;
int main(){
    scanf("%d",&t);
    while(t--){
        scanf("%d",&n);
        if(n>=1900)printf("Division 1\n");
        else if(n>=1600)printf("Division 2\n");
        else if(n>=1400)printf("Division 3\n");
        else printf("Division 4\n");
    }
    return 0;
}
