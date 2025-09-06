#include <stdio.h>

int main()
{
    int numbers[5];

    for(int i = 0; i < 5; i++)
    {
    printf("enter num %d: \n", i+1);
    scanf("%d", &numbers[i]);
    }
    
    for(int i = 0; i < 5; i++) 
    {
        for(int j = i+1; j < 5; j++)
        {
        if(numbers[i] < numbers[j])
        {
        int temp = numbers[i];
        numbers[i] = numbers[j];
        numbers[j] = temp;
        }
        }
    }

    int max = 0;
    int min  = 0;

    for(int i = 0; i < 4; i++)
    {
       max += numbers[i];
    }

    printf("the max of some of 4 numbers is %d \n", max);
    
    for(int i = 1; i < 5; i++)
    {
       min += numbers[i];
    }

    printf("the min of some of 4 numbers is %d \n", min);
    return 0;
}