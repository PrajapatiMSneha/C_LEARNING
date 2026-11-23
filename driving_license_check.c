#include<stdio.h>
int main()
{
  int License,Seatbelt;
  printf("Do u have license\n?");
    printf("Yes=1,No=0\n");
  scanf("%d",&License);
  printf("Are u wearing a Seatbelt\n?");
  printf("Yes=1,No=0\n");
  scanf("%d",&Seatbelt);
  if(License==1 && Seatbelt==1){
    printf("Safe to drive.");
  }
    else{
    printf("stop! cannot drive yet.");
    }
  }