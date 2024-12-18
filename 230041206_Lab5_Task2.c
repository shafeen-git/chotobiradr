#include <stdio.h>
#include<limits.h>



int main(){
    int number,biggest ;
    biggest = INT_MIN;
   // int is_present=1;
//tf("%d\n",is_present);//
    while(1){
        printf("Enter a number: ");
        scanf("%d",&number);
        if(number<=0){
            break;
        }
        if (number > 0 && number > biggest){
            biggest=number;
        }
    }
    if (biggest > number && biggest > 0){
    printf("biggest number is :%d",biggest);
    }
    else{
        printf("None");
    }




        return 0;
    }
//#include <stdio.h>
//int main(){
    //float number,smallest=-1;
   // while(1){
     //   printf("Enter a number:  ");
       // scanf("%f",&number);
        //if(number<=0){
           // break;
        //}
        //if (smallest== -1 || number<smallest){
          //  smallest=number;
        //}

 //   }
   // if(smallest == -1){
     //   printf("None");
    //}
    //else {
      //  printf("%f",smallest);
    //}
    //return 0;

//}











