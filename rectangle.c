//Calculating area and perimeter of a rectangle.
#include<stdio.h>
void main(){
//Input the values of l and b as length and breadth of rectangle.
    int l,b;
    printf("Enter value of length:");
    scanf("%d",&l);
    printf("Enter value of breadth:");
    scanf("%d",&b);
//Calculating the area by using the below formula.
    int a=l*b;
    printf("The value of area is: %d\n",a);
//Calculating the perimeter by using the below formula.
    int p=2*(l+b);
    printf("The value of perimeter is: %d",p);
printf("This program is created by Jenil Virdaia.")

}
