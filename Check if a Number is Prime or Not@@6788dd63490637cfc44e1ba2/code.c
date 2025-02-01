#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int x;
    scanf("%d",&x);
    if (x>0)
    {
        if (x==1 || x==2 || x==3 || x==7)
        {
            printf("Prime");
        }else 
        {
            if (x/2==0 || x/3==0 || x/4==0 || x/5==0 || x/6==0 || x/7==0){
                printf("Not Prime");
            }
        }
    }else
    {
        break;
    }
}