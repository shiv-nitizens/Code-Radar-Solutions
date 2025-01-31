#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int a;
    scanf("%d",&a);
    for (int i=0;i<=a;++i){
        for (int j=a;j>=0;--j){
            printf("6");
        }printf("\n");
    }
}