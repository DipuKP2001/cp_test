#include <stdio.h>

#include <string.h>

int main(){

    char arr[100];

    printf("Enter the string \n");

    gets(arr);

    int len = strlen(arr),flag=1;

    for(int i=0;i<len/2;i++){

        if(*(arr+i)!=*(arr+len-i-1)){

            flag = 0;

        }

    }

    if(flag == 1){

        printf("the no is palindrome");

    }else{

        printf("the no is not palindrome");

    }

    return 0;

}