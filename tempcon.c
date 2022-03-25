#include <stdio.h>
#include <ctype.h>

int main(){
  float temp;
  char unit;

  printf("Enter the temprature unit?\n");
  scanf("%c",&unit);
  unit = toupper(unit);
  if(unit == 'F'){
      printf("Enter the tempreture in celsius?\n");
      scanf("%f",&temp);
      temp = (temp * 9/5)+32;
      printf("\nThe tempreture is %.1f fahrenheit.",temp);
  }else if (unit == 'C'){
      printf("Enter the tempreture in fahrenheit?\n");
      scanf("%f",&temp);
      temp = (temp - 32) * 5/9;
      printf("\nThe tempreture is %.1f celsius.",temp);
  }else{
      printf("\n%c is not valid temp.",unit);
  }


    return 0;
}