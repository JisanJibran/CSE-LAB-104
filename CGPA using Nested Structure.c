# include <stdio.h>

// Define a structure for an address
struct Educational_results {
    char psc[100];
    char jsc[50];
    char ssc[20];
    char hsc[10];
};

// Define a structure for a person
struct Person {
    char name[100];
    int age;
    struct Educational_results gpa; // A nested structure as a member
};

int main() {
    // Create an instance of the Person structure
    struct Person person1;

    // Populate the person's data
    strcpy(person1.name, "Jisan Jibran");
    person1.age = 20;

    // Populate the person's address (nested structure)
    strcpy(person1.gpa.psc, "5.00");
    strcpy(person1.gpa.jsc, "5.00");
    strcpy(person1.gpa.ssc, "4.39");
    strcpy(person1.gpa.hsc, "4.42");

    // Display the person's information
    printf("Name: %s\n", person1.name);
    printf("Age: %d\n", person1.age);
    printf("Educational_results:\n");
    printf("  PSC: %s\n", person1.gpa.psc);
    printf("  JSC: %s\n", person1.gpa.jsc);
    printf("  SSC: %s\n", person1.gpa.ssc);
    printf("  HSC: %s\n", person1.gpa.hsc);

    return 0;
}
