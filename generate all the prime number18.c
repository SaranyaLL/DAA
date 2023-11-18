#include <stdio.h>
int main()
{
    int i, j, end, isPrime; 
	 printf("Find prime numbers between 1 to : ");
    scanf("%d", &end);
    printf("All prime numbers between 1 to %d are:\n", end);
   for(i=2; i<=end; i++)
    {
       isPrime = 1; 
     for(j=2; j<=i/2; j++)
        {
            if(i%j==0)
            {
                isPrime = 0;
                break;
            }
        }
         if(isPrime==1)
        {
            printf("%d, ", i);
        }
    }

    return 0;
}
OUTPUT:
Find prime numbers between 1 to : 99
All prime numbers between 1 to 99 are:
2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97,
