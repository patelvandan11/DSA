
#include <stdio.h>
int main()
{

    int  v[5];
    printf("ente the element :");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &v[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        int temp = 0;
        if (v[i] > v[i + 1])
        {
            temp = v[i];
            v[i] = v[i + 1];
            v[i + 1] = temp;
        }
    }
    for (int i = 0; i < 5; i++)
    {
        printf("%d", v[i]);
    }
    return 0;
}