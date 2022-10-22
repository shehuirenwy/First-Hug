#include<stdio.h>
int main(){
  int i,a,b,c;
  printf("Output:\n");
  for(i=100;i<=999;i++){
  	a=i/100;
  	b=i/10%10;
  	c=i%10;
  	if(i==a*a*a+b*b*b+c*c*c)
  	printf("%-4d",i);
  }
  return 0;
}
