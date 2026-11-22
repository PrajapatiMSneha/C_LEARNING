#include<stdio.h>

int main(){
  int age,ticket;
  //user ticket input
  printf("Do u have valid ticket\n");
  printf("1=Yes,0=No\n");
  scanf("%d",&ticket);
  //user age input
  printf("Enter age\n");
  scanf("%d",&age);
  //code logic
  if(age>=18 && ticket==1){
    printf("Have acess to watch movie\n");
  }
  else if(age<18 && ticket==1){
    printf("Refund\n");
  }
  else if(age<18 && ticket==0){
    printf("No acess\n");
  }
  else if(age>18 && ticket==0){
    printf("No acess\n");
  }
}