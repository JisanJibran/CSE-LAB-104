#include <stdio.h>
typedef struct Student {
    char name[50];
    int id;
    int age;
};

int main() {
    struct Student student1, student2;

    strcpy(student1.name, "Shakib Al Hasan");
    student1.id = 75;
    student1.age = 36;

    strcpy(student2.name, "Tamim Iqbal Khan");
    student2.id = 28;
    student2.age = 34;

    printf("Student 1\n");
    printf("Name: %s\n", student1.name);
    printf("ID: %d\n", student1.id);
    printf("Age: %d\n", student1.age);

    printf("\n");

    printf("Student 2\n");
    printf("Name: %s\n", student2.name);
    printf("ID: %d\n", student2.id);
    printf("Age: %d\n", student2.age);

    return 0;
}
