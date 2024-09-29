//To create a calculator and doing menu-driven operations.
#include<stdio.h>
void main(){
//Taking calc,x,y as integer variables,a as addition, s as subtraction, m as multiplication variables.
     int calc,x,y,a,m,s;
//Taking d as division variables and using float data type for explicit type conversion further in this program.
     float d;
     printf("Enter value of x:");
     scanf("%d",&x);
     printf("\nEnter value of y:");
     scanf("%d",&y);
     printf("1:Addition\n2:Subtarction\n3:Multiplication\n4:Division");
     printf("\nEnter your choice from the above options:");
     scanf("%d",&calc);
//Taking switch case for assigning menu-driven conditions.
     switch(calc){
        case 1:
    //For addition we will use the below formula.
            a=x+y;
            printf("Addition of given two numbers is: %d",a);
            break;
        case 2:
    //For subtraction we will use the below formula.
            s=x-y;
            printf("Subtraction of given two numbers is: %d",s);
            break;
        case 3:
    //For multiplication we will use the below formula.
            m=x*y;
            printf("Multiplication of given two numbers is: %d",m);
            break;
        case 4:
    //For did=vision we will use the below formula.
    //Here we will have to explicitly convert y as float datatype to get a perfect output in division.
            d=x/(float)y;
            printf("Division of given two numbers is: %f",d);
            break;
    //If none of the switch case conditions happen then below code have to be written.
        default:
            printf("YOU HAVE ENTERED INAVLID INPUT!!! TRY AGIAN");
            break;
    }
printf("This program is created by Jenil Viradia.");

}
