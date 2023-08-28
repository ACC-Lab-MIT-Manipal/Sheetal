#include<stdio.h>
#include<string.h>
int main()
{
        int i, key;
        char s[100];
        char c;
    printf("Enter a plaintext to encrypt");
    scanf("%s",s);
    printf("Enter key");
    scanf("%d",&key);

    for(i = 0; i<strlen(s) ; i++)
    {
        c = s[i];
        if(c >= 'a' && c <= 'z')
        {
            c = c + key;
            if(c > 'z')
            {
                c = c - 'z' + 'a' - 1;
            }
            s[i] = c;
        }
        else if(c >= 'A' && c < 'Z')
        {
            c = c + key;
            if(c > 'Z')
            {
                c = c - 'Z' + 'A' - 1;
            }
            s[i] = c;
        }
    }

    printf("Encrypted message: %s\n",s);
     for(i = 0; i<strlen(s) ; i++)
    {
          c = s[i];
        if(c >= 'a' && c <= 'z')
        {
            c = c - key;
            if(c < 'a')
            {
                c = c + 'z' - 'a' + 1;
            }
            s[i] = c;
        }
        else if(c >= 'A' && c <= 'Z')
        {
            c = c - key;
            if(c < 'A')
            {
                c = c + 'Z' - 'A' + 1;
            }
            s[i] = c;
        }
    }
    printf("original message: %s",s);
    return 0;
}
