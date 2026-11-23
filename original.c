#include <stdio.h>
void g(int *p,int *q){int t=*p,r=0;while(t>0){r=(r<<1)|(t&1);t>>=1;}*q=r;}
int main(void){int n,m;scanf("%d",&n);if(n<=0){printf("NG");return 0;}g(&n,&m);printf("%d,%d",n,m);return 0;}
