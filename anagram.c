#include <stdio.h>
#include <stdlib.h>
 
 
int find_anagram(char array1[], char array2[])
{
    int sum1 = 0,sum2 = 0, i = 0;
 
    while (array1[i] != '\0')
    {
        sum1 += [array1[i++] - 'a'];
    }
    i = 0;
    while (array2[i] != '\0')
    {
        sum2 += [array2[i++] - 'a'];
    }
    if(sum1==sum2){
        return 1;
    }else{
        return 0;
    }
}


int main()
{
    char str1[100], str2[100];
    int flag;
 
    printf("Enter string 1:\n");
    scanf("%s",&str1);
    printf("Enter string 2:\n");
    scanf("%s",&str2);
    if(flag==1){
        FILE *fptr = fopen("C://users/Desktop/anagram.txt", "w");
        if(fptr == NULL){
            printf("Error opening file!! \n");
            exit(0);
        }
        fputs(str1, fptr);
        fputs(str2, fptr);
        fclose(fptr);
        printf("Successfully written to the file..\n");
    }
    return 0;
}