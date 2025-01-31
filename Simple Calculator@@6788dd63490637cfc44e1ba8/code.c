#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int a,b;
    int x;
    scanf("%d%d",&a,&b);
    scanf("%c",&x);
    if (x=='+'){
        printf("%d",a + b);
    }else if(x=='-'){
        printf("%d",a - b);
    }else if (x=='*'){
        printf("%d",a * b);
    }else if (x=='/'){
        printf("%d",a / b);
    }else{
        printf("Error");
    }

    return 0;
}