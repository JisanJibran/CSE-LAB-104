# include <stdio.h>
# include <string.h>

// Define a struct to represent a person
struct Car {
    char brand_name[50];
    char model_name[50];
    int price;
};

int main() {
    // Create instances of the Person struct
    struct Car car1;
    struct Car car2;

    // Populate the data for person1
    strcpy(car1.brand_name, "Toyota");
    strcpy(car1.model_name, "Supra");
    car1.price = 4240258;

    // Populate the data for person2
    strcpy(car2.brand_name, "Mazda");
    strcpy(car2.model_name, "RX-8");
    car2.price = 1330000 ;

    // Print information about the people
    printf("Car 1:\n");
    printf("Brand Name: %s\n", car1.brand_name);
    printf("Model Name: %s\n", car1.model_name);
    printf("Price: %d\n", car1.price);

    printf("\nCar 2:\n");
    printf("Brand Name: %s\n", car2.brand_name);
    printf("Model Name: %s\n", car2.model_name);
    printf("Price: %d\n", car2.price);

    return 0;
}
