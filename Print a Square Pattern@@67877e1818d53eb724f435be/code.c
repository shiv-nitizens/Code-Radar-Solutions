#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int x;
    scanf("%d",&x);
    for (int i=1;i<=x;++i){
        for (int j=1;j<=x;++j){
            printf("* ");
        }printf("\n");
    }
}