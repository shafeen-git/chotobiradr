#include <stdio.h>
int main()
{
    int r,w,l ;
    scanf("%d %d %d",&r,&w,&l);
    if((w*w)+(l*l) <= (4*r*r)){
        printf("Yes");
    }
    else {
    printf("No");
    }
    return 0;
}
