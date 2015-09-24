#include<stdio.h>
#include<math.h>

// Seive of Erosthenes


int prime(int a)
{
    int factors=0;
    int i;
    
    for(i=1;i<=a;i++)
    {
        if(a%i==0)
            factors++;
    }
    
    if(factors==2)
        return 1;
    
    
    else
        return 0;
    
}
        
        
        


int main()
{

int i,j,f;
int sum1=0,sum2=0;
int count=0;

int array[1005];

int index=0;

i=3;
array[0]=2;
index++;
count++;
f=0;


while(index<6)
{
    f=1;
    for(j=0;j<index;j++)
    {
        if(i%array[j]==0)
        {
            f=0;
            break;
        }
    }
    
    
    i++;
    if(f==0)
     continue;
     
    //printf("%d\n",i);
    
    if(prime(i)==1)
    {
        array[index++]=i;
        
    }
    
    
   // printf("hello\n");
    
    
    
}

    
    
printf("%d\n",array[1]);
    


}



