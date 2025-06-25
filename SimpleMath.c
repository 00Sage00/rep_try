#include <stdio.h>
int add(int a,int b);
int sub(int a,int b);

int main(void){
    int a=9;
    int b=3;
    printf("a:%d.b:%d\n",a,b);
    int sum = add(a,b);
    printf("sum;%d\n",sum);
    int dif = sub(a,b);
    printf("dif:%d\n",dif);
    int pro = mul(a,b);
    printf("pro:%d\n",pro);
    int quo = div(a,b);
    printf("quo:%d\n",quo);
}

int add(int a,int b){
    return a+b;
}

int sub(int a,int b){
    return a-b;
}

int mul(int a,int b){
    return a*b;
}

int div(int a,int b){
    if(b!=0){
        return a/b;
    }
}
