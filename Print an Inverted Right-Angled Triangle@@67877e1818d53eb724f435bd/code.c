#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int z;
    scanf("%d",&z);
    for (int i>0;i<=z;i++)
    {
        printf("%c",'*');
    }
}