#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    float a,b,c;
    float average;
    scanf("%f%f%f",&a,&b,&c);
    average=(a+b+c)/3;
    printf("Average: %.2f",average);

}