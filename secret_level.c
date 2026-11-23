#include<stdio.h>
int main()
{
  int Coins,Boss;
  printf("Do u defeat the Boss\n?");
  printf("1=Yes,0=No\n");
  scanf("%d",&Boss);
  printf("Enter the number of Coins\n:");
  scanf("%d",&Coins);
    if(Coins>=100 && Boss==1){
    printf("Secret level unlocked");
    }
    else{
    printf("Keep playing to unlock.");
    }
    }
