#include <stdio.h>

#define PI 3.141592654f

int main(void)
{
  float circunference, circle;
  int radius;

  printf("Enter the Radius: ");
  scanf("%d", &radius);

  circunference = 2 * PI * radius;
  circle = PI * radius * radius;

  printf("Circunference perimeter: %.4f\n", circunference);
  printf("Circle area: %.4f\n", circle);

  return 0;
}