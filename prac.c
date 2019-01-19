#include<stdio.h>
int main(){
int *x,*y;
x = &(y);
y = &(x);
printf("%d\n",&y);
printf("%d\n",x);
printf("%d\n",&x);
printf("%d\n",y);
return 0;
}
