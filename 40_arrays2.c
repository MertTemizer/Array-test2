#include <stdio.h>

int main()
{
    int n[5];
    int i;
    
    // set elements of array n to 0
    for(i = 0; i < 5; i = i + 1)
    {
        n[i] = 0; // set element at location i to 0
    }
    
    printf("Element \tValue\n");
    
    for(i = 0; i < 5; i = i + 1)
    {
        printf("%d \t\t%d\n", i, n[i]);
    }
    
    return 0;
}
