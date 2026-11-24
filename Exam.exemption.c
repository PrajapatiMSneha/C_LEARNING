#include<stdio.h>
int main(){

int Attendence_percentage,Assignment_score;
  
  printf("Enter Attendence_ percentage\n");
  scanf("%d",&Attendence_percentage);

  printf("Enter Assignment_score\n");
  scanf("%d",&Assignment_score);

  if(Attendence_percentage>=95 || Assignment_score>=90){
    printf("You are exempt from the final exam");
  }
  else{
    printf("You must take the final exam");
  }
}