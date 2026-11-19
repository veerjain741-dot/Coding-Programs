//string length, string copy (strcpy) destination overwritten (deleting intial content),
// string concatenation (strcat) destination get uppended with source (maintaining intial content),
// string compare (strcmp), returns 0 if both strings are equal, returns negative value if first string is less than second string, returns positive value if first string is greater than second string
// terminator character '\0' at the end of string, null character, null pointer, null string

/// array is fixed size, pointer is dynamic size.

#include<stdio.h>
#include<string.h>
int main(){

    int choice, result;
    char str1[100], str2[100];

    printf("To find string length enter 1 \n");
    printf("To copy string enter 2 \n");
    printf("To concatenate string enter 3 \n");
    printf("To compare strings enter 4 \n");
    printf("To end program enter 5 \n");
    printf("Enter your choice: ");scanf("%d", &choice);
    
    switch (choice){
        
        case 1:
        printf("Enter string for finding length: ");scanf("%s", str1);
        int length = strlen(str1);
        printf("Length of input string is: %d\n", length);
        break;
        
        case 2:
        printf("Enter string to be copied: ");scanf("%s", str1);
        // strcpy(destination, source)
        strcpy(str2, str1);
        printf("copied string is %s", str2);
        break;

        case 3:
        printf("Enter 1st string to be concatenated: "); scanf("%s", str1);
        printf("Enter 2nd string to be concatenated: "); scanf("%s", str2);
        strcat(str1, str2);

        printf("Concatenated string is %s", str1);
        break;

        case 4:
        printf("Enter 1st string to be compared: ");scanf("%s", str1);
        printf("Enter 2nd string to be compared: ");scanf("%s", str2);
        result = strcmp(str1, str2);

        if (result == 0){
            printf("Both strings are equal \n");
        }
        else if (result < 0 ){
            printf("1st string is smaller than the 2nd string \n");
        }
        else{
            printf("1st string is greater than the 2nd string \n");
        }
        break;

        case 5:
        printf("Ended program. \n");
        return 0;
        break;

        default:
        return 0;
    }

    return 0;
}