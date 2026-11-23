#include<stdio.h>
int main()
{
  int Height,Age;
  printf("Enter height\n");
  scanf("%d",&Height);
  printf("Enter age\n");
  scanf("%d",&Age);
  if(Height>=120 && Age>=10){
    printf("You can ride the roller coaster");
  }
  else{
    printf("Sorry you don't meet thr requirements");
  }
}