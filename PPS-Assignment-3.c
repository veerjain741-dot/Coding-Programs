#include<stdio.h>
int main(){
    float a, b, result;
    char op;

    printf("Enter a: ");
    if(scanf("%f", &a) != 1){
        printf("Invalid Input");
        return 0;
    };
    printf("Enter b: ");
    if(scanf("%f", &b) != 1){
        printf("Invalid Input");
        return 0;
    }
    printf("OPERATOR \n Addition(+) \n Subtraction(-) \n multiplication(*) \n Division(/)");
    printf("\nEnter operator: ");
    scanf(" %c", &op);

    switch(op){
        case '+' : 
        result = a + b;
        printf("%f + %f = %f", a, b, result);
        break;
        case '-' : 
        result = a - b;
        printf("%f - %f = %f", a, b, result);
        break;
        case '*' : 
        result = a * b;
        printf("%f * %f = %f", a, b, result);
        break;
        case '/' : 
        if(b == 0){
            printf("Division by zero not allowed");
        }
        result = a / b;
        printf("%f / %f = %f", a, b, result);
        break;
        default : 
        printf("Invalid");
    }
    return 0;
}