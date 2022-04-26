#include <stdio.h>
int n,m,i,a;
int main(){
    scanf("%d%d",&n,&m);
    for(i = 0;i < n;i++){
        for(a = 0; a < m ;a++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
