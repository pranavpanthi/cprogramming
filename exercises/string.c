#include<stdio.h>
char name[20]; // global variable
void printName();
void getName();

int main(void) {
    // printf("My name is \nPranav\nPanthi\n");
    // char name[20]; // 20 characters to store in name variable, local variable
    printf("Enter your name: ");
    // fgets(name, 20, stdin); // fgets(variable, number of characters to store, standard input - keyboard)
    getName();
    printName();
    // printf("Your name is : %s", name);
    
    return 0;
}

void printName() {

    printf("Your name is : %s", name);
}

void getName() {
    int i;
    for (i = 0; i<20; i++) {
        scanf("%c", &name[i]);
        if (name[i] == '\n') {
            break;
        }

    }
}