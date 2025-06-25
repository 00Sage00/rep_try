#include <stdio.h>
int add(int a,int b);

int main(void){
    int a=9;
    int b=3;
    int sum = add(a,b);
    printf("sum\n");
}

int add(int a,int b){
    return a+b;
}