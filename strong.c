#include <stdio.h>
int factorial(int num){
    if(num==0 || num==1){
        return 1;
    }else{
        return num * factorial(num-1);
    }
}
int check_strong(int num){
    
    int temp=num,sum=0,d;
    while(num>0){
        d=num%10;
        num/=10;
        sum+=factorial(d);
    }
    if(temp==sum){
        return 1;
    }else{
        return 0;
    }

}
int main(){
    int n;
    printf("Enter the no. \n");
    scanf("%d",&n);
    if(check_strong(n)){
        printf("The entered no. is a strong no.\n");
    }else{
        printf("The entered no. is not a strong no.\n");
    }
    return 0;
}