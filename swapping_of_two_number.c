#include<stdio.h>
#include<stdlib.h>

int main(){
  int a,b;
  printf("Enter two values to swap\n");
  scanf("%d,%d",&a,&b);
  printf("before swapping a=%d and b=%",a,b);
  a=a+b;
  b=a-b;
  a=a-b;
  printf("after swapping a=%d amd b=%d",a,b);
  return();
}
