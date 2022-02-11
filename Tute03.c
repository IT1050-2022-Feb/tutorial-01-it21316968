/*Exercise 3 - Repetition

Write a C program to calculate the sum of the numbers from 1 to n.
Where n is a keyboard input.

e.g.

n -> 100
sum = 1+2+3+....+ 99+100 = 5050

n -> 1-
sum = 1+2+3+...+10 = 55 */

#include <stdio.h>
int main() {

  int num_1,num_2,num_3,num_4;

  printf("Enter the n number:");
  scanf("%d",&num_1);

  for(num_2=0;num_2<=num_1;num_2++)
  {
    num_3=num_4;
    num_4=num_3+num_2;
  }

  printf("Sum:%d",num_4);
  
  return 0;
}

