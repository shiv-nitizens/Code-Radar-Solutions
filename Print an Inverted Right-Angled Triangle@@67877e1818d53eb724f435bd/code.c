#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int z;
    scanf("%d",&z);
    for (int i=z-1;i>0;--i)
    {
       for (int j=i;j>0;--j){
        printf("%c\n",'*');
       }
    }
}