#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int x;
    scanf("%c",&x);
    if (x=='a' || x=='e' || x=='i' || x=='o' || x=='u' || x=='A' || x=='E' || x=='I' || x=='O'||x=='U'){
        printf("Vowel");
    } else if((x>='a' && x<='z') || (x>='A' && x<='Z')){
        printf("Consonant");
    }else if(x>=0){
        printf("Digit");
    }
    else{
        printf("Special Character");
    }
}