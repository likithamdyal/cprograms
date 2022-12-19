#include<stdio.h>
int main()
{
    int units,amt;
    printf("enter unit consumed\n");
    scanf("%d",&units);
    if(units<=200)
    {
       amt=units*0.8+100;
    
    }
    else if(units>200&&units<=300)
    {
        amt=200*0.8+(units-200)*0.9+100;
        
    }
    else if(units>300)
    {
        amt=200*0.8+100*0.9+(units-300)*1+100;
    
    }
    else if(units>400)
    printf("amt=%d",amt);
    return 0;
}