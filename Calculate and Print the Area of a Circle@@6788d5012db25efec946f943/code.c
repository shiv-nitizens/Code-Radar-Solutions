#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    float pi=3.14;
    float radius;
    float area;
    scanf("%.2f",&radius);
    area=pi*radius*radius;
    printf("Area: %.2f",area);
}