#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    char name[10];
    int age;
    char hobby[15];
    scanf("%s%d%s",&name,&age,&hobby);
    printf("Name: %s\nAge: %d\nHobby: &s",name,age,hobby);
}