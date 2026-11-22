#include<stdio.h>
int main(){
  int Cart,VIP;
  printf("Are you VIP\n");
  printf("1=Yes,0=No\n");
  scanf("%d",&VIP);
  printf("Enter Cart total\n");
  scanf("%d",&Cart);
  if(Cart>=5000 && VIP==1){
    printf("Free delievery");
  }
  else if(Cart<5000 && VIP==0){
    printf("100 Rs delievery charge\n");
  }
  else if(Cart>=5000 && VIP==0){
      printf("200 Rs delievery charge\n");
  }
else if(Cart<5000 && VIP==0){
    printf("500 Rs delievery charge\n");
  }
}
 