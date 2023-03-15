
#include <stdio.h>

    // محمد شاكر الكيلاني


    char name[5][20]={"Mahmoud","Zakria","Gaber","Ali","Muhammed"};
    
    int numberId[5] ={55797,66787,68997,66898,77990};
    
    const char* get_name(int inputNumber);
    



int main() {
    
    int inputNumber;
    
    printf("Add 5 numder for id : ");
    
    scanf(" %d",&inputNumber);

     printf("%s",get_name(inputNumber));
    
    
    
    
    return 0;
}

const char* get_name(int inputNumber){
    for(int i; i<sizeof(name)/sizeof(name[0]);i++){
        if(inputNumber==numberId[i]){
              return name[i] ;
        }else if(i==(sizeof(name)/sizeof(name[0]))-1){
            
            return"404 not found";
        }
        
        
           
    }
}

