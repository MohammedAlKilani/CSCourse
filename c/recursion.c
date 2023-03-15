#include <stdio.h>
#include <stdbool.h>
 
//محمد شاكر الكيلاني
float base , power ;
float numberPower(float base , float power ); 
 
int main() {
 
 while(1){
 
    printf("User input : ");
 
    scanf(" %f %f",&base ,&power);
    
    
    if(0<=power)
         printf("output => %f",numberPower( base, power ));
    else if(0>power)
         printf("output => %f",1/numberPower( base, power ));

    printf("\n Again \n");
 
 }
    return 0;
}
 
float numberPower(float base , float power ){
 
 
    if(0<power) 
        return base * numberPower(base , --power);
    else if(0==power)
        return 1 ;
    else if(0>power)
        return (base * numberPower(base , ++power));
 
 
 
 
}
