#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int a,b,sum,sub,div,mull;
    char x;
    scanf("%d%d%c",&a,&b,&x);
    sum=a+b;
    sub=a-b;
    div=a/b;
    mull=a*b;
    switch(x){
        case '+':
            printf("%d",sum);
            break;
        case '-':
            printf("%d",sub);
            break;
        case '*':
            printf("%d",mull);
            break;
        case '/':
            printf("%.0d",div);
            break;
    }
}