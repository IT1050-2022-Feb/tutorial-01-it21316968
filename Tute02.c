/*Exercise 2 - Selection

Write a program to calculate the amount to be paid for a rented vehicle.

•	Input the distance the van has travelled
•	The first 30 km is at a rate of 50/= per km.
•	The remaining distance is calculated at the rate of 40/= per km.


e.g.

Distance -> 20
Amount = 20 x 50 = 1000


Distance -> 50
Amount = 30 x 50 + (50-30) x 40 = 2300*/

#include <stdio.h>

int main() {

  float amnt_1;//declaring variables
  float dist_1;

  printf("Enter the distance you traveled (in km):");//getting input
  scanf("%f",&dist_1);

  if (dist_1 <= 30)
  {
    amnt_1= dist_1* 50;
    printf("Amount %.2f",amnt_1);
  }
  else
  {
    amnt_1=30*50+((dist_1-30)*40);
    printf("Amount %.2f",amnt_1);
  }
  
  return 0;
}
