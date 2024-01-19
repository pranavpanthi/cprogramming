#include <stdio.h>

int rev(int x);

int main() {
    int a;
    printf("Enter the number : ");
    scanf("%d", &a);
    rev(a);
}

int rev(int x) {
    int c=0,r=0;
    for(int i=1;i<=10;i++) {
        c=x%10;
        r=(r*10)+c;
        x=x/10;
    }
    printf("%d",r);
}