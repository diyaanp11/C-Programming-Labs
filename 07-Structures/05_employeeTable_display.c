#include <stdio.h>

struct Employee {
    int id;
    char name[50];
    char department[50];
    float salary;
};

int main() {
    struct Employee emp[3];
    int i;
    
    printf("Enter details of 3 employees:\n");
    for(i = 0; i < 3; i++) {
        printf("\n--- Employee %d ---\n", i+1);
        printf("ID: ");
        scanf("%d", &emp[i].id);
        getchar();
        printf("Name: ");
        fgets(emp[i].name, sizeof(emp[i].name), stdin);
        printf("Department: ");
        fgets(emp[i].department, sizeof(emp[i].department), stdin);
        printf("Salary: ");
        scanf("%f", &emp[i].salary);
    }
    
    printf("\n--- Employee Table ---\n");
    printf("ID\tName\t\tDepartment\t\tSalary\n");
    printf("------------------------------------------------\n");
    for(i = 0; i < 3; i++) {
        printf("%d\t%s\t%s\t%.2f\n", 
               emp[i].id, 
               emp[i].name, 
               emp[i].department, 
               emp[i].salary);
    }
    
    return 0;
}