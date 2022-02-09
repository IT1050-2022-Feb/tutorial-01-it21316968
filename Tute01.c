/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {

  float num_1,num_2,num_3; //Declaring variables

  printf("Enter the 1st subject marks:");//getting iputs
  scanf("%f",&num_1);

  printf("Enter the 2nd subject marks:");
  scanf("%f",&num_2);

  num_3=(num_1+num_2)/2;//calculation

  printf("The average of the two marks: %.2f",num_3);//getting output

  
  return 0;
}

