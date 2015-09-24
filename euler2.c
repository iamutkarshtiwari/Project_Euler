#include<stdio.h>



int main()
{
  
  long long int num;
  long long int b=2;
  //long long int c=a+b;
  long long int sum;
  long long int count=1;
  int i,j;
  
  int f=0;
  long long int gcd=1;
  
  //int a[]={2, 3, 5, 7, 11, 13, 17, 
    //19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97};
  
  
  scanf("%lld",&num);
    
  
  while(f==0)
  {
  //f=1;
    for(i=2;i<=num ;i++)
    {   
        
        
        
        
        if(num%i==0)
          {
            num=(int)(num/i);
            if(num==0)
                f=1;
            
            if(i>gcd)
            gcd=i;
            //printf("%lld\n",num);
            //f=0;
            break;
        
          }
          
          
        
    
      }
  }
  
      
    
    
   
  
  
  printf("%lld\n",gcd);
  return 0;
}