#include<stdio.h>
int main()
{
    int a,ch;
    

    printf("1--play 2--back 3--forward 4--stop\n");
    scanf("%d",&ch);
    switch(ch)
    {
        case 1:
        printf("play");
        break;
        case 2:
        printf("back");
        break;
        case 3:
        printf("forward");
        break;
        case 4:
        printf("stop");
        break;
        default:
        printf("invalid");
        break;
    }
    return 0;
}