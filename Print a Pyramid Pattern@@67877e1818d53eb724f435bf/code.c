#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int a;
    scanf("%d",&a);
    for (int i=1;i<=a;++i){
        for (int j=i;j>=0;--j){
            printf("3");
        }
    }printf("\n");
}