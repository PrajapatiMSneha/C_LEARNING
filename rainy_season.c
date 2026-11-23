#include<stdio.h>
int main()
{
  
  int Raining,Cloudy;
  printf("Is it Raining\n?");
  printf("Yes=1,No=0\n");
  scanf("%d",&Raining);

  printf("Is it Cloudy\n?");
  printf("Yes=1,N0=0\n");
  scanf("%d",&Cloudy);

  if(Raining==1 || Cloudy==1){
    printf("Take an umbrella");
  }

  else
  {
    printf("Leave the umbrella at home");
  }
}  