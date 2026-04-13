#include <stdio.h>

struct Student {
    char name[50];
    int roll;
    int marks[3];
    float total;
    float percentage;
};

int main() {
    struct Student s;
    int i;
    
    printf("Enter student name: ");
    getchar();
    fgets(s.name, sizeof(s.name), stdin);
    printf("Enter roll number: ");
    scanf("%d", &s.roll);
    
    s.total = 0;
    printf("Enter marks in 3 subjects:\n");
    for(i = 0; i < 3; i++) {
        printf("Subject %d: ", i+1);
        scanf("%d", &s.marks[i]);
        s.total += s.marks[i];
    }
    
    s.percentage = s.total / 3;
    
    printf("\n--- Student Report ---\n");
    printf("Name: %s", s.name);
    printf("Roll: %d\n", s.roll);
    printf("Total Marks: %.0f\n", s.total);
    printf("Percentage: %.2f%%\n", s.percentage);
    
    return 0;
}