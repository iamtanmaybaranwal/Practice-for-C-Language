#include<stdio.h>
#include<string.h>
    // char st[]="Tanmay";
    // char st[30];
    // gets(st);
    // puts(st);
    // printf("Heyy");
    struct employee{
        int code;
        float salary;
        char name[10];
    };
int main(){    
    struct employee e1, e2, e3;
    // e1.code = 4511;
    // e1.salary = 4500000;
    // strcpy(e1.name, "Tanmay" );
    printf("Enter the employee code : ");
    scanf("%d",&e1.code);
    
    printf("Enter the employee salary : ");
    scanf("%f",&e1.salary);
    
    printf("Enter the employee name here : ");
    scanf("%s",&e1.name);
    
    printf("%d\n%f\n%s\n",e1.code,e1.salary,e1.name);
    
 }