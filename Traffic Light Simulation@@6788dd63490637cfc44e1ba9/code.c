#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    char x;
    scanf("%C",&x);
    if (x=='R'){
        printf("Stop");
    }else if (x=='G'){
        printf("Go");
    }else if(x=='Y'){
        printf("Slow Down");
    }else{
        printf("Invalid input");
    }
}