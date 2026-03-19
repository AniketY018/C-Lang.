#include<stdio.h>

int main(){
int a=90;
int b=10;
int c=a + b;

printf("%d is addition\n",c);

c+=10;
printf("%d\n",c);

c+=c;

int m=10;
m >>1;
printf("%d\n",m);

m=10;
m<<=2;
printf("%d\n",m);

int x=8;
int y=5;

printf("%d\n",(x+=y));
printf("%d\n",(x-=y));
printf("%d\n",(x|=y));

}