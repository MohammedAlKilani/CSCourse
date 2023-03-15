
#include <stdio.h>
#include <stdbool.h>
int main() {
    
    // محمد شاكر الكيلاني
   float number1 ,  number2;
   char mathematicalSymbols;
   
   void printFloat(float result){
       printf("%f",result);
   }
   
   
   printf("Enter number1  mathematical_Symbols number2 \n ");
   scanf("%f %c %f",&number1 ,&mathematicalSymbols,&number2);
   
   
           switch (mathematicalSymbols){
                case '+':
                   printFloat( number1 + number2);
                    break;
                
                case '-':
                    printFloat( number1 - number2);
                    break;
                    
                case '/':
                    if(number2){
                        printFloat( number1 / number2);
                        
                    }else{
                        printf("It cannot be divided by zero");
                        return 0;
                    }
                 break;
                   
                case '*':
                  printFloat( number1 * number2); ;
                  break;
                 
            }
        
        
   
    
    
    
  
    
     
    
    
    
    

    return 0;
}