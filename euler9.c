#include<stdio.h>
#include<stdlib.h>


int main()
{
    
   FILE *fp;
   //char c;
   int i,j;
   int array[1000];
   int index=0;
   long long int mul=1;
   long long int max=0;
   char* p;
   int a,b,c;
   int s;
   int found;
    // this while-statement assigns into c, and then checks against EOF:

    a=3;
    b=4;
    c=5;
    
    i=1;
    s=1000;
    
    found=0;
    for(a=1;a<(int)(s/3);a++)
    {
        for(b=1;b<(int)(s/2);b++)
        {
            
            c=1000-a-b;
            
            if((a*a)+(b*b)==(c*c))
            {   
                found=1;
                break;
            }
        
        }
        if(found==1)
            break;
    }
    
       //printf("%d %d %d\n",a,b,c);
    
    max=a*b*c;
    printf("%lld\n",max);
    
    
    
    return 0;
    
    
}