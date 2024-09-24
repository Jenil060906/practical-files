#include<stdio.h>
void main(){
//Assigning 'm' as marks of the students.
  int m;
  printf("Enter the student's marks(0-100):");
  scanf("%d",&m);
  //Assigning certain range to the marks.
  if(m>=90 && m<=100){
    printf("The student has got an A grade.");
  }
  else if(m>=80 && m<90){
    printf("The student has got an B grade.");
  }
  else if(m>=80 && m<90){
    printf("The student has got an B grade.");
  }
  else if(m>=70 && m<80){
    printf("The student has got an C grade.");
  }
  else if(m>=60 && m<70){
    printf("The student has got an D grade.");
  }
  else if(m<60){
    printf("The student has got an F grade.");
  }
  //If the student's marks does not exist in the assigned range.
  else{
    printf("INVALID INPUT!!! Please enter the student's marks in the given range.. ");
  }
  printf("This program is created by Jenil Viradia.")

}
