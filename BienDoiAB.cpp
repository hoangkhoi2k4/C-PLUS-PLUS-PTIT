#include<stdio.h>
#include<string.h>

int main()
{
    char s[1000005];
    scanf("%s", s);
    int A = 0, B = 0, len = strlen(s);
    for(int i = 0; i < len; ++i)
    {
        if(s[i] == 'A')
        {
            if(A < B) B = A + 1;
            else ++B;
        }
        else
        {
            if(A < B) ++A;
            else A = B + 1;
        }
    }
    printf("%d", A);
    return 0;
}
