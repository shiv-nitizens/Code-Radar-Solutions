#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int a,b,c;
    int average;
    scanf("%d%d%d",&a,&b,&c);
    average=(a+b+c)/3;
    printf("Average: %.2d",average);

}