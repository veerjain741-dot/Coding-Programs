#include<stdio.h>
int main(){
// without using any library, ur own functions
//    strlen(),strcpy(),strcat(),strcmp();
char str0[100], str1[100], str2[100];
int i = 0;
printf("Enter the string to find length: "); scanf("%s", str0);

    while (str0[i] != '\0'){
        i++;
    }
    printf("Length = %d \n", i);

    printf("Enter the first string to copy: "); scanf("%s", str1);
    printf("Enter the second string to copy: "); scanf("%s", str2);
    int j = 0;
    for (j = 0; str2[j] != '\0'; j++){
        str1[j] = str2[j];
    }
    str1[j] = '\0';
    printf("Copied string is: %s", str1);
    return 0;
}