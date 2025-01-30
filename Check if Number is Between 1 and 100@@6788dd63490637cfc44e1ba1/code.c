#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int a;
    scanf("%d",&a);
    if (a<0 && a>100){
        printf("In RAange");
    }else{
        printf("Our of Range");
    }
}