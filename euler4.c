#include<stdio.h>
#include<string.h>


int check(char *str)
{
	int len=strlen(str);
	int f=0;
	int i,j;

	for(i=0,j=len-1;i<len;i++,j--)
	{
		if(str[i]!=str[j])
		{
			f=1;
			break;
		}


	}

	if(f==1)
	{
		return 0;
	}
	else
	{
		return 1;
	}




}




int main()

{


int aInt = 368;
char str[30];
int mul;
int i,j;
int max;


for(i=999;i>100;i--)
{

	for(j=999;j>100;j--)
	{
	
	mul=i*j;

	sprintf(str, "%d", mul);

	if(check(str)==1 && mul>max)
	  {
	   max=mul;


	  }

	}

}

printf("%d\n",max);
	
return 0;

}