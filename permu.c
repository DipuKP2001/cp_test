#include <stdio.h>
#include <string.h> 


char* find_longest_word(char *str){
    int i, start = 0, longest = 0, longest_pos = 0;

    for (i = 0; string[i] != '\0'; i++) {
        if (string[i] == ' ') {
            start = i + 1;
        } else {
            if (i - start > longest) {
                longest = i - start;
                longest_pos = start;
            }
        }
    }
    char word[200];
    int i=0;
    while(str[longest]!=' '){
        word[i++] = str[longest++];
    }    
    return word;
}

void swap (char *x, char *y)
{
    char temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

void permute(char *a, int i, int n)
{
    int j;
    if (i == n)
        printf("%s\n", a);
    else {
        for (j = i; j <= n; j++)
        {
            swap((a + i), (a + j));
            permute(a, i + 1, n);
            swap((a + i), (a + j)); 
        }
    }
}
 

int main()
{
    char sentence[200]
    printf("Enter the sentence: \n");
    gets(sentence);
    char a[200];
    a = find_longest_word(sentence);
    int n = strlen(a);
    printf("%s",word);
    printf("Permutaions:\n"); 
    permute(a, 0, n - 1);
    getchar();
    return 0;
}