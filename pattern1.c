//Creating a lower left triangular pattern from 1 and 0 only.
#include<stdio.h>
void main(){
//Takin n as number of rows in a pattern.
      int n;
      printf("Enter number of rows:");
      scanf("%d",&n);
      for(int r=1 ; r<=n ; r++){
        for(int c=1 ; c<=r ; c++){
            if(c%2==0){
                printf("0 ");
            }
            else{
                printf("1 ");
            }
        }
        printf("\n");
      }
printf("\nThis program is created by Jenil Viradia.");
}
