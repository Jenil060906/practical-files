#include<stdio.h>
void main(){
//Assigning n and ans as the number and the variable to which the continuous multiplication is going to take place till it reaches the last number.
    int n,ans;
    printf("Enter a number:");
    scanf("%d",&n);
    ans=1;
    //Using for loop for assigning the given task for the continuous multiplication till last number.
    for(int x=1 ;  x<=n ; x++){
        ans=ans*x;
        printf("multiplication of all numbers between 1 to n:",ans);
        break;
    }
  printf("This program is created by Jenil Viradia.")

}
