#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int z;
    scanf("%d",&z);
    for (int i=z;i>0;--i)
    {
       for (int j=9;j>0;--j){
        printf("%c\n",'*');
       }
    }
}