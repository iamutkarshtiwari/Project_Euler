#include<stdio.h>
#include<stdlib.h>


int main()
{
    
   FILE *fp;
   char c;
   int i,j;
   int array[1000];
   int index=0;
   long long int mul=1;
   long long int max=0;
   char* p;
   
    fp = fopen("input.txt", "r"); // error check this!

    // this while-statement assigns into c, and then checks against EOF:

    while((c = fgetc(fp)) != EOF) 
    {
        p=&c;
            
         array[index]=atoi(p);
         index++;
        
    }

    fclose(fp);
    
    
    
    for(i=0;i<1000-13;i++)
    {
        mul=1;
        for(j=0;j<13;j++)
        {
            mul=mul*array[i+j];
            
        }
        
        if(mul>max)
        {
            max=mul;
        }
    }
    
    
    
    printf("%lld\n",max);
    
       

    return 0;
}