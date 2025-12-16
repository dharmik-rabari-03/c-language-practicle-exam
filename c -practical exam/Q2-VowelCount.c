#include <stdio.h>

void countVowels(char str[])
{
    int a = 0, e = 0, i = 0, o = 0, u = 0;

    for (int j = 0; str[j] != '\0'; j++)
    {
        switch (str[j])
        {
        case 'a':
        case 'A':
            a++;
            break;

        case 'e':
        case 'E':
            e++;
            break;

        case 'i':
        case 'I':
            i++;
            break;

        case 'o':
        case 'O':
            o++;
            break;
            
        case 'u':
        case 'U':
            u++;
            break;
        }
    }

    printf("A = %d\n", a);
    printf("E = %d\n", e);
    printf("I = %d\n", i);
    printf("O = %d\n", o);
    printf("U = %d\n", u);
}

int main()
{
    char str[100];

    printf("Enter a sentence: ");
    gets(str);

    countVowels(str);

    return 0;
}
