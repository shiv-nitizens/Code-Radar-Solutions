#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    char x;
    scanf("%C",&x);
    if (x=='A'){
        printf("Excellent");
    }else if(x=='B'){
        printf("Good");
    }else if(x=='C'){
        printf("Average");
    }else if (x=='D'){
        printf("Below Average");
    }else if(x=='F'){
        printf("Fail");
    }else{
        printf("Invalid grade");
    }
}