#include<stdio.h>

int div16(int x){
    int bias=(x>>31)& 0xf;
    return (x+bias)>>4;
}
int main(){
    
    printf("hello\n");
    printf("%f\n",div16(-6));
    return 0;
}