#include <stdio.h>
int main ()
{
    float n,w,T;
    scanf(" %f %f", &n, &w);
    T=n-(w+w*0.25);
    printf("The final score of the student is:%0.2f\n",T);
    if (T > 40 && T < 70){
        printf ("The student is selected for self-financed admission.");
    }
    else if (T >= 70 && T < 95){
        printf ("The student is selected for partial scholarship.");
    }
    else if (T >= 95){
        printf ("The student is selected for full scholarship");
    }
    else {
        printf ("The student is not selected for admission");
    }
    return 0;

}
