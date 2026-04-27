#include<stdio.h>
int gcd(int a, int b);
int main(){
    int a,b;
    printf("Enter the two numbers: ");
    scanf("%d %d",&a, &b);
    int g=gcd(a,b);
    printf("GCD: %d",g);
    return 0;
}

int gcd(int a, int b){
    while(b!=0){
        int temp=a%b;
        a=b;
        b=temp;
        printf("\n %d %d \n",a,b);
    }
    return a;
}
