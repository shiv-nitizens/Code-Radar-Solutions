#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int a;
    scanf("%d",&a);
    for (int i=a;i>0;--i){
        for (int j=i;j>0;--j){
            printf(" ");
        }printf("\n");
    }for (int i=a;i>0;--i){
        for (int j=0;j<=a;++j){
            printf("*");
        }printf("\n");
    }
}