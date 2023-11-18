#include<stdio.h> 
int fibonacci(int);

int main(void)
{    
    int terms;

    printf("Enter terms: ");
    scanf("%d", &terms);       

    for(int n = 0; n < terms; n++)
    {
        printf("%d ", fibonacci(n));
    }

    return 0; 
}

int fibonacci(int num)
{    
    if(num == 0 || num == 1)
    {
        return num;
    }

    else
    {
        return fibonacci(num-1) + fibonacci(num-2);
    }

}

OUTPUT:
Enter terms: 20
0 1 1 2 3 5 8 13 21 34 55 89 144 233 377 610 987 1597 2584 4181
