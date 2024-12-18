#include <stdio.h>
#include <math.h>
int main (){
    long long a;
    int b=0;
    scanf("%lld",&a);
    for (long long i = 2; i <= sqrt(a); i++){
        if (a % i == 0){
          b = 1;
        break;
    }
    }


    if (b) {
        printf("No\n");
    }
    else
    {
        printf("Yes\n");
    }


    return 0;

}
