#include <stdio.h>

struct Employee {
    int id;
    char name[50];
    float salary;
};

int main() {
    struct Employee emp;
    
    printf("Enter employee ID: ");
    scanf("%d", &emp.id);
    getchar();
    printf("Enter employee name: ");
    fgets(emp.name, sizeof(emp.name), stdin);
    printf("Enter salary: ");
    scanf("%f", &emp.salary);
    
    printf("\n--- Employee Details ---\n");
    printf("ID: %d\n", emp.id);
    printf("Name: %s", emp.name);
    printf("Salary: %.2f\n", emp.salary);
    
    return 0;
}