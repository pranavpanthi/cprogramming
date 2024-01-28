/*
    you have to take an array of characters from the user 
    then you have to take a character to count from the user

    display the count of that character

    example:
    enter a string: apple
    enter a character to count: p
    character count = 2
*/

#include <stdio.h>

const int MAX_LENGTH = 100; // 100 would be the maximum number of chacters we can store in this case

char str[MAX_LENGTH]; // here we will store the character array or a string

char getInput() {
    // write a function to get the string and character to count from the user
    // this should return the character that we need to count

    return 'a';
}

int count(char ch) {
    // return the count of the character ch in the string str

    return 0;
}

int main(void) {
    char characterToCount = get_input();
    printf("Character count = %d\n", count(characterToCount));
    return 0;
}