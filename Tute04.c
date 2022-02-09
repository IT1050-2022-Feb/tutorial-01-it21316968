/*Exercise 4 - Functions

Implement the three functions minimum(), maximum() and multiply() below the main() function.

Do not change the code given in the main() function when you are implementing your solution.*/

#include <stdio.h>

int maximum (int num_1,int num_2);
int minimum (int num_1, int num_2);
int multiply (int num_1, int num_2);


int main() {
   int no1, no2;
   printf("Enter a value for no 1 : ");
   scanf("%d", &no1);
   printf("Enter a value for no 2 : ");
   scanf("%d", &no2);
   printf("%d ", minimum(no1, no2));
   printf("%d ", maximum(no1, no2));
   printf("%d ", multiply(no1, no2));
   return 0;
}

int maximum (int num_1,int num_2)
{

  int num_3;

  if (num_1>num_2)
  {
    num_3=num_1;
  }
  else 
  {
    num_3=num_2;
  }

  return num_3;
}

int minimum (int num_1, int num_2)
{
  int num_3;

  if (num_1<num_2)
  {
    num_3=num_1;
  }
  else 
  {
    num_3=num_2;
  }

  return num_3;
}

int multiply (int num_1, int num_2)
{
  int num_3;

  num_3=num_1*num_2;

  return num_3;

}
