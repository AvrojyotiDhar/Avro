#include<stdio.h>
#include<conio.h>
int multui(int ,int );
int main()
{
  int a,b,m;
  printf("Enter two number:");
  scanf("%d%d",&a,&b);
  m=multi(a,b);
  printf("The product is=%d",m);
  getch();
  clrscr();
}
  int multi(int a,int b)
{
  int z;
  z=a*b;
  return(z);
}
