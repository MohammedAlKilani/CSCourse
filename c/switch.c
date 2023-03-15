
#include <stdio.h>
#include <stdbool.h>


int main()
{
    //محمد شاكر الكيلاني
    
    int numberDay , numberMonth ;
    printf("Enter weekDay number 1:7 and Month number 1:12 : ");
    scanf("%d %d",&numberDay ,&numberMonth);
    if (!(numberDay && numberMonth)){
        // status codes 400 Bad Request
        printf(" 400  Bad Request \n weekDay number && Month number required ");
        return 0;
    }
    
    printf("Day : ");
     switch (numberDay){
         case 1 :
           printf("Saturday"); 
           break;
         case 2 :
          printf("sunday"); 
          break;
          case 3 :
          printf("Monday"); 
          break;
          case 4 :
          printf("Tuesday"); 
          break;
          case 5 :
          printf("Wednesday"); 
          break;
          case 6 :
          printf("Thursday"); 
          break;
          case 7 :
          printf("Friday"); 
          break;
          default:
           printf("404 number Day not found ");
           break;
         
     }
     
     printf("\n");
     
     printf("Month : ");
     switch (numberMonth){
         case 1 :
           printf("January "); 
           break;
         case 2 :
          printf("February "); 
          break;
          case 3 :
          printf("March "); 
          break;
          case 4 :
          printf("April "); 
          break;
          case 5 :
          printf("May "); 
          break;
          case 6 :
          printf("June "); 
          break;
          case 7 :
          printf("July "); 
          break;
          case 8 :
          printf("August "); 
          break;
          case 9 :
          printf("September "); 
          break;
          case 10 :
          printf("October"); 
          break;
          case 11 :
          printf("November"); 
          break;
          case 12 :
          printf("December"); 
          break;
          default:
           printf("404 number month not found ");
           break;
          
    
         
     }
     
     

    return 0;
}
