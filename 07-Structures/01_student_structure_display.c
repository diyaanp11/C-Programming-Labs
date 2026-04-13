#include <stdio.h>

struct Student {
    char name[50];
    int roll;
    float marks;
};

int main() {
    struct Student s1;
    
    printf("Enter student name: ");
    fgets(s1.name, sizeof(s1.name), stdin);
    printf("Enter roll number: ");
    scanf("%d", &s1.roll);
    printf("Enter marks: ");
    scanf("%f", &s1.marks);
    
    printf("\n--- Student Details ---\n");
    printf("Name: %s", s1.name);
    printf("Roll Number: %d\n", s1.roll);
    printf("Marks: %.2f\n", s1.marks);
    
    return 0;
}
