//To find if the given parameters form a triangle or a straight line and if they form a triangle the find it's area using heron's fromula.
#include<stdio.h>
#include<math.h>
void A1(int, int, int);
void A2(int, int, int);
void main(){
//Assigning a,b,c as the three given parameters or variables whose values is given by user.
      int a,b,c;
      float z;
      printf("Enter first side:");
      scanf("%d",&a);
      printf("Enter second side:");
      scanf("%d",&b);
      printf("Enter third side:");
      scanf("%d",&c);
      A1(a,b,c);

}
//Creating a different function to do the given operation.
void A1(int a, int b, int c){
//Using if and else to find if given parameters fit in the given condition.
       if((a+b)>c || (b+c)>a || (a+c)>b){
        A2(a,b,c);
       }
       else{
        printf("Error!");
       }
}
//Creating another function to find the area of triangle.
void A2(int a, int b, int c){
//Taking s as semi-perimeter variable.
    int s=(a+b+c)/2;
//Taking a and h as variables to find the final area.
    int h=(s*(s-a)*(s-b)*(s-c));
    float A = sqrt(h);
    printf("%f",A);
printf("This program is created by Jenil Viradia.")
}
