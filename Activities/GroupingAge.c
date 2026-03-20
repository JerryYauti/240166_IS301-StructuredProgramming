
// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int age;
    printf("Enter your age: ");
    scanf("%d",&age);
    
    if(age<13){
        printf("You are a Child");
    }
        
    else if(age<=12 && age>=5){
        printf("You are Dotles");
     }
    
    else if(age>13 && age<=19){
        printf("You are a Teenager");
    }
    
    else if ( age>=20){
        printf("You are an Adult");
    }
    
    return 0;
    
}
    