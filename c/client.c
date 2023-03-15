#include <stdio.h>
#include <stdbool.h>

//محمد شاكر الكيلاني

//add user id better than nest 
// user id not in task
typedef struct account{
    int id ;
    float balance ;
    char *currency ;
}Account;
typedef struct client{
    char *name;
    bool state;
    Account accounts[2];
}Client;



Client  clients[2]={
                            {"muhammad", true,{{12244,100000,"Egyptian Pound"},{15644,5000,"euro"}}},
                            {"ali", true,{{22222,156000,"Egyptian Pound"},{584166,15600,"Pound sterling"}}}
                        };


//0 for Deposit 1 for Withdrawal
 char* bankDepositWithdrawal(int DepositOrWithdrawal , int accountId ,float money){
    for(int i; i<sizeof(clients)/sizeof(clients[0]);i++){
         for(int j; j<sizeof(clients[i].accounts)/sizeof(clients[i].accounts[0]);j++){
             if(accountId == clients[i].accounts[j].id ){
                 if(DepositOrWithdrawal == 0){
                     clients[i].accounts[j].balance += money;
                     printf("now balance = %f ",clients[i].accounts[j].balance);
                     return "status code 201";
                 }else if(DepositOrWithdrawal == 1){
                     if(clients[i].accounts[j].balance==0){
                         
                         return"No money in account ";
                         
                     }else{
                         clients[i].accounts[j].balance -= money;
                         printf("now balance = %f ",clients[i].accounts[j].balance);
                         return "status code 201";
                         
                     }
                     
                 }
             }
        }if(i==(sizeof(clients)/sizeof(clients[0])-1)){
 
            return"404 not found";
        }
             
        
        }
    }
    
    const char* clientState(char *clientName ,bool stateNew){
    for(int i; i<sizeof(clients)/sizeof(clients[0];i++){
         if(clients[i].name==clientName){
             
             clients[i].state = stateNew;
             if(clients[i].state==1){
                 return"True";
             }else if(clients[i].state==0){
                 return"False";
             }
             
             
             
         }if(i==(sizeof(clients)/sizeof(clients[0]-1)){
 
            return"404 not found";
        }
         
         
             
        
        }
    }
//  const char* transformation(int accountIdFrom , int accountIdTo , float money ){
//      char* from = bankDepositWithdrawal(1,accountIdFrom,money);

//     if(from=="status code 201"){
//         char* to = bankDepositWithdrawal(0,accountIdTo,money);
         
//         if(to=="status code 201"){
//              return"\n transformation success";
//         }else if(from=="status code 201"){
//             // back money not work
//             bankDepositWithdrawal(0,accountIdFrom,money);
//             return"\n 400  account Id To wrong transformation fail";
//         }
        
        
//     }else {
//           return"\n 400  account Id From wrong transformation fail";
       
       
        
//     }
  
    
      
// }



int main()
{
    
                        
                        

    // printf("%s",bankDepositWithdrawal(1,12244,100));
    
    // printf("stateNew = %s" ,clientState("muhammad",false));

        // transformation(12244,2222,7777);
        
      
        
        
    

    return 0;
}






