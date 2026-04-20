#include <stdio.h>
#include <string.h>
struct Employee {
    char name[50];
    char designation[50];
    char gender;
    char doj[20];
    float salary;
};
int totalEmployees(int n) {
    return n;
}
void countGender(struct Employee e[], int n) {
    int m = 0, f = 0, i;
    for(i = 0; i < n; i++) {
        if(e[i].gender == 'M' || e[i].gender == 'm')
            m++;
        else if(e[i].gender == 'F' || e[i].gender == 'f')
            f++;
    }
    printf("Male: %d\nFemale: %d\n", m, f);
}
void highSalary(struct Employee e[], int n) {
    int i;
    for(i = 0; i < n; i++) {
        if(e[i].salary > 10000)
            printf("%s\n", e[i].name);
    }
}
void asstManager(struct Employee e[], int n) {
    int i;
    for(i = 0; i < n; i++) {
        if(strcmp(e[i].designation, "Asst Manager") == 0)
            printf("%s\n", e[i].name);
    }
}
int main() {
    struct Employee e[100];
    int n, i;
    scanf("%d", &n);
    for(i = 0; i < n; i++) {
        scanf("%s", e[i].name);
        scanf("%s", e[i].designation);
        scanf(" %c", &e[i].gender);
        scanf("%s", e[i].doj);
        scanf("%f", &e[i].salary);
    }
    printf("Total Employees: %d\n", totalEmployees(n));
    countGender(e, n);
    printf("Salary > 10000:\n");
    highSalary(e, n);
    printf("Asst Manager:\n");
    asstManager(e, n);
    return 0;
}