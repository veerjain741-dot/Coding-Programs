#include <stdio.h>
struct StudentDetails{
    char name[50];
    int rollno;
    float marks[3];
    float total;
    float percentage;
};

int main(){
    struct StudentDetails s [100]; //converts name of function into 's' for easy use
    int i, n, j;
    

    printf("Enter no. of students: "); scanf("%d", &n);
    for (i = 0; i<n; i++){  
        s[i].total = 0;
        printf("Enter student name: "); scanf(" %49[^\n]", s[i].name); //allows input of spaces 
        printf("Enter roll number: "); scanf("%d", &s[i].rollno);
        printf("Enter marks of 3 subjects: \n");

        for (j = 0; j < 3; j++) {
            printf("Marks in subject %d: ", j + 1); scanf("%f", &s[i].marks[j]);
            s[i].total += s[i].marks[j];
        }
        s[i].percentage = (s[i].total / 300) * 100;
    }

   
   
      

    printf("\n--- Student Details ---\n");
    printf("Name \t");
    printf("Roll Number \t");
    printf("Subject 1 \t");
    printf("Subject 2 \t");
    printf("Subject 3 \t");
    printf("Total \t\t");
    printf("Percentage \t \n");

    for (i = 0; i < n; i++){

        printf("%s\t", s[i].name);
        printf("%d\t\t", s[i].rollno);
        printf("%.2f\t\t", s[i].marks[0]);
        printf("%.2f\t\t", s[i].marks[1]);
        printf("%.2f\t\t", s[i].marks[2]);
        printf("%.2f\t\t", s[i].total);
        printf("%.2f%%\t \n", s[i].percentage);    
        printf("\n");
    }
    return 0;
}