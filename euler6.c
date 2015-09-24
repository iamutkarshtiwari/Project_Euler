#include<stdio.h>
#include<math.h>



int main()
{

int i;
int sum1=0,sum2=0;
int count=0;


while(count!=1001)

{
sum2=sum2*sum2;

printf("%d", abs(sum2-sum1));

return 0;

}



