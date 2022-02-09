/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {
  int marks1,marks2;
  float avg,sum=0; //avg=average

  printf("Enter the first number:");
  scanf("%d",&marks1);

  printf("Enter the second number:");
  scanf("%d",&marks2);

  avg=(marks1+marks2)/2;

  printf("avg is %.f",avg);
  return 0;
}


