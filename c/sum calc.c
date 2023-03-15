// Online C compiler to run C program online
#include <stdio.h>
#include <stdbool.h>
 
int main() {
    // محمد شاكر الكيلاني
    float inputNumber , outputNumber;
 
 
       printf("will add 6 number \n");
       for(int i ; i<6 ; ){
        i++;
 
        printf("Inter number %d : ",i);
        scanf(" %f",&inputNumber);
 
 
        if(i==1)
        {
            outputNumber=inputNumber;
 
        }else if(outputNumber<inputNumber){
            
                outputNumber=inputNumber;
            
 
        }
 
        }
 
        printf("output : %f",outputNumber);
 
 
    return 0;
}
