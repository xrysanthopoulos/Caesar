#include <stdio.h>
#include <cs50.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int c=0;

int main(int argc, string argv[])
{
    if (argc != 2)
    {
        printf("error\n");
        return 1;
    }
    
    printf("Enter Plain text:");
    string p =GetString();
    
    int k = atoi(argv[1]);
    
    
    for ( int i = 0, n = strlen(p); i < n; i++)
    {
        if (isupper(p[i]))
        {
            c=((p[i]-65 + k) % 26) + 65;
            printf("%c", c);
        }
        else if (islower(p[i]))
        {
            c=((p[i] - 97 + k) % 26) + 97;
            printf("%c", c);
        }
        else
        {
            printf("%c", p[i]);
        }
    }
    printf("\n");
    return 0;
}
