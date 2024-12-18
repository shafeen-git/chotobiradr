#include<stdio.h>
int main(){
    int n,r,Com,Per;
    printf("Enter n and r: ");
    scanf ("%d %d",&n,&r);

    int nfact=1,rfact=1,n_rfact=1;

    for(int i=1;i<=n;i++){
        nfact*=i;
    }
    for(int j=1;j<=r;j++){
        rfact*=j;
    }
    for(int k=1;k<=(n-r);k++){
        n_rfact*=k;
    }
    Com=(nfact/(rfact*n_rfact));
    Per=(nfact/n_rfact);
    printf("%d %d",Com,Per);

    return 0;
}








