#include<stdio.h>

int main() {

  int num,square,cube;

  printf("\tEnter a number: ");

  scanf("%d",&num);

  square=num*num;

  cube=num*num*num;

  printf("\tThe square of %d is: %d\n",num,square);

  printf("\tThe cube of %d is: %d\n",num,cube);

  return 0;

}