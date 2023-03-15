// محمد شاكر الكيلاني
#include <stdio.h>
 
void mySum(int* number){
 
 
 
 
 
    int result;
 
  while((*number<9999999&&*number>-99999999)){
 
      result = result + *number;
 
 
 
      number++;
 
 
  }
        printf("%d",result);
 
 
 
}
 
int main() {
 
    int a[] = {5,10,15,500};
 
 
 
    mySum(a);
 
    return 0;
}