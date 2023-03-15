
#include <stdio.h>
#include <stdlib.h>

//محمد شاكر الكيلاني

int main()
{
    
    size_t element;
    printf("add numper of element : ");
    scanf(" %ld",&element);
    int *ptr = malloc(sizeof(int) * element);
    for(int i; i<element ; i++){
        scanf(" %d",ptr + i);
        
    }
    for(int i; i<element ; i++){
        printf("your element : %d ",*(ptr + i));
        
    }
    
    
    
    

    return 0;
}
