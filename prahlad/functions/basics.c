#include  <stdio.h> // header statement

/*
    syntax of a function
    return_type function_name(parameter list);
    int: return type -> it is the data type that is returned by a function
*/
void sum(double, double);// function declaration

double divide(double, double);

int main() {
    double num1, num2; // variables: num1, num2, sum
    printf("Enter two numbers to add : ");
    scanf("%lf%lf", &num1, &num2);
    double a, b;
    printf("Enter two numbers to divide : ");
    scanf("%lf %lf", &a, &b);

    //printf("num1 = %lf, num2 = %lf\n", num1, num2);

    /*
        syntax of function call

        function_name(argument list)
    */

    sum(num1, num2); // function call
    /*sum(10, 10);
    sum(10.5, 5.25);
    */
   printf("division = %.2lf \n", divide(a, b));
    return 0;
}

// function definition
void sum(double a, double b) {
    printf("Sum = %.1lf\n", a + b);
}

double divide(double x, double y) {
    //printf("Divide = %lf \n", x / y);
    return x/y;
}
