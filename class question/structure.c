#include <stdio.h>

struct studinfo 
{
    char name[80];
    int roll_no;
    char dept[30];
    int per_no;
};

int main(){
    int n, i;
    struct studinfo si[100];
    printf("How many students data you want to store : ");
    scanf("%d", &n);
    for ( i = 0; i < n; i++)
    {
        printf("Your name : ");
        scanf("%s", si[i].name);
        printf("\n Your roll no : ");
        scanf("%d", &si[i].roll_no);
        printf("\n Your department : ");
        scanf("%s", si[i].dept);
        printf("\n Your percentage scored : ");
        scanf("%1.f", si[i].per_no)
    }

    for ( i = 0; i < n; i++)
    {
        printf("\n ***************************************  \n");
        printf("Your Name = %s", si[i].name);
        printf("\n Your roll_no = %d", si[i].roll_no);
        printf("\n Your Department = %s", si[i].dept);
        printf("\n Your percentage : %d", si[i].per_no);
    }

    
}
