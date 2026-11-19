#include<stdio.h>
long long factloop(int n){
    long long fact = 1, i;
    for (i = 1; i <= n; i++){
        fact = fact * i;
    }
    return fact;
}
long long factrec(int n){
    long long fact = 1;
    return n * factrec(n - 1);
}

int main(){
    int n, i, choice;
    int fact = 1;
    printf("Enter the number for factorial, (number should be from 1 to 20): ");
    scanf("%d", &n);
    if (n < 1 || n > 20){
        printf("Wrong input. Enter value from 1 to 20, factorial is not defined.");
        return 1;
    }
    else {
        printf("If you want factorial using loop enter 1. \n");
        printf("If you want factorial using recursive enter 2. \n");
        printf("Enter your choice: "); scanf("%d", &choice);
        if (choice = 1){
            printf("The factorial of %d using loop is %lld", n, factloop(n));
        }
        else if (choice = 2){
            printf("The factorial of %d using recursive is: %lld", n, factrec(n));
        }
        else {
            printf("Wrong input, restart program. \n");
        }
    }
    return 0;
}