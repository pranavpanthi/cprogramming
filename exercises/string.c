#include<stdio.h>

int main(void) {
    char name[20]; // 20 characters to store in name variable
    printf("Enter your name: ");
    fgets(name, 20, stdin); // fgets(variable, number of characters to store, standard input - keyboard)
    printf("Your name is : %s", name);

    // now take the last name as input and print it
    
    return 0;
}