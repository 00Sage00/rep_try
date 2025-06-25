#include <stdio.h>
int add(int a,int b);
int sub(int a,int b);

int main(void){
    int a=9;
    int b=3;
    int sum = add(a,b);
    printf("sum\n");
    int dif = sub(a,b);
    printf("dif\n");
}

int add(int a,int b){
    return a+b;
}

int sub(int a,int b){
    return a-b;
}
