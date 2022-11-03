#include<stdiou,h>
int sum_func(int a, int b);


int main(void) {
  int a, b,sum;
  printf("Enter the first number");
  scanf("%d", &a);
  printf("Enter the second number");
  scanf("%d",&b);
  sum=sum_func(a,b);