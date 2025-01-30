#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    char x;
    scanf("%c",&x);
    if (x=='a' || x=='e' || x=='i' || x=='o' || x=='u' || x=='A' || x=='E' || x=='I' || x=='O'||x=='U'){
        printf("Vowel");
    } else if(x!='a' && x!='e' && x!='i' && x!='o' && x!='u' ){
        printf("Consonant");
    }else{
        printf("Special Character");
    }
}