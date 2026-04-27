#include<stdio.h>
int fib(int n){
    if(n<=1){
        return n;
    }
    return fib(n-1)+fib(n-2);
}
int main(){
    int n,res;
    printf("Enter n: ");
    scanf("%d",&n);
    res=fib(n);
    printf("\nnth Fibonacci Number: %d",res);
    return 0;
}
