#include <stdio.h>

int calc(int);

int main(void)
{
    int N,count = 0,num = 666;
    
    scanf("%d",&N);
    
    while(1)
    {
        if(calc(num) == 1)
        {
            count++;
        }
        
        if(count == N)
        break;
        
        num++;
    } 
    
    printf("%d",num);
    return 0;
}

int calc(int N)
{
    int i=1;
    
    do
    {
        if((N/i) - (N/(i*1000))*1000 == 666)
        {
            return 1;
            break;
        }
        i *= 10;
    } while(N/i != 0);
    
    return 0;
}