#include <stdio.h>

#define limit 1500000 /*size of integers array*/
#define PRIMES 1000000 /*size of primes array*/

int main(){
    int i,j,numbers[1000000];
    int primes[1000000];

    /*fill the array with natural numbers*/
    for (i=0;i<limit;i++){
        numbers[i]=i+2;
    }

    /*sieve the non-primes*/
    for (i=0;i<limit;i++){
        if (numbers[i]!=-1){
            for (j=2*numbers[i]-2;j<limit;j+=numbers[i])
                numbers[j]=-1;
        }
    }

    /*transfer the primes to their own array*/
    j = 0;
    for (i=0;i<limit && j<PRIMES;i++)
        if (numbers[i]!=-1)
            primes[j++] = numbers[i];

    /*print*/
    
        printf("%d\n",primes[10000]);

return 0;
}