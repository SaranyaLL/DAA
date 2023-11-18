#include<stdio.h>
#include<conio.h>
int main()
{
    int arr[10], i, large;
    printf("Enter 10 Array Elements: ");
    for(i=0; i<10; i++)
        scanf("%d", &arr[i]);
    i=0;
    large = arr[i];
    while(i<10)
    {
        if(large<arr[i])
            large = arr[i];
        i++;
    }
    printf("\nLargest Number = %d", large);
    getch();
    return 0;
}

OUTPUT:
Enter 10 Array Elements: 10
2
4
3
5
6
55
66
77
88

Largest Number = 88
