#include <stdio.h>
#include <string.h>

struct Student {
    char name[50];
    int roll;
    char address[100];
    float marks;
};

int main() {
    struct Student students[5];
    char search_address[100];
    int i, found = 0;
    
    for(i = 0; i < 5; i++) {
        printf("\n--- Student %d ---\n", i+1);
        getchar();
        printf("Name: ");
        fgets(students[i].name, sizeof(students[i].name), stdin);
        printf("Roll: ");
        scanf("%d", &students[i].roll);
        getchar();
        printf("Address: ");
        fgets(students[i].address, sizeof(students[i].address), stdin);
        printf("Marks: ");
        scanf("%f", &students[i].marks);
    }
    
    getchar();
    printf("\nEnter address to search: ");
    fgets(search_address, sizeof(search_address), stdin);
    search_address[strcspn(search_address, "\n")] = '\0';
    
    printf("\n--- Students from %s ---\n", search_address);
    for(i = 0; i < 5; i++) {
        students[i].address[strcspn(students[i].address, "\n")] = '\0';
        if(strcmp(students[i].address, search_address) == 0) {
            printf("Name: %s", students[i].name);
            printf("Roll: %d\n", students[i].roll);
            printf("Marks: %.2f\n\n", students[i].marks);
            found = 1;
        }
    }
    
    if(!found) {
        printf("No students found from this address!\n");
    }
    
    return 0;
}