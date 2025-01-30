#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    char x;
    scanf("%c",&x);
    if (x=='a' || x=='e' || x=='i' || x=='o' || x=='u'){
        printf("Vowel");
    }
}