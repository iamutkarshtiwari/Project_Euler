#include<stdio.h>


int main()
{
	int i;
	int mul=1;
	int array[]={1,2 ,3 ,5, 7, 11, 13, 17, 19};
	int array2[]={1,2,2,3,3,2,5,7,11,13,2,17,19};

	for(i=0;i<13;i++)
		mul=mul*array2[i];

	printf("%d\n",mul);


}




//1 2 3 4 5  7    

2*2*2*2*3*3*5*7*11*13*17*19