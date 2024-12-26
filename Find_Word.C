#include <stdio.h>
#include <string.h>
#define maxsize 200

int main()
{
    char str[maxsize], word[50];

    printf("Enter the String = ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';

    printf("Enter the Word you want to Find = ");
    fgets(word, sizeof(word), stdin);
    word[strcspn(word, "\n")] = '\0';

    int str_len = strlen(str);
    int word_len = strlen(word);

    int found = 0;

    for (int i = 0; i <= str_len - word_len; i++)
    {
        int j;
        for (j = 0; j < word_len; j++)
        {
            if (str[i + j] != word[j])
            {
                break;
            }
        }
        if (j == word_len)
        {
            found = 1;
            break;
        }
    }
    if (found)
    {
        printf("The word \"%s\" is in the string.\n", word);
    }
    else
    {
        printf("The word \"%s\" is not in the string.\n", word);
    }

    return 0;
}